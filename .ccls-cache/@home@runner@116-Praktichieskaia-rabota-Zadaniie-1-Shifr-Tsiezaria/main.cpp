// 11.6 Практическая работа. Задание 1. Шифр Цезаря
//=============================================================
#include <iostream>
#include <string>
using namespace std;
// Функция шифрования --------------------
string encrypt_caesar(string text, int k){
  for (auto &i : text) {
    if (i >= 'a' && i <= 'z')
      i = ((i - 'a' + k) % 26) + 'a';
    else if (i >= 'A' && i <= 'Z')
      i = ((i - 'A' + k) % 26) + 'A';
  }
  return text;
}
// Функция дешифрования ------------------
string decrypt_caesar(string shifr, int k){
  for (auto &i : shifr) {
    if (i >= 'a' && i <= 'z')
      i = ((i - 'a' - k + 26) % 26) + 'a';
    else if (i >= 'A' && i <= 'Z')
      i = ((i - 'A' - k + 26) % 26) + 'A';
  }
  return shifr;
}
// ----------------------------------------
int main() {
  cout << "11.6 The practical work. \n Task 1. Caesar’s Cipher\n" << endl;
  string text, shifr;
  int k;
  cout << "Enter the text to encode:" << endl;
  getline(cin, text);
  cout << "Enter coefficient drift:" << endl;
  cin >> k;
 
  cout << "\t>> Encrypted text: \n" << encrypt_caesar(text, k) << endl;
  shifr = encrypt_caesar(text, k);
  cout << "\n\t>> Newly decrypted text: \n" << decrypt_caesar(shifr, k) << endl;
  return 0;
}