#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
vector<int> num;
int countCase() {
    sort(num.begin(), num.end(), less<int>());
    int s = 0, e = n - 1;
    int count = 0;
    while (s < e) {
        if (num[s] + num[e] == m) {
            count++;
            s++;
            e--;
        }
        else if (num[s] + num[e] < m) {
            s++;
        }
        else {
            e--;
        }
    }
    return count;
}
int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int c;
        scanf("%d", &c);
        num.push_back(c);
    }
    int answer = countCase();
    printf("%d\n", answer);
}