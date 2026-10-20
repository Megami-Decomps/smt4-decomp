#include "common.h"

extern "C" {

void FUN_00103774(u32 object);
void FUN_001a0d08(void);

/* Runs FUN_001a0d08, then FUN_00103774 on the object. */
void FUN_002fd02a(u32 object)
{
    FUN_001a0d08();
    FUN_00103774(object);
}

} /* extern "C" */
