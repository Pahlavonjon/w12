#include <iostream>
#include <string>
#include "AirCraft.h"
using namespace std;

    AirCraft::AirCraft(){}
        AirCraft::AirCraft(string t, int w, int l){
            this->type = t;
            this->weight = w;
            this->service = abs(l);
        }   // creates an Aircraft of type t, weight w, and length-in-service l
            // the years (length) in service l; takes only non-negative values
       
        string AirCraft::get_type()[
            return this->type;
        ]
        int AirCraft::get_weight(){
            return this->weight;
        }
        int AirCraft::get_service(){
            return this->service;
        }

        void AirCraft::set_service(int s){
            this->service = s;
        }
        void AirCraft::set_weight(int number){
            this->weight = number;
        }
        void AirCraft::set_type(string new_type){
            this->type = new_type;
        }