/*Linear search: duyệt từ đầu đến cuối, theo thứ tự ,so sánh từng phần tử 1 với phần tử mình muốn tìm    Độ phúc tạp: Tệ nhất: o(n)
chỉ nên dùng khi dữ liệu nhỏ, chưa được sắp xếp, ít bug*/
/* binary search: xét phân tử ở giữa, nếu lớn hơn số cần tìm thì bỏ phần lớn hơn số đang xét và cứ thế xét cái ở giữa cho tới khi kiếm được số cần kiếm.
Độ phúc tập: o(log n)*/
/* STL là thư viện chuẩn C++, nó cho mình:
Container (vector, set, map…)

Algorithm (sort, find, binary_search…)

Iterator*/
/*VECTOR:
mảng động thông minh.

Khác mảng thường:

Tự tăng kích thước

Không cần new/delete

Có nhiều hàm hỗ trợ
push_back()

pop_back()

size()

empty()

clear()

reserve()
capacity()*/
//Bài tập ( mai làm)
/*Bài 1

Nhập n số vào vector và in ngược lại.

Bài 2

Tính tổng các phần tử chẵn.

Bài 3

Xây đồ thị bằng vector 2 chiều.*/
/*Bài 1 (cơ bản)

Viết hàm tìm vị trí đầu tiên của số x trong mảng.

Input:

5
1 3 5 7 9
7

Output:

3
Bài 2

Tìm xem số x có tồn tại không (in YES/NO).

Bài 3

Đếm xem số x xuất hiện bao nhiêu lần.*/
/*Bài 1 (cơ bản)

Viết binary search tìm vị trí của x.

Bài 2

Tìm vị trí đầu tiên (first occurrence).

Ví dụ:

1 2 2 2 3 4

Tìm 2 → trả về 1.

Bài 3 (nâng cấp)

Cho mảng đã sắp xếp.
Tìm số nhỏ nhất ≥ x.
(Chính là lower_bound)

Bài 4 (Answer Space – level thi tỉnh)

Có N khúc gỗ, cần cắt ra ít nhất K thanh gỗ bằng nhau.
Hỏi độ dài tối đa có thể cắt là bao nhiêu?

👉 Đây là dạng:
Binary Search trên không gian đáp án*/
/*Bài 1

Dùng sort() để sắp xếp mảng tăng dần.

Bài 2

Dùng binary_search() kiểm tra phần tử tồn tại.

Bài 3

So sánh tốc độ:

Tự viết binary search

Dùng std::binary_search*/




























