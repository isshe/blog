+++
title = "图解密码技术 —— 第七章-单向散列函数"
date = "2021-12-25 02:22:19 -0400"
author = "isshe"
categories = [ "读书笔记", "图解编码技术" ]
tags = [ "读书笔记", "图解编码技术", "Study Notes" ]
image = "image.jpeg"
+++


第七章 单向散列函数
---

单向散列函数(one-way hash function): 可以根据消息的内容，计算出散列值。
* 散列值可以被用于检查消息的完整性。
* 输入：消息(message)；输出：散列值(hash value)。

# 性质
抗碰撞性：collision resistance，难以发生碰撞。
单向性：one-way，无法通过散列值反算出消息的性质。

# 术语
* 单向散列函数：消息摘要函数、哈希函数、杂凑函数。
* 消息：原像。
* 散列值：消息摘要、指纹。
* 完整性：一致性。