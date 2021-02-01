/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 07:22:48 by kkamashi          #+#    #+#             */
/*   Updated: 2021/02/02 07:39:00 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const double EPS = 1e-10;

int main(void)
{
    int left = 0;
    int right = 99;
    int counter = 0;

    /* A さんの年齢を 1 つに絞れないうちは繰り返す */
    while (right - left > 1)
    {
        int mid = left + (right - left) / 2; // 区間の真ん中

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