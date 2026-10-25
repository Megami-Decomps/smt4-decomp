/* NON_MATCHING: explicit script argument index recovered; flag address and constant-one lifetimes differ. */
/* Clears the flag bit selected by scrGetArg in the manager's flag word; always returns 1. */
#include "common.h"

extern "C" {

typedef struct Manager {
    /* 0x0000 */ u8 unk0000[0x49BC];
    /* 0x49BC */ u32 flags;
} Manager;

extern Manager *btlGetMainState(void);
extern s32 scrGetArg(u32 index);

u32 FUN_002f1524(void)
{
    u8 bit = static_cast<u8>(scrGetArg(0));

    btlGetMainState()->flags &= ~(1 << bit);
    return 1;
}

}
