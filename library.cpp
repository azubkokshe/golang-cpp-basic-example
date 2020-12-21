#include "library.hpp"
#include <iostream>

Foo::Foo(int value) : m_value(value) {
  std::cout << "[c++] Foo::Foo(" << m_value << ")" << std::endl;
}

Foo::~Foo() { std::cout << "[c++] Foo::~Foo(" << m_value << ")" << std::endl; }

int Foo::value() const {
  std::cout << "[c++] Foo::value() is " << m_value << std::endl;
DcmFileFormat fileformat;
   OFCondition status = fileformat.loadFile("test.dcm");
   if (status.good())
   {
      OFString patientsName;
      if (fileformat.getDataset()->findAndGetOFString(DCM_PatientName, patientsName).good())
      {
         cout << "Patient's Name: " << patientsName << endl;
      }else{
         cerr << "Error: cannot access Patient's Name!" << endl;
      }

   }else{
      cerr << "Error: cannot read DICOM file (" << status.text() << ")" << endl;
   }

  return m_value;
}
