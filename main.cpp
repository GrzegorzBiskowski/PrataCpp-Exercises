#include <iostream>
#include <cstring>

using namespace std;

int ch2_ex1(void);
int ch2_ex2(void);
int ch2_ex3(void);
void ch2_ex3_areYou(void);
void ch2_ex3_brother(void);
int ch2_ex4(void);
int ch2_ex5(void);
int ch2_ex5_lyToAU(double lightYears);
int ch2_ex6(void);
void ch2_ex6_time(int hours, int minutes);
int ch3_ex1(void);
int ch3_ex2(void);
int ch3_ex3(void);
int ch3_ex4(void);
int ch3_ex5(void);
int ch3_ex6(void);
int ch4_ex1(void);
int ch4_ex2(void);
int ch4_ex3(void);
int ch4_ex4(void);
int ch4_ex5(void);
int ch4_ex6(void);
int ch4_ex7(void);
int ch4_ex8(void);
int ch4_ex9(void);
int ch5_ex1(void);
int ch5_ex2(void);
int ch5_ex3(void);
int ch5_ex4(void);
int ch5_ex5(void);
int ch5_ex6(void);
int ch5_ex7(void);
int ch5_ex8(void);
int ch5_ex9(void);

int main()
{
    ch5_ex9();
    return 0;
}

int ch2_ex1(void)
{
    cout << "FirstName Surname" << endl;
    cout << "mail: something@gmail.com" << endl;
    return 0;
}
int ch2_ex2(void)
{
    double dMeters, dMiles;
    cout << "How many meters? ";
    cin >> dMeters;
    dMiles = dMeters / 1852.0;
    cout << dMeters << " meters are equal to " << dMiles << " miles ." << endl;
    return 0;
}
void ch2_ex3_areYou(void)
{
    cout << "Are you sleeping" << endl;
}
void ch2_ex3_brother(void)
{
    cout << "Brother John?" << endl;
}
int ch2_ex3(void)
{
    ch2_ex3_areYou();
    ch2_ex3_areYou();
    ch2_ex3_brother();
    ch2_ex3_brother();
    return 0;
}
int ch2_ex4(void)
{
    float fDegC, fDegF;
    cout << "What is the temperature in Celsius?: ";
    cin >> fDegC;
    fDegF = (1.8 * fDegC) + 32.0;
    cout << fDegC << " C is equal to " << fDegF << " F." << endl;
    return 0;
}
int ch2_ex5_lyToAU(double dLightYears)
{
    int nAU;
    nAU = dLightYears * 63240;
    return nAU;
}
int ch2_ex5(void)
{
    double dLightYears;
    cout << "How many light years? ";
    cin >> dLightYears;
    cout << dLightYears << " light years = " << ch2_ex5_lyToAU(dLightYears) << " AU (astronomical units)." << endl;
    return 0;
}
void ch2_ex6_time(int nHours, int nMinutes)
{
    cout << "Time: "<< nHours << ":" << nMinutes << endl;
}
int ch2_ex6(void)
{
    int nHours, nMinutes;
    cout << "How many hours? ";
    cin >> nHours;
    cout << "How many minutes? ";
    cin >> nMinutes;
    ch2_ex6_time(nHours, nMinutes);
    return 0;
}
int ch3_ex1(void)
{
    const float CM_TO_INCH = 2.54;
    const int INCH_IN_FOOT = 12;
    float fHeith_cm;
    int nHeight_ft, nHeight_inch, nMod_inch;
    cout << "How tall are you (in cm)? ";
    cin >> fHeith_cm;
    nHeight_inch = fHeith_cm / CM_TO_INCH;
    nHeight_ft = nHeight_inch / INCH_IN_FOOT;
    cout << nHeight_inch << endl;
    nMod_inch = nHeight_inch % INCH_IN_FOOT;
    cout << "You are " << nHeight_ft << " feet " << nMod_inch << " inch(es) tall." << endl;
    return 0;
}
int ch3_ex2(void)
{
    const float M_IN_INCH = 0.0254, LBS_IN_KG = 2.2046;
    const int INCH_IN_FOOT = 12;
    float fMass_lbs, fMass_kg, fHeight_m, fBMI;
    int nHeight_feet, nHeight_inches;
    cout << "How tall are you?" << endl << "Feet: ";
    cin >> nHeight_feet;
    cout << "Inches: ";
    cin >> nHeight_inches;
    cout << "How heavy are you (in lbs)? ";
    cin >> fMass_lbs;
    fHeight_m = ((nHeight_feet * INCH_IN_FOOT) + nHeight_inches) * M_IN_INCH;
    fMass_kg = fMass_lbs / LBS_IN_KG;
    fBMI = fMass_kg / (fHeight_m * fHeight_m);
    cout << "Your BMI is equal to " << fBMI << "." << endl;
    return 0;
}
int ch3_ex3(void)
{
    const float MIN_IN_DEG = 60.0, SEC_IN_DEG = 3600.0;
    int nDegrees, nArcMin, nArcSecs;
    float fDegrees;
    cout << "Give me some length in degrees, arc minutes and arc seconds." << endl << "Degrees: ";
    cin >> nDegrees;
    cout << "Arc minutes: ";
    cin >> nArcMin;
    cout << "Arc seconds: ";
    cin >> nArcSecs;
    fDegrees = nDegrees + (nArcMin / MIN_IN_DEG) + (nArcSecs / SEC_IN_DEG);
    cout << nDegrees << " degrees, " << nArcMin << " arc minutes, " << nArcSecs << " arc seconds = " << fDegrees << " degrees." << endl;
    return 0;
}
int ch3_ex4(void)
{
    const int HRS_IN_DAY = 24, MINS_IN_HR = 60, SECS_IN_MIN = 60;
    long lSeconds, nDays, nHours, nMinutes, nSecondsLeft, nMinutesLeft, nHoursLeft;
    cout << "How many seconds? ";
    cin >> lSeconds;
    nMinutes = lSeconds / SECS_IN_MIN;
    nSecondsLeft = lSeconds % SECS_IN_MIN;
    nHours = nMinutes / MINS_IN_HR;
    nMinutesLeft = nMinutes % MINS_IN_HR;
    nDays = nHours / HRS_IN_DAY;
    nHoursLeft = nHours % HRS_IN_DAY;
    cout << lSeconds << " seconds = " << nDays << " days, " << nHoursLeft << " hours, " << nMinutesLeft << " minutes and " << nSecondsLeft << " seconds." << endl;
    return 0;
}
int ch3_ex5(void)
{
    double dKms, dLiters, dUsage, dCoefficient;
    cout << "How many kilometers did you travel? ";
    cin >> dKms;
    cout << "How many liters of fuel did you use? ";
    cin >> dLiters;
    dCoefficient = 100.0 / dKms;
    dUsage = dLiters * dCoefficient;
    cout << "Your usage was " << dUsage << " liters of fuel per 100 kilometers." << endl;
    return 0;
}
int ch3_ex6(void)
{
    const double MILES_IN_100KM = 62.14, LITERS_IN_GALLON = 3.875;
    double dUsageLPer100Km, dGallonsPer100Km, dUsageMilesPerGal;
    cout << "What was your average fuel usage during the travel (in liters per 100 km)? ";
    cin >> dUsageLPer100Km;
    dGallonsPer100Km = dUsageLPer100Km / LITERS_IN_GALLON;
    dUsageMilesPerGal = MILES_IN_100KM / dGallonsPer100Km;
    cout << "Your average fuel usage was " << dUsageMilesPerGal << " miles per gallon." << endl;
    return 0;
}
int ch4_ex1(void)
{
    string strName, strSurname;
    int nGrade, nAge;
    cout << "What is your name? ";
    getline(cin, strName);
    cout << "What is your surname? ";
    getline(cin, strSurname);
    cout << "What mark do you deserve? ";
    cin >> nGrade;
    cout << "How old are you? ";
    cin >> nAge;
    cout << "Name: " << strSurname << ", " << strName << endl;
    cout << "Mark: " << nGrade -1 << endl;
    cout << "Age: " << nAge << endl;
    return 0;
}
int ch4_ex2(void)
{
    string strName, strDessert;
    cout << "What is your name? ";
    getline(cin, strName);
    cout << "What is your favorite dessert? ";
    getline(cin, strDessert);
    cout << "I have some " << strDessert << " for you, " << strName << "." << endl;
    return 0;
}
int ch4_ex3(void)
{
    char cName[20], cSurname[20];
    cout << "What is your name? ";
    cin.getline(cName, 20);
    cout << "What is your surname? ";
    cin.getline(cSurname, 20);
    strcat(cSurname, ", ");
    strcat(cSurname, cName);
    cout << "This is your data: " << cSurname << endl;
    return 0;
}
int ch4_ex4(void)
{
    string strName, strSurname, strFinal;
    cout << "What is your name? ";
    getline(cin, strName);
    cout << "What is your surname? ";
    getline(cin, strSurname);
    strFinal = strSurname + ", " + strName;
    cout << "This is your data: " << strFinal << endl;
    return 0;
}
int ch4_ex5(void)
{
    struct Chocolate_bar
    {
        string strName;
        float fWeight;
        int nCalories;
    };
    Chocolate_bar snack =
    {
        "Mocha Munch",
        2.3,
        350
    };
    cout << "Name: " << snack.strName << endl;
    cout << "Weight: " << snack.fWeight << " g" << endl;
    cout << "Calories: " << snack.nCalories << " kcal" << endl;
    return 0;
}
int ch4_ex6(void)
{
    struct Chocolate_bar{
        string strName;
        float fWeight;
        int nCalories;
    };
    Chocolate_bar bounty ={
        "Bounty",
        4.52,
        400
    };
    Chocolate_bar mars ={
        "Mars",
        2.52,
        324
    };
    Chocolate_bar mocha ={
        "Mocha Munch",
        2.3,
        320
    };
    Chocolate_bar Products[3] = {bounty, mars, mocha};
    cout << "1. " << Products[0].strName << endl << Products[0].fWeight << endl << Products[0].nCalories << endl;
    cout << "2. " << Products[1].strName << endl << Products[1].fWeight << endl << Products[1].nCalories << endl;
    cout << "3. " << Products[2].strName << endl << Products[2].fWeight << endl << Products[2].nCalories << endl;
    return 0;
}
int ch4_ex7(void)
{
    struct Pizza
    {
        string strProducer;
        float fRadius;
        int nWeight;
    };
    Pizza TheBestOne;
    cout << "What is the name of the producer? ";
    getline(cin, TheBestOne.strProducer);
    cout << "What is the radius of the pizza [cm]? ";
    cin >> TheBestOne.fRadius;
    cout << "What is the weight of the pizza [g]? ";
    cin >> TheBestOne.nWeight;
    cout << "Parameters of " << TheBestOne.strProducer << "'s pizza:" << endl;
    cout << "Radius: " << TheBestOne.fRadius << " cm" << endl;
    cout << "Weight: " << TheBestOne.nWeight << " g" << endl;
    return 0;
}
int ch4_ex8(void)
{
    struct Pizza
    {
        double dRadius;
        string strProducer;
        int nWeight;
    };
    Pizza *ptBest = new Pizza;
    cout << "What is the radius of the pizza [cm]? ";
    cin >> ptBest->dRadius;
    getchar();
    cout << "What is the producer of the pizza? ";
    getline(cin, ptBest->strProducer);
    cout << "What is the weight of the pizza [g]? ";
    cin >> ptBest->nWeight;
    cout << endl << "Parameters of " << ptBest->strProducer << "'s pizza:" << endl;
    cout << "Radius: " << ptBest->dRadius << " cm" << endl;
    cout << "Weight: " << ptBest->nWeight << " g" << endl;
    return 0;
}
int ch4_ex9(void)
{
    struct Chocolate_bar{
        string strName;
        float fWeight;
        int nCalories;
    };
    Chocolate_bar *ptArr = new Chocolate_bar[3];
    ptArr[0] ={
        "Bounty",
        4.52,
        400
    };
    ptArr[1] ={
        "Mars",
        2.52,
        324
    };
    ptArr[2] ={
        "Mocha Munch",
        2.3,
        320
    };
    cout << "First chocolate bar:" << endl << "Name: " << ptArr[0].strName << endl << "Weight: " << ptArr[0].fWeight << " g" << endl << "Calories: " << ptArr[0].nCalories << " kcal" << endl << endl;
    cout << "Second chocolate bar:" << endl << "Name: " << ptArr[1].strName << endl << "Weight: " << ptArr[1].fWeight << " g" << endl << "Calories: " << ptArr[1].nCalories << " kcal" << endl << endl;
    cout << "Third chocolate bar:" << endl << "Name: " << ptArr[2].strName << endl << "Weight: " << ptArr[2].fWeight << " g" << endl << "Calories: " << ptArr[2].nCalories << " kcal" << endl << endl;
    return 0;
}
int ch5_ex1(void)
{
    int nLower, nHigher, nSum=0;
    cout << "Give me first integer (lower): ";
    cin >> nLower;
    cout << "Give me second integer (higher): ";
    cin >> nHigher;
    for (int i = nLower; i <= nHigher; i++)
    {
        nSum += i;
    }
    cout << "Sum of all integers from " << nLower << " to " << nHigher << " is equal to " << nSum << endl;
    return 0;
}
int ch5_ex2(void)
{
    int nSum, nGiven;
    cout << "Give me integers and I will sum them up" << endl << "0 will stop the program.";
    cin >> nGiven;
    while (nGiven != 0)
    {
        nSum += nGiven;
        cout << "Total sum: " << nSum << endl;
        cin >> nGiven;
    }
    return 0;
}
int ch5_ex3(void)
{
    double dDafnesMoney = 100.0, dCleosMoney = 100.0, dCleosPercentage = 0.05;
    int i = 1;
    while (dCleosMoney <= dDafnesMoney)
    {
        dDafnesMoney += 10.0;
        dCleosMoney += dCleosMoney * dCleosPercentage;
        cout << "After " << i << " years Dafne has $" << dDafnesMoney << " and Cleo has $" << dCleosMoney << endl;
        i++;
    }
    cout << endl << "After " << i -1 << " years Cleo finally has more money than Dafne." << endl << "Cleo: $" << dCleosMoney << endl << "Dafne: $" << dDafnesMoney << endl;
    return 0;
}
int ch5_ex4(void)
{
    string strMonths[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int nMonthlyProfit[12], nYearlyProfit=0;
    for (int i = 0; i < 12; i++)
    {
        cout << "Total profit from selling the book in " << strMonths[i] << ": $";
        cin >> nMonthlyProfit[i];
        nYearlyProfit += nMonthlyProfit[i];
    }
    cout << endl << "Total yearly profit: $" << nYearlyProfit << endl;
    return 0;
}
int ch5_ex5(void)
{
    string strMonths[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int nMonthlyProfit[3][12], nYearlyProfit[3], nTotalProfit=0;
    for (int i =0; i < 3; i++)
    {
        nYearlyProfit[i] = 0;
        for (int j = 0; j < 12; j++)
        {
            cout << "Total profit from selling the book in " << strMonths[j] << " " << 2019 + i << ": $";
            cin >> nMonthlyProfit[i][j];
            nYearlyProfit[i] += nMonthlyProfit[i][j];
            nTotalProfit += nMonthlyProfit[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Profit in " << 2019 + i << ": $" << nYearlyProfit[i] << endl;
    }
    cout << endl << "Total profit: $" << nTotalProfit << endl;
    return 0;
}
int ch5_ex6(void)
{
    struct car{
        string strProducer;
        int nProductionYear;
    };
    int nTotalCars;
    cout << "How many cars? ";
    cin >> nTotalCars;
    cin.get();
    car *ptArr = new car[nTotalCars];
    for (int i = 0; i < nTotalCars; i++)
    {
        cout << "Car #" << i+1 << endl << "Producer: ";
        getline(cin, ptArr[i].strProducer);
        cout << "Production year: ";
        cin >> ptArr[i].nProductionYear;
        cin.get();
    }
    for(int i = 0; i < nTotalCars; i++)
    {
        cout << ptArr[i].nProductionYear << " " << ptArr[i].strProducer << endl;
    }
    return 0;
}
int ch5_ex7(void)
{
    char chWord[9];
    cout << "Write different words and when you finish write \"finished\"" << endl;
    int nCount = 0;
    while (strcmp(chWord, "finished") != 0)
    {
        cin >> chWord;
        nCount ++;
    }
    cout << nCount-1 << " words given." << endl;
    return 0;
}
int ch5_ex8(void)
{
    string strWord;
    cout << "Write different words and when you finish write \"finished\"" << endl;
    int nCount = 0;
    while (strWord != "finished")
    {
        cin >> strWord;
        nCount++;
    }
    cout << nCount-1 << " words given." << endl;
    return 0;
}
int ch5_ex9(void)
{
    int nRows;
    cout << "How many rows? ";
    cin >> nRows;
    char chTemp[nRows];
    for (int i = 0; i < nRows; i++)
    {
        chTemp[i] = '.';
    }
    for (int i = nRows-1; i >= 0; i--)
    {
        chTemp[i] = '*';
        cout << chTemp << endl;
    }
    return 0;
}
