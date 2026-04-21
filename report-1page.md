# Report 1 Page – FIT4012 Lab 2

## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.

## 2. Cách làm
- Hoàn thiện Caesar Cipher cho chữ thường, dấu cách và giải mã.
- Hoàn thiện Rail Fence Cipher cho giải mã, giữ dấu cách, kiểm tra đầu vào và đọc file.
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Caesar Cipher
| Input | Key | Ciphertext / Plaintext | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 3 | L ORYH BRX | Giữ nguyên dấu cách, dịch đúng 3 ký tự. |
| hello world | 5 | mjqqt btwqi | Xử lý chữ thường chính xác. |
| LORYH BRX | 3 | ILOVE YOU | Giải mã đúng với key 3. |

### 3.2 Rail Fence Cipher
| Input | Rails | Ciphertext / Plaintext | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 2 | ILV O OEYU | Mã hoá zigzag 2 ray và giữ dấu cách. |
| I LOVE YOU | 4 | I  EYLVOOU | Kết quả thay đổi rõ khi tăng số ray lên 4. |
| IOEOLVYU | 2 | ILOVEYOU | Giải mã Rail Fence 2 ray chính xác. |

### 3.3 Input validation / file input
- Trường hợp đầu vào không hợp lệ: nhập `HELLO123` -> chương trình báo `Invalid input. Only letters and spaces are allowed.`
- Kết quả đọc từ `data/input.txt`: đọc được chuỗi `I LOVE YOU` và mã hoá thành công (ví dụ với 2 ray: `ILV O OEYU`).

## 4. Kết luận
Không có gì khó khăn