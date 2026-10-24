#include "classes/CecMessageId.h"

extern "C" {
void cecMessageIdClear(void *id);
}

/* Starts out cleared. */
CecMessageId::CecMessageId()
{
    cecMessageIdClear(this);
}
