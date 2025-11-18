#include <iostream>
using namespace std;

int main() {
    const double PRICE = 0.8; // 每个苹果0.8元
    int dayCount = 1; // 天数（初始为第1天）
    int currentNum = 2; // 第1天购买数量
    int totalNum = currentNum; // 总购买数量

    // 循环购买，直到数量超过100
    while (true) {
        int nextNum = currentNum * 2; // 当天购买量=前天的2倍
        if (nextNum > 100) break;
        totalNum += nextNum;
        dayCount++;
        currentNum = nextNum;
    }

    double totalCost = totalNum * PRICE;
    double avgCost = totalCost / dayCount;

    cout << "总购买数：" << totalNum << "个\n总天数：" << dayCount << "天\n总花费：" << totalCost << "元\n日均花费：" << avgCost << "元" << endl;
    return 0;
}