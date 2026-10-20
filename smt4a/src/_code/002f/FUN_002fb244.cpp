#include "common.h"

extern "C" {

void syncWaitHandleForever(void);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
} Holder;

/* Runs syncWaitHandleForever and sets the byte at 4. */
void FUN_002fb244(Holder *object)
{
    syncWaitHandleForever();
    object->flag = 1;
}

} /* extern "C" */
