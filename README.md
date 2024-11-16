# Welcome to BMI Calculator

This C++ program calculates and evaluates an individual's Body Mass Index (BMI) based on their height (in feet and inches) and weight (in kilograms). It classifies the BMI into categories and provides personalized health and fitness recommendations.

## Features
- **Height Input**: Accepts height in feet and inches, converts it to meters for accurate BMI calculation.
- **Weight Input**: Accepts weight in kilograms.
- **BMI Calculation**: Uses the formula:
  \[
  BMI = \frac{\text{Weight (kg)}}{\text{Height (m)}^2}
  \]
- **BMI Classification**: Categorizes BMI into the following:
  - Underweight (BMI < 18.5)
  - Normal weight (18.5 ≤ BMI < 24.9)
  - Overweight (25 ≤ BMI < 29.9)
  - Obesity (BMI ≥ 30) with subcategories:
    - Class 1: 30 ≤ BMI < 34.9
    - Class 2: 35 ≤ BMI < 39.9
    - Class 3: BMI ≥ 40
- **Health Recommendations**: Provides tailored advice based on the BMI category, including diet plans and exercise suggestions.

## Usage
1. Run the program in any C++ environment or IDE.
2. Enter your height in feet and inches.
3. Enter your weight in kilograms.
4. The program will:
   - Calculate and display your BMI.
   - Classify your BMI into a health category.
   - Provide personalized recommendations based on your BMI classification.

## Example Outputs
### Input: 
- Height: 5 feet 8 inches
- Weight: 70 kg

### Output: 
```
Your BMI: 23.24
Classification: Normal weight
Recommendation: Balanced diet and regular aerobic exercises.
```

### Input: 
- Height: 6 feet 0 inches
- Weight: 100 kg

### Output:
```
Your BMI: 29.14
Classification: Obesity
Obesity Class 1
Recommendation: Weight loss plan including a restricted diet, a combination of cardio and strength exercises, and professional guidance from a doctor or nutritionist.
```
