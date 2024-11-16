#include <iostream>
using namespace std;


int main() {
    int feet, inches;
    double weightKg;
    const double metersPerInch = 0.0254;
    const double inchesPerFoot = 12;

    // Input: User's height in feet and inches
    cout << "Enter height (feet): ";
    cin >> feet;
    cout << "Enter remaining height (inches): ";
    cin >> inches;

    // Input: User's weight in kilograms
    cout << "Enter weight (kg): ";
    cin >> weightKg;

    // Convert height to meters
    double heightInInches = feet * inchesPerFoot + inches;
    double heightMeters = heightInInches * metersPerInch;

    // Calculate BMI
    double bmi = weightKg / (heightMeters * heightMeters);

    // Output: Display BMI and classification
    cout << "Your BMI is " << bmi << ".\n";

    // Classify BMI and provide recommendations
    if (bmi < 18.5) {
        cout << "Underweight: Consider a high-calorie diet and strength training exercises." << endl;
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Normal weight: Maintain a balanced diet and regular aerobic exercises." << endl;
    }
    else if (bmi >= 25 && bmi < 29.9) {
        cout << "Overweight: Try a calorie-controlled diet and combine cardio with strength training exercises." << endl;
    }
    else {
        if (bmi >= 30 && bmi < 35) {
            cout << "Obesity Class 1: Follow a tailored weight loss plan, focusing on dietary restrictions and combined exercises." << endl;
        }
        else if (bmi >= 35 && bmi < 40) {
            cout << "Obesity Class 2: Implement a comprehensive diet plan and consult with a healthcare professional." << endl;
        }
        else {
            cout << "Obesity Class 3: Require intensive medical guidance with a structured diet and exercise regimen." << endl;
        }
    }

    return 0;
}
