/* NON_MATCHING: register allocation only: retail updates the flag word through r0 and returns a fresh `mov r0,#1`; built uses r1/r2 and returns r2 */
/* Clears the flag bit selected by scrGetArg in the manager's flag word; always returns 1. */
#include "common.h"

extern "C" {

typedef struct Manager {
    /* 0x0000 */ u8 unk0000[0x49BC];
    /* 0x49BC */ u32 flags;
} Manager;

extern Manager *btlGetMainState(void);
extern u8 scrGetArg(void);

u32 FUN_002f1528(void)
{
    u8 bit = scrGetArg();

    btlGetMainState()->flags &= ~(1 << bit);
    return 1;
}

}
