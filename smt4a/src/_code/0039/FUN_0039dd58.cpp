/* NON_MATCHING: retail copies the returned pointer into r1 before adding 0x100; built adds straight from r0 */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

typedef struct StatusFlags {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u16 bits;
} StatusFlags;

typedef struct BattleActor {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ StatusFlags status;
} BattleActor;

extern BattleActor *FUN_001568f8(void *battle, u32 index);

static inline bool statusHasBit(StatusFlags *status, u32 bit)
{
    return (status->bits & (1 << bit)) != 0;
}

/* Script command: sets the result to whether bit `argument 1` of the status flags of actor `argument 0` is set. */
u32 FUN_0039dd58(void)
{
    u32 index = scrGetArg(0);
    u32 bit = scrGetArg(1);
    BattleActor *actor = FUN_001568f8(btlGetMainState(), index);

    scrSetResult(statusHasBit(&actor->status, bit));
    return 1;
}

} /* extern "C" */
