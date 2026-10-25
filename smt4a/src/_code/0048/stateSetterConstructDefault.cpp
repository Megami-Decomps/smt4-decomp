/* Tail call into the function that follows. */
#include "common.h"
#include "name/nameMain.h"

extern "C" {

void stateSetterConstruct(void *a, u32 b);

void stateSetterConstructDefault(void *a)
{
    stateSetterConstruct(a, 0);
}

}
