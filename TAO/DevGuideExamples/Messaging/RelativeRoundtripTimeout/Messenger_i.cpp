/* -*- C++ -*-  */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.dre.vanderbilt.edu/~schmidt/TAO.html

#include "Messenger_i.h"
#include "ace/OS_NS_unistd.h"
#include <iostream>

// Implementation skeleton constructor
Messenger_i::Messenger_i (void)
{
}

// Implementation skeleton destructor
Messenger_i::~Messenger_i (void)
{
}

CORBA::Boolean Messenger_i::send_message (
    const char * user_name,
    const char * subject,
    char *& message)
{
  // Force a delay in the reply in order to test the Relative Roundtrip Timeout Policy
  ACE_OS::sleep(ACE_Time_Value(0, 100 * 1000));

  std::cout << "Message from: " << user_name << std::endl;
  std::cout << "Subject:      " << subject << std::endl;
  std::cout << "Message:      " << message << std::endl;

  return true;
}

