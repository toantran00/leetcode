#include "stdcpp.h"
using namespace std;
#include <climits> // For LLONG_MAX, LLONG_MIN
#include <stdexcept> // For try-catch block
   bool check (char n)
   {
       return n >= '0' && n <= '9';
   }

   int myAtoi(string s) {
       string result = "";
       int n = s.size();
       bool flag = false;
       int i = 0;

       // Bỏ qua các dấu cách đầu chuỗi
       for (; i < n && s[i] == ' '; i++) {}

       // Kiểm tra dấu + hoặc -
       if (i < n && (s[i] == '-' || s[i] == '+')) {
           flag = (s[i] == '-');
           i++;
       }

       // Xử lý các chữ số
       for (; i < n && check(s[i]); i++) {
           result.push_back(s[i]);
       }

       // Nếu không có chữ số hợp lệ, trả về 0
       if (result.empty()) {
           return 0;
       }

       // Chuyển đổi kết quả thành số và xử lý dấu âm
       long long ans = 0;
       try {
           ans = stoll(result);  // Sử dụng stoll để chuyển đổi chuỗi
       } catch (const std::out_of_range& e) {
           // Nếu xảy ra lỗi tràn số, kiểm tra và trả về INT_MIN hoặc INT_MAX
           if (flag) {
               return INT_MIN;
           } else {
               return INT_MAX;
           }
       }

       // Xử lý dấu âm
       if (flag) {
           ans = -ans;
       }

       // Kiểm tra tràn số nguyên
       if (ans < INT_MIN) {
           return INT_MIN;
       } else if (ans > INT_MAX) {
           return INT_MAX;
       }

       return (int)ans;
   }
int main()
{
    int result = myAtoi(" -042");
    cout<<result;
}