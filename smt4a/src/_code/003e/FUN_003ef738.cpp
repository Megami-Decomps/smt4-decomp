/* NON_MATCHING: logic and instruction mix agree; armcc places the shared `return 0` block after the kind tests in retail but after the last handler here (one extra branch). */
#include "common.h"
#include "util/CalleeContracts.h"
#include "gamedata/Table04Record.h"
#include "battle/BattleUnit.h"

extern "C" {

/* The skill record returned by dataTable04FindById; only the three words the script command tests are named. */
typedef struct SkillRecord {
    /* 0x00 */ u8 unk00[0x5A];
    /* 0x5A */ u16 words[3];
} SkillRecord;

typedef struct UnitCharacter {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 id;
} UnitCharacter;

typedef struct UnitOwner {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ UnitCharacter *character;
} UnitOwner;

typedef struct UnitStats {
    /* 0x000 */ u8 unk000[0x1BE];
    /* 0x1BE */ u16 mode;
    /* 0x1C0 */ s16 selected;
} UnitStats;

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ UnitOwner *owner;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ UnitStats *stats;
} BtlUnit;

extern u32 g_btlScriptUnit;
extern u32 g_btlUiBlock;

s32 FUN_00184310(u32 id);
s32 FUN_004aba3c(u32 block);

/* Whether the script unit's character is of the given kind. */
static __inline bool scriptUnitIsKind(s32 kind)
{
    BtlUnit *unit = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));

    return unit != NULL && unit->owner != NULL && unit->owner->character != NULL &&
        FUN_0019acdc(unit->owner->character->id, 0) == kind;
}

/* Script command: for the selected skill, returns its word for the script unit's kind when that skill exists. */
s32 FUN_003ef738(void)
{
    s32 skillId;
    SkillRecord *record;

    if (!scriptUnitIsKind(1) && !scriptUnitIsKind(4) && !scriptUnitIsKind(3)) {
        return 0;
    }
    if (FUN_004aba3c(g_btlUiBlock) == -1) {
        UnitStats *stats = reinterpret_cast<BtlUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)))->stats;

        if (stats->mode != 2) {
            return 0;
        }
        skillId = stats->selected;
    } else {
        skillId = FUN_004aba3c(g_btlUiBlock);
    }
    record = (SkillRecord *)dataTable04FindById(skillId);
    if (record == NULL) {
        return 0;
    }
    if (scriptUnitIsKind(1)) {
        if (record->words[0] != 0) {
            return FUN_00184310(record->words[0]) != 0 ? (s16)record->words[0] : 0;
        }
    } else if (scriptUnitIsKind(4)) {
        if (record->words[1] != 0) {
            return FUN_00184310(record->words[1]) != 0 ? (s16)record->words[1] : 0;
        }
    } else if (scriptUnitIsKind(3)) {
        if (record->words[2] != 0) {
            return FUN_00184310(record->words[2]) != 0 ? (s16)record->words[2] : 0;
        }
    }
    return 0;
}

} /* extern "C" */
