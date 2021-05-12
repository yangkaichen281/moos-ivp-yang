/************************************************************/
/*    NAME: Eric Yang                                              */
/*    ORGN: MIT, Cambridge MA                               */
/*    FILE: PrimeFactor.h                                          */
/*    DATE: December 29th, 1963                             */
/************************************************************/

#ifndef PrimeFactor_HEADER
#define PrimeFactor_HEADER

#include "MOOS/libMOOS/Thirdparty/AppCasting/AppCastingMOOSApp.h"
#include <list>
#include "PrimeEntry.h"
using namespace std;

class PrimeFactor : public AppCastingMOOSApp
{
 public:
  // PrimeFactor();
  // ~PrimeFactor();
 
 protected: // Standard MOOSApp functions to overload  
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();

 protected: // Standard AppCastingMOOSApp function to overload 
   bool buildReport();

 protected:
   void registerVariables();

 private: // Configuration variables
   uint64_t m_ival;
   int m_index = 0;
   int m_max_iter;
   int m_calc = 0;
   string m_result_str;
   list <PrimeEntry> m_mail_list;
 private: // State variables
};

#endif 
