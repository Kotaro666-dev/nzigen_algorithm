#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; // 1e18
const double EPS = 1e-10;

int main(void)
{
    int left = 0;
    int right = 99;
    int counter = 0;

    while (right - left > 1)
    {
        int mid = left + (right - left) / 2;

        cout << "あなたの年齢は " << mid << " 歳ですか？それともそれ以上ですか？ (yes / no)" << endl;
        string ans;
        cin >> ans;

        if (ans == "yes")
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
        counter++;
    }
    cout << "あなたの年齢は " << left << " 歳です!" << endl;
    cout << counter << endl;
    return (0);
}