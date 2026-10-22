/* NON_MATCHING: base-prefix initialization, extra state stores and the result copy use different registers and load/store groups. */
#include "classes/WindowStatus.h"

/* Clears the extra selection state and translated result. */
Obj422278::Obj422278()
{
    value = 0;
    active = 0;
    reserved = 0;
    result = WindowStatusResult(0);
}
