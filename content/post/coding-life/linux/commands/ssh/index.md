+++
title = "Linux 命令 —— ssh"
categories = [ "Linux 命令" ]
tags = [ "ssh", "linux 命令", "command", "linux" ]
date = "2022-10-16 12:00:00 +0800"
author = "isshe"
image = "image.jpg"
+++



ssh
---


# 隧道

场景：家里内网机器 A 想要访问公司的内网机器 B。
条件：需要一个公网机器 C（假设 IP 是 1.1.1.1）。

* 打开公网机器的转发

* 在 B 上执行：

```bash
ssh -p 22 -NR 0.0.0.0:10443:0.0.0.0:443 root@1.1.1.1
# 前面部分 0.0.0.0:10443：C 的信息
# 后面部分 0.0.0.0:443：B 的信息
```

**注意：此时链接会一直保持，终端不会返回。**

* 在 A 上执行：

```bash
ssh -p 22 -NL 0.0.0.0:10443:0.0.0.0:10443 root@1.1.1.1
# 前面部分 0.0.0.0:10443：A 的信息
# 后面部分 0.0.0.0:10443：C 的信息
```

**注意：此时链接会一直保持，终端不会返回。**

此时，在 A 上通过 localhost:10443 即可访问 B 的 443。


## 端口映射

此方法相比上面的更为简化，直接把内网端口映射到外网设备上，直接访问外网设备映射的端口即可。

* 修改公网设备的 ssh 配置

```bash
sudo vi /etc/ssh/sshd_config

# 设置
GatewayPorts yes

# 重启 ssh 服务
sudo systemctl restart sshd
```

* 进行端口映射

在内网机器上：

```bash
ssh -p 22 -NR 0.0.0.0:10443:0.0.0.0:443 root@1.1.1.1
# 前面部分 0.0.0.0:10443：公网机器信息
# 后面部分 0.0.0.0:443：内网机器信息
```

**注意：此时链接会一直保持，终端不会返回。**

至此，端口映射完成，可以从任意可访问外网的机器上，访问 1.1.1.1:10443 即可访问到 内网机器的 443 端口。

# SSH 问题

## SSH 连接慢

```bash
# 可以尝试指定算法
ssh -o KexAlgorithms=ecdh-sha2-nistp521 root@192.168.1.102 -v

# 也可以尝试修改 mtu

sudo ip li set mtu 1200 dev wlan0
# OR
sudo ifconfig wlan0 mtu 1200
```
