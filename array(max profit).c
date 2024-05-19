#include<stdio.h>

int max_profit(int prices[], int n) {
    if (n <= 1) {
        return 0;
    }
    int min_price = prices[0];
    int max_profit = 0;
    for (int i = 0; i < n; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            int current_profit = prices[i] - min_price;
            if (current_profit > max_profit) {
                max_profit = current_profit;
            }
        }
    }
    return max_profit;
}

int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int Max_profit = max_profit(prices, n);
    printf("Maximum profit: %d\n", Max_profit);

    return 0;
}
