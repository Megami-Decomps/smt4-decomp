#include "common.h"

extern "C" {

int messageOwnerSetState(u8 *obj, int state);

void stateSetterStart9(u8 *obj)
{
    messageOwnerSetState(obj, 9);
    *obj = 1;
}

} /* extern "C" */
