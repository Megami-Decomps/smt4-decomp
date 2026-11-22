/* NON_MATCHING: 66 lines: retail keeps the record in r7 and the object in r5 (swapped here), shares the constant 1
 * with the option flag (r9) and converts the signed id it tested with uxth instead of reloading it. */
#include "shard/Shard0033.h"
#include "gamedata/NkmEnemyLookup.h"
#include "game/GameGlobalsRef.h"

struct StatusUnitRecord {
    u8 unk00[0x34];
    u32 skillPairs[4];
    u8 unk44[0x1e];
    u16 id;
};
struct StatusDisplayPane {
    u8 unk00[8];
    s32 maxHp;
    s32 maxMp;
    s32 hp;
    s32 mp;
};
struct StatusDisplayPaneView {
    u8 unk0000[0x137d];
    s8 optionActive;
    u8 unk137e[0x12];
    StatusDisplayPane pane;
};
struct StatusDisplayFlags {
    u8 unk00[0x10];
    u8 active;
    u8 unk11[6];
    u8 mode;
    u8 unk18[0xc];
    u8 selection;
    u8 changed;
    u8 unk26[0xc];
    u8 allowOption;
    u8 unk33[0x7d];
    u8 refresh;
};
struct StatusDisplayFlagsView {
    u8 unk0000[0x2000];
    StatusDisplayFlags flags;
};

extern "C" {
s32 gameProgressIsAdvanced();
s32 btlMainIsRunning();
s32 btlIsDefeatSuppressed();
void FUN_0026fd50(StatusDisplayPane *pane, StatusUnitRecord *record, s32 mode, const u32 *parameters);
void statusScaleUnitDisplayVitals(StatusDisplayPane *pane, u16 id);
s32 FUN_002b4dcc(StatusUnitRecord *record);
}

static __inline StatusDisplayPaneView *statusDisplayPaneView(ObjB *object)
{
    return reinterpret_cast<StatusDisplayPaneView *>(object);
}

static __inline StatusDisplayFlags *statusDisplayFlags(ObjB *object)
{
    return &reinterpret_cast<StatusDisplayFlagsView *>(object)->flags;
}

extern "C" void statusDisplayBindUnitRecord(StatusUnitRecord *record, s32 useBaseStats, u32 selection, const u32 *parameters)
{
    ObjB *object = g_gameGlobals.instance;
    StatusDisplayFlags *flags = statusDisplayFlags(object);
    flags->active = 1;
    if (useBaseStats != 0) {
        flags->mode = 7;
        if (gameProgressIsAdvanced()) {
            flags->mode = 16;
            record->skillPairs[0] = 0;
            record->skillPairs[1] = 0;
            record->skillPairs[2] = 0;
            record->skillPairs[3] = 0;
        }
    } else {
        flags->mode = btlMainIsRunning() && btlIsDefeatSuppressed() ? 17 : 2;
    }
    FUN_0026fd50(&statusDisplayPaneView(object)->pane, record, 0, parameters);
    if (useBaseStats != 0) {
        if (gameProgressIsAdvanced()) {
            statusScaleUnitDisplayVitals(&statusDisplayPaneView(object)->pane, record->id);
        } else {
            const NkmEnemyRecordA *base = nkmEnemyFindById(record->id);
            if (base != NULL) {
                statusDisplayPaneView(object)->pane.maxHp = base->maxHp;
                statusDisplayPaneView(object)->pane.maxMp = base->maxMp;
                s32 hp = FUN_002b4dcc(record);
                statusDisplayPaneView(object)->pane.hp = hp;
                statusDisplayPaneView(object)->pane.mp = base->maxMp;
                if (hp < 0) {
                    statusDisplayPaneView(object)->pane.hp = base->maxHp;
                }
            }
        }
    }
    flags->selection = selection;
    flags->refresh = 1;
    flags->changed = 0;
    s32 allowOption = 1;
    if (static_cast<s16>(record->id) >= 0) {
        const NkmEnemyRecordA *base = nkmEnemyFindById(record->id);
        if (base == NULL) {
            allowOption = 0;
        } else {
            if (base->flags & 0x400) {
                allowOption = 0;
            }
            ObjB *current = g_gameGlobals.instance;
            if (current != NULL && statusDisplayFlags(current)->mode == 17) {
                allowOption = 0;
            }
        }
    }
    flags->allowOption = allowOption;
    if (!allowOption && statusDisplayPaneView(object)->optionActive != 0) {
        statusDisplayPaneView(object)->optionActive = 0;
    }
}
