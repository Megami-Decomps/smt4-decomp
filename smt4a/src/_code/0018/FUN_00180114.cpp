/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void FUN_00180118(void);

void FUN_00180114(void)
{
    FUN_00180118();
}

}
