//Unit7_Jimenez_Task_2_ Dr_T 2-24-2020 Structs C++
#include <iostream>
#include "timeOfDay.h"
#include "appDate.h"
#include "event.h"

//Main STRUCT instantiations of event, timeOfDay, and appDate
void createEvent(timeOfDay t, appDate a, event e)
{
  short h = 0, m = 0, s = 0;
  short mo = 0, d = 0;
  int y = 0, decision = 0;
  string urgent = ""; 
  string eName = ""; 
  
  //Populate timeOfDay
  cout << "Enter Hour: ";
  cin >> h;
  t.hour = h; //Set the values based upon User Input

  cout << "Enter Minutes: ";
  cin >> m;
  t.minute = m; //Set the values based upon User Input

  cout << "Enter Seconds: ";
  cin >> s;
  t.second = s; 

  //Populate appDate
  cout << "Enter Month: ";
  cin >> mo;
  a.month = mo; 

  cout << "Enter Day: ";
  cin >> d;
  a.dayOfMonth = d; 

  cout << "Enter Year: ";
  cin >> y;
  a.year = y; 

  //Set Event Details 
  //Get Event Information 
  cout << "Enter Event Name: ";
  cin >> eName;
  e.eventName = eName;

  cout << "Is the event urgent? (1 = yes , 2 = no: )";
  cin >> decision;
  if(decision == 1)
  {
    e.isUrgent = true;
    urgent = "yes";
  }
  else if(decision == 2)
  {
    e.isUrgent = false;
    urgent = "no";
  }
  else 
  {
    cout << "Invalid input";
  }
  //put dMain in Event eMain
  e.eventDate = a;
  //put tMain in Event eMain
  e.eventTime = t;

  //Print the Event
  cout << "\nEVENT DETAILS: " << endl;
  cout << "\nEvent name: " + e.eventName << endl;
  cout << &"\nIs urgent: " [+ e.isUrgent] << "-->" << urgent << endl;
  cout << e.toString(); //print the date and time calling toString() override
}

int main() 
{
  //declare the instances of the STRUCT we need for this work
  event eMain;
  //create a timeOfDay to share with eMain
  timeOfDay tMain;
  //create a day of month to share with eMain
  appDate dMain;
  
  createEvent(tMain, dMain, eMain); //populate and print new event
  return 0;
}