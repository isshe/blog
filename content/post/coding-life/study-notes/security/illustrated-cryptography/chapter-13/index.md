+++
title = "图解密码技术 —— 第十三章-PGP"
date = "2021-12-25 02:22:19 -0400"
author = "isshe"
categories = [ "读书笔记", "图解编码技术" ]
tags = [ "读书笔记", "图解编码技术", "Study Notes" ]
image = "image.png"
+++


PGP——密码技术的完美组合
---

# 什么是PGP？
* PGP: Pretty Good Privacy.
* 是`Philip Zimmermann`编写的密码软件。

# PGP有什么用？
* 可以保护处于极端状况(如:`性命攸关`)下的人们的隐私。


# 什么是OpenGPG？
* OpenGPG：对秘闻和数字签名进行定义的标准规范：RFC1991/RFC2440/RFC4880/RFC5581/RFC6637。
* GUN遵照OpenGPG(RFC4880)规范编写了GnuPG自由软件。


# 什么是信任网？
* PGP采用的确认`公钥`合法性的方法。
* 注意：`公钥是否合法`和`所有者是否可信`是两个不同的问题，因为尽管公钥合法，其所有者也可以是不可信的。