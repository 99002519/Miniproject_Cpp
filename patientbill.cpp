#include "patient.h"
#include "patientbill.h"
#include <iostream>
#include <list>
#include <iterator>

void PatientBilling::addPatient(std::string name,int id,std::string phone,int age,std::string sex,std::string bloodgrp){
	patient.push_back(PatientBase(name,id,phone,age,sex,bloodgrp));
}
bool PatientBilling::Search(int id){
	int flag=0;
	std::list <PatientBase> :: iterator iter;
	for(iter=patient.begin();iter!=patient.end();iter++){
		if(iter->getPatientId()==id){
			flag=1;
			break;
		}
	}
	if(flag==1){
		return true;
	}
	else{
		return false;
	}
}
void PatientBilling::Discharge(int id)
{
    std::list<PatientBase> :: iterator iter;

    for(iter=patient.begin();iter!=patient.end();iter++)
    {
        if(iter->getPatientId()== id)
        {
           patient.erase(iter);
           break;
        }
    }
}
double PatientBilling::Preparebill(int id,int days){
	double Amount;
	Amount = treatment_charges*days + bed_charges*days;
	return Amount;
}
void PatientBilling::viewdetails(){
	std::cout<< name<<","<< id <<","<< phone <<","<< age <<","<< sex <<","<< bloodgrp;
}
