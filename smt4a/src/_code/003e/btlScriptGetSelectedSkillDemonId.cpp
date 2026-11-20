#include "battle/BtlGlobals.h"
#include "gamedata/NkmBaseRecordA.h"
#include "common.h"
#include "code/Code0019.h"
#include "gamedata/SkillDataRecord.h"
#include "battle/BattleUnit.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

/* The skill record returned by skillDataFindById; only the three words the script command tests are named. */
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

typedef struct ScriptUnitMode {
    /* 0x000 */ u8 unk000[0x1BE];
    /* 0x1BE */ u16 mode;
    /* 0x1C0 */ s16 selected;
} ScriptUnitMode;

typedef struct BtlScriptUnitView {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ UnitOwner *owner;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ ScriptUnitMode *stats;
} BtlScriptUnitView;

extern u32 g_btlScriptUnit;

s32 btlUiObjCGetSelectedSkillDemonId(BtlUiA *block);

/* Whether the script unit's character is of the given kind. */
static __inline bool scriptUnitIsKind(s32 kind)
{
    BtlScriptUnitView *unit = reinterpret_cast<BtlScriptUnitView *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));

    return unit != NULL && unit->owner != NULL && unit->owner->character != NULL &&
        unitMapIdToCategory(unit->owner->character->id, 0) == kind;
}

/* Script command: for the selected skill, returns its word for the script unit's kind when that skill exists. */
s32 btlScriptGetSelectedSkillDemonId(void)
{
    s32 skillId;
    SkillRecord *record;

    if (!scriptUnitIsKind(1) && !scriptUnitIsKind(4) && !scriptUnitIsKind(3)) {
        return 0;
    }
    if (btlUiObjCGetSelectedSkillDemonId(g_btlUiBlock) != -1) {
        skillId = btlUiObjCGetSelectedSkillDemonId(g_btlUiBlock);
    } else {
        ScriptUnitMode *stats = reinterpret_cast<BtlScriptUnitView *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)))->stats;

        if (stats->mode != 2) {
            return 0;
        }
        skillId = stats->selected;
    }
    record = (SkillRecord *)skillDataFindById(skillId);
    if (record == NULL) {
        return 0;
    }
    if (scriptUnitIsKind(1)) {
        if (record->words[0] == 0) {
            return 0;
        }
        return nkmBaseGetRecord(record->words[0]) != NULL ? (s16)record->words[0] : 0;
    }
    if (scriptUnitIsKind(4)) {
        if (record->words[1] == 0) {
            return 0;
        }
        return nkmBaseGetRecord(record->words[1]) != NULL ? (s16)record->words[1] : 0;
    }
    if (scriptUnitIsKind(3)) {
        if (record->words[2] == 0) {
            return 0;
        }
        return nkmBaseGetRecord(record->words[2]) != NULL ? (s16)record->words[2] : 0;
    }
    return 0;
}

} /* extern "C" */
