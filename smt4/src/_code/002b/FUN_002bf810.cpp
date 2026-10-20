#include "common.h"

extern "C" {

extern int FUN_00124238(unsigned int id, int param);

/* Calls FUN_00124238 with its second argument fixed at 0. */
void FUN_002bf810(unsigned int id)
{
    FUN_00124238(id, 0);
}

} /* extern "C" */
