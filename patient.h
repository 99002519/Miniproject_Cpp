#ifndef __PATIENT_H
#define __PATIENT_H

#include<string>

class PatientBase
{
protected:
  std::string m_name;
  int m_id;
  std::string m_phone;
  int m_age;
  std::string m_sex;
  std::string m_bloodgrp;

  public:

  PatientBase();
  PatientBase(std::string,int,std::string,int,std::string,std::string);
  
  int getPatientId();
  virtual std::string getPatientName();
  virtual std::string getPhone();
  virtual int getPatientAge();
  virtual std::string getPatientSex();
  virtual std::string getBloodGrp();
  void display();
  
};

#endif
