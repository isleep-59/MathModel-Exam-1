# README

![image-20220729151547839](C:\Users\isleep\AppData\Roaming\Typora\typora-user-images\image-20220729151547839.png)

## Problem

### 问题一

​	从京广全线选择一个区间段，如北京至郑州，或武汉至广州，根据现行的列车时刻表最多能安排多少趟列车，并制订出具体的“列车运行图”。

![img](file:///C:\Users\isleep\Documents\Tencent Files\1834317718\Image\Group2\{V\ZJ\{VZJ3URR69P89ORJP4TH`%V.jpg)

### 问题二

​	对现行的列车时刻表进行分析，如果要在客流增加时（如春运和黄金周期间）在北京至石家庄、北京至长沙、长沙至广州、石家庄至郑州间各增开一对临时客车(或你认为京广高铁线另两站之间应该增开临时客车)，在不改变现行列车时刻表的条件下，制订出临时客车的时刻表及“列车运行图”。

### 问题三

​	如果某一列客车因故晚点，就会影响到后续列车的正常运行，给出可行的实时调整相关列车的运行策略，使得造成的影响最小，并就某一列客车进行分析检验。



## Solution

### 问题一

1. 输入起点和终点
2. 求出两点间的所有路径：
    1. 每一条路径输出为一个表（列车运行图），其中包含的信息：
        1. 站次


