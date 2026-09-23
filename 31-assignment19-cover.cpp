#include <iostream>
#include <iomanip>

using namespace std;

// ==================== Required Function Prototypes ====================
double calculateSubtotal(double price, int quantity);
double determineDiscountRate(double subtotal);
void calculatePayment(double subtotal, double discountRate, double &discountAmount, double &finalPayment);
void displayReceipt(double subtotal, double discountRate, double discountAmount, double finalPayment);

// ==================== Main Application Program ====================
int main() {
    double productPrice = 0.0;
    int quantityPurchased = 0;

    // Displaying System Interface Banner
    cout << "=====================================" << endl;
    cout << "         PRODUCT SALES SYSTEM        " << endl;
    cout << "=====================================" << endl;

    // User Interactive Input Stream
    cout << "Enter product price : RM";
    cin >> productPrice;
    
    cout << "Enter quantity      : ";
    cin >> quantityPurchased;
    cout << endl;

    // 1. Pass by Value operation to calculate gross cost
    double calculatedSubtotal = calculateSubtotal(productPrice, quantityPurchased);

    // 2. Pass by Value operation to select appropriate percentage
    double rateDiscount = determineDiscountRate(calculatedSubtotal);

    // Declaring tracking parameters for Pass by Reference mutation
    double amtDiscount = 0.0;
    double netPayment = 0.0;

    // 3. Pass by Reference execution module
    calculatePayment(calculatedSubtotal, rateDiscount, amtDiscount, netPayment);

    // 4. Final receipt output print module
    displayReceipt(calculatedSubtotal, rateDiscount, amtDiscount, netPayment);

    return 0;
}

// ==================== Sub-Function Specifications ====================

// Function 1: Pass by Value processing module
double calculateSubtotal(double price, int quantity) {
    return price * quantity;
}

// Function 2: Pass by Value matrix evaluation logic
double determineDiscountRate(double subtotal) {
    if (subtotal < 100.00) {
        return 0.00;
    } 
    else if (subtotal >= 100.00 && subtotal <= 299.99) {
        return 0.05;
    } 
    else if (subtotal >= 300.00 && subtotal <= 499.99) {
        return 0.10;
    } 
    else {
        return 0.15;
    }
}

// Function 3: Pass by Reference execution modifying variables directly
void calculatePayment(double subtotal, double discountRate, double &discountAmount, double &finalPayment) {
    discountAmount = subtotal * discountRate;
    finalPayment = subtotal - discountAmount;
}

// Function 4: Visual formatting print module matching expected output guidelines
void displayReceipt(double subtotal, double discountRate, double discountAmount, double finalPayment) {
    cout << "Purchase Summary" << endl;
    cout << "-------------------------------------" << endl;
    
    // Forcing fixed point numerical float presentation (2 decimal positions)
    cout << fixed << setprecision(2);
    
    // Custom width adjustments to look identical to formatting targets uniquely
    cout << left << setw(16) << "Subtotal"        << " : RM" << subtotal << endl;
    cout << left << setw(16) << "Discount Rate"   << " : "   << noboolalpha << (discountRate * 100) << "%" << endl;
    cout << left << setw(16) << "Discount Amount" << " : RM" << discountAmount << endl;
    cout << left << setw(16) << "Final Payment"   << " : RM" << finalPayment << endl;
}