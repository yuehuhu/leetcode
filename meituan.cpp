//
// Created by LJZ on 2021/9/6.
//
#include <cctype>
#include <iostream>
using namespace std;

int meituan1() {
  int T;
  std::cin >> T;
  for (int i = 0; i < T; i++) {
    string s;
    bool hasdigit = false;
    bool hasdecide = false;
    std::cin >> s;
    if (!isalpha(s[0])) {
      std::cout << "Wrong" << std::endl;
      hasdecide = true;
      continue;
    }
    for (int j = 0; j < s.length(); j++) {
      if (!isalpha(s[j]) && !(hasdigit = isdigit(s[j]))) {
        std::cout << "Wrong" << std::endl;
        hasdecide = true;
        break;
      }
    }
    if (hasdecide) {
      continue;
    }
    if (hasdigit) {
      std::cout << "Accept" << std::endl;
    } else {
      std::cout << "Wrong" << std::endl;
    }
  }
  return 0;
}