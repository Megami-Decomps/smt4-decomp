#include "battle/BtlMainAccess.h"
#include "battle/btlScript.h"
#include "common.h"

extern "C" {

typedef struct UnitCommandPart {
    /* 0x00 */ u8 unk00[0xbe];
    /* 0xbe */ u16 value;
} UnitCommandPart;

typedef struct UnitCommandStats {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ UnitCommandPart part;
} UnitCommandStats;

typedef struct CommandUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitCommandStats *stats;
} CommandUnit;

typedef struct CommandState {
    /* 0x0000 */ u8 unk0000[0x2008];
    /* 0x2008 */ s64 flags;
} CommandState;

u32 scrGetArg(u32 index);
CommandUnit *btlUnitGet(u32 id);
void btlSelectCandidateEntries(s32 arg);

/* Script command: sets the script unit's value to 12 and the main state's 64-bit flags to script argument 0 | 0x20000 (sign-extended). Returns 1. */
u32 FUN_003b0b00(void)
{
    u32 arg = scrGetArg(0);

    UnitCommandPart *part = &btlUnitGet(g_btlScriptUnit)->stats->part;

    part->value = 12;
    reinterpret_cast<CommandState *>(btlGetMainState())->flags = (s32)(arg | 0x20000);
    btlSelectCandidateEntries(1);
    return 1;
}

} /* extern "C" */
