#include "classes/Obj558c00.h"

extern "C" {
void rc4KeySetup(Obj558c00 *cipher);
void FUN_002f310e(Obj558c00 *cipher);
}

/* Sets up the RC4 key schedule, then saves the freshly keyed state. */
void Obj558c00::vfunc1c()
{
    rc4KeySetup(this);
    FUN_002f310e(this);
}
