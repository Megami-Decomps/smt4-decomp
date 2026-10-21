/* NON_MATCHING: argument/pane live ranges change register allocation, permission handling folds into BIC/early stores, and the final option-byte address is folded; candidate -O2. */
#include "shard/Shard0033.h"

struct StatusUnitRecord {
    u8 unk00[0x34];
    u32 skillPairs[4];
    u8 unk44[0x1e];
    u16 id;
};
struct StatusBaseRecord {
    u32 unk00;
    s32 maxHp;
    s32 maxMp;
    u8 unk0c[0xa];
    u16 flags;
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
    u8 optionActive;
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
extern ObjBRef g_gameGlobals;
s32 gameProgressIsAdvanced();
s32 btlMainIsRunning();
s32 FUN_00291e14();
void FUN_0026fd50(StatusDisplayPane *pane, StatusUnitRecord *record, s32 mode, const u32 *parameters);
void FUN_0034dae0(StatusDisplayPane *pane, u16 id);
const StatusBaseRecord *dataTable00FindById(u16 id);
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
        flags->mode = btlMainIsRunning() && FUN_00291e14() ? 17 : 2;
    }
    StatusDisplayPane *pane = &statusDisplayPaneView(object)->pane;
    FUN_0026fd50(pane, record, 0, parameters);
    if (useBaseStats != 0) {
        if (gameProgressIsAdvanced()) {
            FUN_0034dae0(pane, record->id);
        } else {
            const StatusBaseRecord *base = dataTable00FindById(record->id);
            if (base != NULL) {
                pane->maxHp = base->maxHp;
                pane->maxMp = base->maxMp;
                s32 hp = FUN_002b4dcc(record);
                pane->hp = hp;
                pane->mp = base->maxMp;
                if (hp < 0) {
                    pane->hp = base->maxHp;
                }
            }
        }
    }
    flags->selection = selection;
    flags->refresh = 1;
    flags->changed = 0;
    u8 allowOption = 1;
    if (static_cast<s16>(record->id) >= 0) {
        const StatusBaseRecord *base = dataTable00FindById(record->id);
        if (base == NULL) {
            allowOption = 0;
        } else {
            allowOption = (base->flags & 0x400) == 0;
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
