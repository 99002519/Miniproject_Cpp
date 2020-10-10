#include"patient.h"
#include <iostream>

PatientBase::PatientBase():m_name(""),m_id(),m_phone(""),m_age(),m_sex(""),m_bloodgrp("") {}

PatientBase::PatientBase(std::string name,int id,std::string phone,int age,std::string sex,std::string bloodgrp):
											m_name(name),m_id(id),m_phone(phone),
											m_age(age),m_sex(sex),m_bloodgrp(bloodgrp) {}
																											   
void PatientBase:: display()
{
    std:: cout << m_name <<"," << m_id << "," << m_phone << ","<< m_age << "," << m_sex << "," << m_bloodgrp << std::endl;
}

std:: string PatientBase::getPatientName()
{
    return m_name;
}
int  PatientBase::getPatientId()
{
    return m_id;
}
std:: string PatientBase::getPhone()
{
    return m_phone;
}
int PatientBase::getPatientAge()
{
	return m_age;
}
std:: string PatientBase::getPatientSex()
{
	return m_sex;
}
std:: string PatientBase::getBloodGrp()
{
	return m_bloodgrp;
}
