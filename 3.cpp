#include <iostream>

using namespace std;

int main()
{
    int N;
    double volume, bill, totalRevenue = 0;
    const double pricePerLitter = 0.25;

    cout<<"Enter number of deliveries: ";
    cin>> N;

    for (int i = 1; i <= N; i++){
        cout<<"Enter volume (litters) for delivery " << i <<": ";
        cin>> volume;

        bill = volume * pricePerLitter;

        if (volume > 5000){
            bill = bill - (bill * 0.05);
        }
        cout<<"Bill for delivery" << i <<" = $" << bill <<endl;\

        totalRevenue += bill;
    }
    cout<<"\nTotal revenue: $" << totalRevenue <<endl;

    return 0;
}