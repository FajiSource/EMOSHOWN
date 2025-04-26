#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;

// test
void Stress(int i);
void Emotion(int i);
void Mood(int i);
void Main(int i);
void Menu(int i);

const int DAYS = 7;

string FN, LN, Age, Gender;

struct Day{
    int dailyStressLevel, dailyEmotionLevel, dailyMoodLevel;
    string stress, emotion, mood;
    int choice;
    int choice1, choice1_1, choice1_2, choice1_3;
    int choice2;
    int choice3;
    char Notes[100];

    double sum;
    double average;
};
    Day day[DAYS];
void clear(){system("cls");}

double Result_Mental_State(double sum, int i)
{
    sum = (day[i].dailyStressLevel + day[i].dailyEmotionLevel + day[i].dailyMoodLevel); // choice per Mental Health Status
    double average = sum / 3;
    return average;
}
string Result_Assessment(double average)
{
    if (average <= 3.3)
    {
        return "You're likely feeling very low mentally and emotionally right now.";
    }
    else if (average <= 6.6)
    {
        return "You're feeling a bit stressed and emotionally low today.It's okay to have off days. Try to take breaks, rest, or do something small that brings you joy.";
    }
    else if (average <= 10)
    {
        return "You're feeling balanced, calm, and positive. Keep maintaining this mindset and continue to take care of your mental health every day.";
    }
    return "";
}
string Description(double average)
{
    if (average <= 2.5)
    {
        return "Healthy";
    }
    else if (average <= 5.0)
    {
        return "Mild";
    }
    else if (average <= 7.5)
    {
        return "Moderate";
    }
    else if (average <= 10.0)
    {
        return "Severe";
    }
}
void MainMenu()
{
    cout << "==============================================" << endl;
    cout << "\tEMOSHOWN: MENTAL HEALTH TRACKER\t" << endl;
    cout << "==============================================" << endl;

    cout << "First Name : ";
    getline(cin, FN);

    cout << "Last Name  : ";
    getline(cin, LN);

    cout << "Age        : ";
    cin >> Age;

    cout << "Gender     : ";
    cin >> Gender;

    clear();
}
void Stress(int i)
{
    cout << "==============================================" << endl;
    cout << "\tEMOSHOWN: MENTAL HEALTH TRACKER\t" << endl;
    cout << "==============================================" << endl;
    cout << "<< Rate your Stress level for today " << FN << "." << endl;
    cout << "\t|| 1 — 	??  Totally relaxed" << endl;
    cout << "\t|| 2 — 	??  Calm, minor concerns" << endl;
    cout << "\t|| 3 — 	??  Mild stress" << endl;
    cout << "\t|| 4 — 	??  Slightly overwhelmed" << endl;
    cout << "\t|| 5 — 	??  Managing but pressured" << endl;
    cout << "\t|| 6 — 	??  Clearly stressed" << endl;
    cout << "\t|| 7 — 	??  Overwhelmed" << endl;
    cout << "\t|| 8 — 	??  Very anxious or drained" << endl;
    cout << "\t|| 9 — 	??  Near burnout" << endl;
    cout << "\t|| 10 —	??  Total meltdown" << endl;
    cout << endl;
    cout << "\t\t(11) Back to menu" << endl;
    cout << ">> ";
    cin >> day[i].dailyStressLevel;
    switch (day[i].dailyStressLevel)
    {
    case 1:
    day[i].stress = "Totally relaxed";
        break;
    case 2:
    day[i].stress = "Calm, minor concerns";
        break;
    case 3:
    day[i].stress = "Mild stress";
        break;
    case 4:
    day[i].stress = "Slightly overwhelmed";
        break;
    case 5:
    day[i].stress = "Managing but pressured";
        break;
    case 6:
    day[i].stress = "Clearly stressed";
        break;
    case 7:
    day[i].stress = "Overwhelmed";
        break;
    case 8:
    day[i]. stress = "Very anxious or drained";
        break;
    case 9:
    day[i].stress = "Near burnout";
        break;
    case 10:
    day[i]. stress = "Total meltdown";
        break;
    case 11:
        Menu(i);
        break;
    default:
        cout << "Invalid choice. Please enter a number between 1 and 11." << endl;
    }
    clear();
    Main(i);
}
void Emotion(int i)
{
    cout << "==============================================" << endl;
    cout << "\tEMOSHOWN: MENTAL HEALTH TRACKER\t" << endl;
    cout << "==============================================" << endl;
    cout << "<< Scale your Emotion level for today " << FN << "." << endl;
    cout << "\t|| 1 — 	??  Joyful / euphoric" << endl;
    cout << "\t|| 2 — 	??  Very Happy" << endl;
    cout << "\t|| 3 — 	??  Happy" << endl;
    cout << "\t|| 4 — 	??  Good mood" << endl;
    cout << "\t|| 5 — 	??  Okay / slightly positive " << endl;
    cout << "\t|| 6 — 	??  Neutral" << endl;
    cout << "\t|| 7 — 	??  Meh/ low energy" << endl;
    cout << "\t|| 8 — 	??  Sad or tired" << endl;
    cout << "\t|| 9 — 	??  Very down" << endl;
    cout << "\t|| 10 —	??  Extremely sad" << endl;
    cout << endl;
    cout << "\t\t(11) Back to menu" << endl;
    cout << ">> ";
    cin >> day[i].dailyEmotionLevel;
    switch (day[i].dailyEmotionLevel)
    {
    case 1:
    day[i].emotion = "Joyful / euphoric";
        break;
    case 2:
    day[i].emotion = "Very Happy";
        break;
    case 3:
    day[i].emotion = "Happy";
        break;
    case 4:
    day[i].emotion = "Good mood";
        break;
    case 5:
    day[i].emotion = "Okay / slightly positive";
        break;
    case 6:
    day[i].emotion = "Neutral";
        break;
    case 7:
    day[i].emotion = "Meh / low energy";
        break;
    case 8:
    day[i].emotion = "Sad or tired";
        break;
    case 9:
    day[i].emotion = "Very down";
        break;
    case 10:
    day[i].emotion = "Extremely sad";
        break;
    case 11:
        Menu(i);
        break;
    default:
        cout << "Invalid choice. Please enter a number between 1 and 11." << endl;
    }
    clear();
    Main(i);
}
void Mood(int i)
{
    cout << "==============================================" << endl;
    cout << "\tEMOSHOWN: MENTAL HEALTH TRACKER\t" << endl;
    cout << "==============================================" << endl;
    cout << "<< Rate your Mood level for today " << FN << "." << endl;
    cout << "\t|| 1 — 	??  Awesome / joyful " << endl;
    cout << "\t|| 2 — 	??  Great / excited" << endl;
    cout << "\t|| 3 — 	??  Happy / positive" << endl;
    cout << "\t|| 4 — 	??  Pretty good mood" << endl;
    cout << "\t|| 5 — 	??  Slightly upbeat" << endl;
    cout << "\t|| 6 — 	??  Neutral" << endl;
    cout << "\t|| 7 — 	??  Dull / bored" << endl;
    cout << "\t|| 8 — 	??  Low / not great" << endl;
    cout << "\t|| 9 — 	??  Grumpy or irritable" << endl;
    cout << "\t|| 10 —	??  Very bad mood" << endl;
    cout << endl;
    cout << "\t\t(11) Back to menu" << endl;
    cout << ">> ";
    cin >> day[i].dailyMoodLevel;
    switch (day[i].dailyMoodLevel)
    {
    case 1:
    day[i].mood = "Awesome / joyful";
        break;
    case 2:
    day[i].mood = "Great / excited";
        break;
    case 3:
    day[i].mood = "Happy / positive";
        break;
    case 4:
    day[i].mood = "Pretty good mood";
        break;
    case 5:
    day[i].mood = "Slightly upbeat";
        break;
    case 6:
    day[i].mood = "Neutral";
        break;
    case 7:
    day[i].mood = "Dull / bored";
        break;
    case 8:
    day[i].mood = "Low / not great";
        break;
    case 9:
    day[i].mood = "Grumpy or irritable";
        break;
    case 10:
    day[i].mood = "Very bad mood";
        break;
    case 11:
        Menu(i);
        break;
    default:
        cout << "Invalid choice. Please enter a number between 1 and 11." << endl;
    }
    clear();
    Main(i);
}
void Menu(int i)
{
    cout << "==============================================" << endl;
    cout << "\tEMOSHOWN: MENTAL HEALTH TRACKER\t" << endl;
    cout << "==============================================" << endl;

    cout << "Hi, " << FN << " " << LN << " Welcome to EmoShown where your \n \tmental health matters" << endl;
    cout << endl;
    cout << "<< Today is your day " << i + 1 << endl; 
    cout << "<< What would you like to do today?" << endl;
    cout << "\t1. Enter Today’s Mental Health Status" << endl;
    cout << "\t2. View Mental Health State Summary" << endl;
    cout << "\t3. Take Notes" << endl;
    cout << "\t4. Exit" << endl;
    cout << ">> ";
    cin >> day[i].choice;
    clear();
}
int main()
{
    Day day[DAYS];
    
	MainMenu();
	// Menu (i);
	for (int i = 0; i < DAYS; i++){
        Stress(i);
        Emotion(i);
        Mood(i);
        Menu(i);
        Main(i);
    }
    // if (Result_Mental_State()<=  2.5 ){
    //     cout << "Healthy";
    // } else if (Result_Mental_State()<= 5){
    //     cout << "Mild";
    // } else if (Result_Mental_State()<= 7.5){
    //     cout << "Moderate";
    // } else if (Result_Mental_State()<= 10){
    //     cout << "Severe";
    // }
    return 0;
}
void Main(int i)
{
    switch ( day[i].choice)
    {
    case 1:
        cout << "==============================================" << endl;
        cout << "\tEMOSHOWN: MENTAL HEALTH TRACKER\t" << endl;
        cout << "==============================================" << endl;
        cout << "<< Enter Today’s Mental Health Status" << endl;
        cout << "\t|| 1. Stress level: " <<  day[i].stress << endl;
        cout << "\t|| 2. Emotion level: " <<  day[i].emotion << endl;
        cout << "\t|| 3. Mood: " <<  day[i].mood << endl;
        cout << "\t\t(4) Back to menu" << endl;
        cout << ">> ";
        cin >>  day[i].choice1_1;
        if ( day[i].choice1_1 == 1)
        {
            Stress(i);
        }
        else if ( day[i].choice1_1 == 2)
        {
            Emotion(i);
        }
        else if ( day[i].choice1_1 == 3)
        {
            Mood(i);
        }
        else if ( day[i].choice1_1 == 4)
        {
            Menu(i);
        }

    case 2:
        cout << "==============================================" << endl;
        cout << "\tEMOSHOWN: MENTAL HEALTH TRACKER\t" << endl;
        cout << "==============================================" << endl;
        cout << "<< Daily Mental Health summary" << endl;
        // cout << "Day: " << i << endl;
        cout << "\t|| Stress level  : " <<  day[i].stress << endl;
        cout << "\t|| Emotion level :  " <<  day[i].emotion << endl;
        cout << "\t|| Mood level    : " <<  day[i].mood << endl;
        cout << endl;
        cout << "<< Assessment          : " << Result_Assessment( day[i].average) << endl;
        cout << "<< Your Note           : " << "\"" <<  day[i].Notes << "\"" << endl;
        cout << "<< Mental State Average: " << fixed << setprecision(1) << Result_Mental_State( day[i].sum, i) << " " << Description( day[i].average) << endl;
        cout << endl;
        cout << "(1) Sorting by Mental State" << endl;
        cout << "(2) Sorting by Date" << endl;
        cout << "\t\t(3) Back to menu" << endl;
        cout << ">> ";
        cin >>  day[i].choice2;
        if ( day[i].choice2 == 3)
        {
            Menu(i);
        }
        clear();
    case 3:
        cout << "==============================================" << endl;
        cout << "\tEMOSHOWN: MENTAL HEALTH TRACKER\t" << endl;
        cout << "==============================================" << endl;
        cout << "<< What's on your mind? \n \t\t(1)Back to menu \n >> ";
        char notes[100];
        cin.ignore();
        cin.getline(notes, 100);
		strcpy(day[i].Notes, notes); 
		do {
			cout << "\t\t(1) Back to menu" << endl;
        	cout << ">> ";
        	cin >>  day[i].choice3;
        	Menu(i);
	    } while (day[i].choice3 == 1);

        clear();
    case 4:
        MainMenu();

        break;
    }

    //deletion>> 
}