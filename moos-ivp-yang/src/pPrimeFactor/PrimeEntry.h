#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <sstream>
#include "MOOS/libMOOS/Utils/MOOSUtils.h"
using namespace std;

#ifndef PRIME_ENTRY_HEADER
#define PRIME_ENTRY_HEADER

class PrimeEntry
 {
 public:

   PrimeEntry();
//   ~PrimeEntry() {};

   void setOriginalVal(unsigned long int v) {m_orig = v;}
   void setReceivedIndex(unsigned int v) {m_received_index = v;} 
   void setCalculatedIndex(unsigned int v) {m_calculated_index = v;}
   void setDone(bool v) {m_done=v;}
   bool   done() {return(m_done);}
   void   factor(unsigned long int max_steps); 
   std::string  getReport(); 

 protected:
   unsigned long int m_N; //Updated number to factor
   unsigned long int m_orig; 
   bool m_done; 
   unsigned long int  m_received_index;
   unsigned long int  m_calculated_index;
   unsigned long int  m_finished_iter;
   unsigned long int  m_maxiter;
   unsigned long int m_ii;
   unsigned long int m_k_start;
   unsigned long int m_k;
   double m_start_time, m_finish_time, m_solve_time;
   std::vector<unsigned long int> m_factors; //Vector of all the factors so far
 };

#endif

