# Report 1 Page – FIT4012 Lab 2

## 1. Mục tiêu
Mục tiêu của bài lab là hiểu và cài đặt hai thuật toán mã hóa cơ bản: Caesar Cipher và Rail Fence Cipher. Thông qua đó, nắm được nguyên lý hoạt động của mã hóa đối xứng, cách dịch chuyển ký tự và hoán vị vị trí ký tự trong chuỗi.

## 2. Cách làm
Hoàn thiện Caesar Cipher:
Hỗ trợ chữ hoa, chữ thường và dấu cách.
Cài đặt cả mã hóa và giải mã (dùng shift âm).
Hoàn thiện Rail Fence Cipher:
Cài đặt mã hóa dạng zigzag.
Xây dựng thuật toán giải mã bằng cách đánh dấu và khôi phục lại chuỗi.
Giữ nguyên dấu cách trong quá trình xử lý.
Thêm kiểm tra đầu vào chỉ gồm chữ cái và khoảng trắng.
Thử nghiệm với nhiều test case khác nhau.
Đọc dữ liệu từ file data/input.txt.

## 3. Kết quả chính
### 3.1 Caesar Cipher
| Input | Key | Ciphertext / Plaintext | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 3 | L ORYH BRX | Mã hóa đúng, giữ nguyên dấu cách |
| hello world | 5 | mjqqt btwqi | Hoạt động tốt với chữ thường |
| LORYH BRX | 3 | I LOVE YOU | Giải mã chính xác |

### 3.2 Rail Fence Cipher
| Input | Rails | Ciphertext / Plaintext | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 2 | ILV OEOUY | Đúng theo zigzag 2 hàng |
| I LOVE YOU | 4 | I O VUELYO | Đúng, phân bố theo 4 rails |
| IOEOLVYU | 2 | I LOVE YOU | Giải mã chính xác |

### 3.3 Input validation / file input
Trường hợp đầu vào không hợp lệ:
Nếu nhập ký tự đặc biệt hoặc số (ví dụ: HELLO123) → chương trình báo lỗi.
Kết quả đọc từ data/input.txt:
Chương trình đọc đúng dòng đầu tiên và thực hiện mã hóa bình thường.

## 4. Kết luận
Qua bài lab, em hiểu rõ hơn về cách hoạt động của các thuật toán mã hóa cổ điển. Caesar Cipher giúp em hiểu nguyên lý dịch chuyển ký tự, trong khi Rail Fence Cipher giúp em hình dung cách hoán vị dữ liệu theo dạng zigzag. Khó khăn lớn nhất là phần giải mã Rail Fence vì phải xác định lại vị trí ký tự ban đầu. Tuy nhiên, sau khi thực hành và debug, em đã hiểu rõ hơn cách hoạt động của thuật toán này.
