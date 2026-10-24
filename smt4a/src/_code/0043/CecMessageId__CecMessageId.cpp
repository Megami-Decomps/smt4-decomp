#include "classes/CecMessageId.h"

extern "C" {
void clearTwoWords(void *id);
}

/* Starts out cleared. */
CecMessageId::CecMessageId()
{
    clearTwoWords(this);
}
