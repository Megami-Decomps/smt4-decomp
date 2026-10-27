/* NON_MATCHING: the `__packed` mask gives retail's two immediate-offset ldrs; only the order of the mask word loads around the final ldrd differs. */
#include "common.h"
#include "bible/bibleAnalyze.h"
#include "gamedata/Table04Record.h"

namespace {

struct BattleMaskView {
    u8 unk00[0x1c0];
    __packed unsigned long long unk1C0; // 0x1c0
};

struct BattleObjectView {
    u8 unk00[0x45a0];
    unsigned long long unk45A0; // 0x45a0
};

struct BattleEntryView {
    u8 unk00[8];
    s16 unk08; // 0x08
};

}

extern "C" {
extern BattleMaskView g_btlMain;
BattleEntryView* FUN_003eaf20(BattleObjectView* object);

// Resolve a valid table ID and optionally test and set the object's battle mask.
s32 FUN_003f1a9c(BattleObjectView* object, s32 mode)
{
    if (mode != 0) {
        u64 flags = object->unk45A0;
        if ((flags & g_btlMain.unk1C0) != 0) {
            return 0;
        }
    }

    BattleEntryView* entry = FUN_003eaf20(object);
    if (entry == 0) {
        return 0;
    }

    s32 id = btlSelectSourceTriggeredSkill(entry->unk08, mode);
    if (id == 0) {
        return 0;
    }
    if (dataTable04FindById(id) == 0) {
        return 0;
    }

    if (mode != 0) {
        object->unk45A0 |= g_btlMain.unk1C0;
    }
    return id;
}
}
