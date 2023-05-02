# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Builder 建構者
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---
<br>

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---
<br>

## 目的
將物件的建構過程和表示方式分離開來，以及提供一個方法可以創建複雜物件的不同部分，從而使構建過程更加靈活。

---
<br>

## 使用時機
當需要創建複雜的物件時，將其構建過程分離開來以更好地管理構建過程和不同部分之間的依賴關係。

---
<br>

## URL結構圖
![](https://drive.google.com/uc?id=1cKeKLErG4dnPn97iVP1t4krt6cnJ3mdT)

---
<br>

## 實作成員
* Product
  * 表示正在創建的複雜物件。
* Builder
  * 定義創建產品不同部分的介面。
* ConcreteBuilder
  * 實現Builder介面以創建並組裝Product的不同部分。
* Director
  * 控制創建產品的流程，根據不同的需要使用Builder來創建和組裝Product。

---
<br>

## 實作範例:

---
<br>

## 參考資料


---
<br>

---
<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
