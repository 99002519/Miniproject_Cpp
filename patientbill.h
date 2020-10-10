#ifndef PATIENTBILL_H_INCLUDED
#define PATIENTBILL_H_INCLUDED

#include "patient.h"
#include <string>
#include <cstdint>
#include <list>
#include <iterator>

class PatientBilling
{
	
	float treatment_charges=500;
	float bed_charges=200;
	std::list <PatientBase> patient;
	
	public:
	
	void addPatient(std::string m_name,int m_id,std::string m_phone,int m_age,std::string m_sex,std::string m_bloodgrp);
	void viewdetails(std::string m_name,int m_id,std::string m_phone,int m_age,std::string m_sex,std::string m_bloodgrp);
	bool Search(int id);
	void Discharge(int id);
	double Preparebill(int id,int days);
};

#endif
