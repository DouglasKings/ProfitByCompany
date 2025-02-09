#include <stdio.h>

double calculateRevenue(double servicesRate, double totalServices, double itemsSold, double unitPrice);
double calculateProfit(double Revenue, double Cost);

int main() {

    double servicesRate, totalServices, itemsSold, unitPrice, Revenue, Cost, Profit;

    printf("Enter the services rate: ");
    scanf("%lf", &servicesRate);
    servicesRate /= 100; 
    printf("Enter the total services: ");
    scanf("%lf", &totalServices);
    printf("Enter the items sold: ");
    scanf("%lf", &itemsSold);
    printf("Enter the unit price: ");
    scanf("%lf", &unitPrice);
    printf("Enter the cost is: ");
    scanf("%lf", &Cost);

    Revenue = calculateRevenue(servicesRate, totalServices, itemsSold, unitPrice);
    Profit = calculateProfit(Revenue, Cost);

    printf("The services rate is: %.2lf%% \n", servicesRate);
    printf("The total services is: $%.2lf \n", totalServices);
    printf("The items sold is: $%.2lf \n", itemsSold);
    printf("The unit price is: $%.2lf \n", unitPrice);
    printf("The cost is: $%.2lf \n", Cost);
    printf("The Profit is: $%.2lf \n", Profit);

    return 0;
}

double calculateRevenue(double servicesRate, double totalServices, double itemsSold, double unitPrice){
   double SalesServicesMade = servicesRate * totalServices;
   double SalesProductsMade = itemsSold * unitPrice;
   return SalesServicesMade + SalesProductsMade;
}
double calculateProfit(double Revenue, double Cost){
    return Revenue - Cost;
}