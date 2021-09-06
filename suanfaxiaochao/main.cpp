#include <iostream>
using namespace std;
void tarverse() {
    int arr[5] = {1, 2, 3, 4, 5};
    //    for(int i=0;i<arr.length();i++){
    //
    //    }
}

int main() {
    int s1[] = {1, 2, 3, 4, 5};
    int s2[5] = {};
    int s3[5];
    for (int i = 0; i < 5; i++) {
        s3[i] = i;
    }

    for (int i = 0; i < 5; i++) {
        std::cout << "s1[i]: " << s1[i] << "  ";
        std::cout << "s2[i]: " << s2[i] << "  ";
        std::cout << "s3[i]: " << s3[i] << std::endl;
    }
    return 0;
}
