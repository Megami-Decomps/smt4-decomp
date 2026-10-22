#include "classes/Obj558c90.h"
extern "C" {
void sharedRefRelease(void);
void FUN_002ecf28(void);
void sharedRefHolderSet(void *self, s32 flag);
}

/* Release the context's shared references. */
Obj558c90::~Obj558c90()
{
    sharedRefHolderSet(this, 0);
    FUN_002ecf28();
    sharedRefRelease();
}
