#include "common.h"

extern "C" {

int messageStatesSetFirst(int arg);

void shopResetMessageState(void)
{
    messageStatesSetFirst(0);
}

} /* extern "C" */
