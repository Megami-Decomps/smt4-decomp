/* NON_MATCHING: retail keeps the return constant 1 in r0 across the flag update (flag word in r2); built reuses r0 for the flag word and sets the constant afterwards */
#include "common.h"

extern "C" {

typedef struct BattleMain {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 flags;
} BattleMain;

extern BattleMain *btlGetMainState(void);
extern s32 scrGetArg(s32 index);

#define BTL_FLAG_SCRIPT_LOCK 0x80000

/* Script command: sets (argument > 0) or clears battle flag 0x80000. */
u32 scrCommBtlScriptLockSet(void)
{
    s32 enable = scrGetArg(0);
    u32 *flags = &btlGetMainState()->flags;

    if (enable > 0) {
        *flags |= BTL_FLAG_SCRIPT_LOCK;
    } else {
        *flags &= ~BTL_FLAG_SCRIPT_LOCK;
    }
    return 1;
}

} /* extern "C" */
