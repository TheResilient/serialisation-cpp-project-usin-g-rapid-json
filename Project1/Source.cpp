#include <iostream>
#include <json/json.h>
#include <json/value.h>
#include <fstream>
#include <string>
#include <iostream>


using namespace std;
using namespace Json;

int main()
{
    //serialization part
    ifstream file("data.json");
    Value actualJson;
    Reader reader;
    cout << "Serialization output" << endl;
    reader.parse(file, actualJson);
    cout << actualJson["Name"] << endl;
    cout << actualJson["Age"] << endl;
    cout << actualJson["City"] << endl;


    //Deserialization part
    Value event;
    
    event["User"]["Student"]["name"] = "Pratik";
    event["User"]["Student"]["age"] = 21;
    event["User"]["Employee"]["name"] = "Mukul";
    event["User"]["Intern"]["name"] = "Manish";
    event["User"]["Boss"]["code"] = "Sahil";

    cout << event << endl;
    ofstream MyFile("output.json");

    // Write to the file
    MyFile << event;

    // Close the file
    MyFile.close();

    return 0;
}