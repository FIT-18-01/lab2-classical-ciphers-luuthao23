#include <cctype>
#include <iostream>
#include <string>

using namespace std;

// Cho phép cả ký tự đặc biệt, không cần giới hạn nữa
bool is_valid_message(const string &text) {
    return true;
}

// Dịch chuyển 1 ký tự
char shift_char(char c, int shift) {
    if (!isalpha(static_cast<unsigned char>(c))) return c;

    char base = isupper(static_cast<unsigned char>(c)) ? 'A' : 'a';
    shift %= 26;
    if (shift < 0) shift += 26;

    return static_cast<char>((c - base + shift) % 26 + base);
}

// Mã hóa
string caesar_encrypt(const string &plaintext, int shift) {
    string ciphertext = "";

    for (char c : plaintext) {
        ciphertext += shift_char(c, shift);
    }

    return ciphertext;
}

// Giải mã
string caesar_decrypt(const string &ciphertext, int shift) {
    return caesar_encrypt(ciphertext, -shift);
}

int main() {
    int choice;

    while (true) {
        cout << "\n=== Caesar Cipher Demo ===\n";
        cout << "1. Encrypt\n2. Decrypt\n0. Exit\nChoose: ";
        cin >> choice;
        cin.ignore();

        if (choice == 0) break;

        string message;
        int shift;

        cout << "Enter message: ";
        getline(cin, message);

        cout << "Enter key: ";
        cin >> shift;
        cin.ignore();

        if (!is_valid_message(message)) {
            cout << "Invalid input.\n";
            continue;
        }

        if (choice == 1) {
            cout << "Ciphertext: " << caesar_encrypt(message, shift) << "\n";
        } else if (choice == 2) {
            cout << "Plaintext: " << caesar_decrypt(message, shift) << "\n";
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}