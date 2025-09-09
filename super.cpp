#include <iostream>
#include <thread>
#include <string>
#include <chrono>
using namespace std;
//Mason Gross - 9/3/2025 - Character backstory

void pause(int seconds) {
    this_thread::sleep_for(chrono::seconds(seconds));
}

int main()
{
    string name = "";
    string color = "";
    string agree = "";
    string pet = "";
    string answer = "";
    string transportation = "";
    int count = 0;
    double itsadouble = 1.343;
    bool toggle = false;
    char first = 'f';
    float spooky = 1.343;
    cout << "What's your name?" << endl;
    cin >> name;
    cout << "Okay, " << name << "." << endl;
    cout << "What's your favorite color?" << endl;
    cin >> color;
    cout << "Oh, did you say, " << color << "?" << endl;
    cin >> agree;
    if(agree == "yes") {
        cout << "Good!" << endl;
        pause(1);
    }
    if(agree == "no") {
        cout << "It isn't? Weird." << endl;
        pause(1);
        cout << "What was it again?" << endl;
        cin >> color;
        cout << "Okay, it's " << color << ". Thanks." << endl;
        pause(1);
    }
    cout << "What do you use to get around?" << endl;
    cin >> transportation;
    if(transportation == "car") {
        cout << "Oh, I use a car too!" << endl;
        pause(1);
    } else {
        cout << "Okay." << endl;
        pause(1);
    }
    cout << "Do you have any pets?" << endl;
    cin >> answer;
    if(answer == "yes") {
        cout << "Neat! What pet do you have?" << endl;
        cin >> pet;
        cout << "Oh, you have a " << pet << "?\nHow many?" << endl;
        cin >> count;
        if(count == 1) {
            cout << "Only one? Okay." << endl;
        }
        if (count > 1) {
            cout << "You have " << count << " " << pet << "'s? Cool!" << endl;
        }
    }
    if(answer == "no") {
        cout << "That's okay! No worries." << endl;
        pause(1);
    }
    
    cout << "Here are your results from what I've gathered!" << endl;
    pause(1);
    cout << "Just give me a second here..." << endl;
    pause(2);
    if(answer == "yes") {
        cout << "Here are your results:\nName: " << name << "\nFavorite Color: " << color << "\n" << count << " " << pet << "'s\nYou use a " << transportation << " for transportation." << endl;
    }
    if (answer == "no") {
        cout << "Here are your results:\nName: " << name << "\nFavorite Color: " << color << "\nYou use a " << transportation << " for transportation." << endl;
    }
    pause(4);
    cout << "Okay, here's a little story for you..." << endl;
    pause(3);
    if(answer == "yes") {
        cout << "Once upon a time there once was a person named " << name << ". " << endl;
        pause(3);
        cout << name << " is famous in their small town of MistWood. In fact, they were so famous all their preferences made an impact on the town. " << endl;
        pause(3);
        cout << name << "'s favorite color was " << color << ", so all the buildings were " << color << "! " << name << " also liked using a " << endl;
        pause(3);
        cout << transportation << " the most, so all people used to get around town was a " << transportation << ". " << name << "'s favorite pet was a " << endl;
        pause(3);
        cout << pet << " and so just like that, that's what everyone got for a pet!" << endl;
    }
    if(answer == "no") {
        cout << "Once upon a time there once was a person named " << name << ". " << endl;
        pause(3);
        cout << name << " is famous in their small town of MistWood. In fact, they were so famous all their preferences made an impact on the town. " << endl;
        pause(3);
        cout << name << "'s favorite color was " << color << ", so all the buildings were " << color << "! " << name << " also liked using a " << endl;
        pause(3);
        cout << transportation << " the most, so all people used to get around town was a " << transportation << ". " << name << " didn't have a pet. So everyone didn't have one either. Despite people wanting pets, they just followed what " << name << " did and decided to not get one." << endl;
    }
    return 0;

}

