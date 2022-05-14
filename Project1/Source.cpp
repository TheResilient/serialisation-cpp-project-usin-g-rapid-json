#include <iostream>
#include <json/json.h>
#include <json/value.h>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream file("data.json");
    Json::Value actualJson;
    Json::Reader reader;

    reader.parse(file, actualJson);
    cout << actualJson["Name"] << endl;
    cout << actualJson["Age"] << endl;
    cout << actualJson["City"] << endl;

    return 0;
}