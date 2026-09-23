#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// ==================== Custom Functional Prototypes ====================
void render_terminal_header();
double fetch_statutory_ratio();
double compute_total_gross_income(double total_hours, double base_rate);
void print_financial_breakdown(double total_gross, double fund_deduction, double final_net);

// ==================== Application Core ====================
int main() {
    string worker_fullname;
    double registered_hours = 0.0;
    double individual_rate = 0.0;

    // Execute application banner
    render_terminal_header();

    // Streamline user capture mechanisms
    cout << "Enter employee name : ";
    getline(cin, worker_fullname);
    
    cout << "Enter working hours : ";
    cin >> registered_hours;
    
    cout << "Enter hourly rate   : RM";
    cin >> individual_rate;
    cout << endl;

    // Mathematical evaluation pipeline
    double structural_gross   = compute_total_gross_income(registered_hours, individual_rate);
    double dynamic_tax_ratio  = fetch_statutory_ratio();
    double specific_deduction = structural_gross * dynamic_tax_ratio;
    double net_take_home      = structural_gross - specific_deduction;

    // Output formatted receipt statement
    print_financial_breakdown(structural_gross, specific_deduction, net_take_home);

    return 0;
}

// ==================== Specialized Module Implementations ====================

// Visual container initialization
void render_terminal_header() {
    cout << "=====================================" << endl;
    cout << "       EMPLOYEE SALARY SYSTEM        " << endl;
    cout << "=====================================" << endl;
}

// Access static evaluation parameter
double fetch_statutory_ratio() {
    return 0.11;
}

// Evaluates standard vs premium shift hours
double compute_total_gross_income(double total_hours, double base_rate) {
    if (total_hours <= 40.0) {
        return total_hours * base_rate;
    } else {
        double standard_stipend = 40.0 * base_rate;
        double surplus_hours    = total_hours - 40.0;
        double premium_stipend  = surplus_hours * base_rate * 1.5;
        return standard_stipend + premium_stipend;
    }
}

// Generates structural financial records with precise spacing arrays
void print_financial_breakdown(double total_gross, double fund_deduction, double final_net) {
    cout << "Salary Information" << endl;
    cout << "-------------------------------------" << endl;
    
    // Set system format flag for strict fiscal presentation
    cout << fixed << setprecision(2);
    
    // 20-character width layout for automated string adjustments
    cout << left << setw(20) << "Gross Salary"      << " : RM" << total_gross     << endl;
    cout << left << setw(20) << "Contribution (11%)" << " : RM" << fund_deduction   << endl;
    cout << left << setw(20) << "Net Salary"        << " : RM" << final_net       << endl;
}