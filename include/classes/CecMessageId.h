#ifndef CLASSES_CECMESSAGEID_H
#define CLASSES_CECMESSAGEID_H

#include "AsdSDK/Source/Net/Cec/AsdCec.h"

/* A message id that clears itself on construction. */
class CecMessageId : public AsdCecMessageId {
public:
    CecMessageId();
};

#endif
