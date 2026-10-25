/* Tail call into the function that follows. */
#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

void FUN_00180118(void);

u32 FUN_00180114(unsigned arg0)
{
    FUN_00180118();
}

}
