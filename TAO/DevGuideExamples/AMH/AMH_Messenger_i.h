/* -*- C++ -*-  */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.dre.vanderbilt.edu/~schmidt/TAO.html

#ifndef AMH_MESSENGER_I_H_
#define AMH_MESSENGER_I_H_

#include "MessengerS.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

//Class AMH_Messenger_i
class  AMH_Messenger_i : public virtual POA_DevGuide::AMH_Messenger
{
public:
  //Constructor
  AMH_Messenger_i (void);

  //Destructor
  virtual ~AMH_Messenger_i (void);

  virtual void send_message (
    DevGuide::AMH_MessengerResponseHandler_ptr _tao_rh,
    const char * user_name,
    const char * subject,
    const char * message
  );
};


#endif /* AMH_MESSENGERI_H_  */
