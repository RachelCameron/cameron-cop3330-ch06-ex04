/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rachel Cameron
 */

#include "header.h"

class Name_value{
    public: 
        string name;
        int value;

        string toString(){
            return "(" + name + "," + to_string(value) + ")";
        }
};

int main()
{
    vector<Name_value> v1;
    int index = 0;
    bool done = false;
    bool duplicate = false;

    while(!done){
        string name;
        int value;

        cout << "Enter a name and value pair: " << endl;
        cin>>name>>value;

        if(name == "NoName" && value == 0){
            done = true;
            continue;
        }

        for(int i = 0; i < v1.size(); i+= 1){
            if(v1[i].name == name){
                cout << "Duplicate Name Entered." << endl;
                done = true;
                duplicate = true;
                continue;
            }
        }

        Name_value nv;
        nv.name = name;
        nv.value = value;

        v1.push_back(nv);
        index += 1;
    }

    if(!duplicate){
        for(int i = 0; i < v1.size(); i+= 1){
            cout << v1[i].toString() << endl;
        }
    }

}