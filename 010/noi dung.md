# CHUỖI KÝ TỰ (STRING) 2

### Bài 1: Nhập 1 chuỗi ký tự, sau đó xuất chuỗi vừa nhập ra màn hình.

Nhập 1 ký tự. Cho biết trong chuỗi ban đầu:
*	Vị trí xuất hiện đầu tiên của ký tự đó
*	Vị trí xuất hiện cuối cùng của ký tự đó
*	Ký tự đó xuất hiện bao nhiêu lần 

(Đối với 2 yêu cầu đầu tiên, nếu ký tự không xuất hiện trong chuỗi, trả về -1)
---

### Bài 2: Nhập 1 chuỗi ký tự S1, sau đó xuất chuỗi vừa nhập ra màn hình.
Nhập 1 chuỗi ký tự S2. Cho biết vị trí xuất hiện đầu tiên của chuỗi S2 trong chuỗi S1 ban đầu (Nếu không xuất hiện, trả về -1).

| S1 | S2 |	Vị trí xuất hiện đầu tiên|
|---|--|------------------------------|
|Hello World|	Hello|	0|
|Hello World|	World|	6|
|Say hello to hell|	hell|	4|
|Say hello to hell|	ABC|	-1|
---

### Bài 3: Nhập 1 chuỗi ký tự S1, sau đó xuất chuỗi vừa nhập ra màn hình.

Nhập 1 chuỗi ký tự S2 có độ dài ≤ S1 (có kiểm tra điều kiện).

Nhập số nguyên X

Thay thế chuỗi S2 vào chuỗi S1 tại vị trí X.

|S1	|S2	|X	|Kết quả|
|---|---|---|-------|
|Hello World|	ABC|	0|	ABClo World|
|Hello World|	ABC|	3|	HelABCWorld|
|Hello World|	ABC|	9|	Hello WorAB|
---

### Bài 4: Nhập 1 chuỗi ký tự. Cho biết chuỗi đó có đối xứng hay không.
---

### Bài 5: Nhập họ tên. Xuất ra màn hình phần họ và phần tên.
|Họ tên|	Họ|	Tên|
|------|------|----|
|Bui Van Huy|	Bui Van|	Huy|
|Nguyen Van|	Nguyen|	Van|

Gợi ý: Dùng hàm s.substr(x, y) để tách 1 chuỗi con có chiều dài y từ vị trí x của chuỗi s.

**Ví dụ:** Với s = “Hello World” thì s.substr(2, 5) sẽ cho ra chuỗi “llo W”
---

### Bài 6: Nhập 1 số có 2 chữ số ở dạng chuỗi. Tính tổng 2 chữ số của số này.

### Bài 7: Nhập ngày tháng năm vào 1 chuỗi theo định dạng dd/mm/yyyy. Xuất ra thông báo theo định dạng: Hom nay la ngay dd thang mm nam yyyy.

**Ví dụ:** Nhập ngày 27/06/2023, xuất ra màn hình: Hom nay la ngay 27 thang 06 nam 2023
