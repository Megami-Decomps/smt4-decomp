/* NON_MATCHING: compiler merges the two selected-item drawing cases unlike retail. */
#include "common.h"
#include "util/CalleeContracts.h"
#include "shard/JobWork.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

struct BattleDebugMenu {
    s32 state;
    u8 unk04[12];
    u32 list;
    u8 unk14[8];
    s32 subject;
};
struct BattleDebugMenuGlobals {
    u32 unk00;
    u32 resource;
    BattleDebugMenu *menu;
};
struct BattleDebugDrawWork {
    u8 prefix[0x4CD4];
    u32 font;
};
extern "C" {
void textDrawDefaultString(f32, f32);
u32 asdListBoxGetSelectedItemId(u32);
u32 FUN_003e83b4(BattleDebugDrawWork *, s32, s32);
void FUN_004d0f48(BattleDebugMenu *, u32);
void uiDrawFlagLabels(BattleDebugMenu *, u32);
extern BattleDebugMenuGlobals DAT_005715f8;
}

extern "C" u32 FUN_002ba870(u32 job)
{
    BattleDebugDrawWork *work = reinterpret_cast<BattleDebugDrawWork *>(jobGetWork(job));
    BattleDebugMenu *menu = DAT_005715f8.menu;
    if (menu != NULL) {
        switch (menu->state) {
        case 1:
            FUN_004d0f48(menu, DAT_005715f8.resource);
            break;
        case 10:
            if (asdListBoxGetSelectedItemId(menu->list) == 12) {
                FUN_0014bd84(work->font);
                textDrawDefaultString(256.0f, 42.0f);
            }
            break;
        case 12:
        case 14:
            if (asdListBoxGetSelectedItemId(menu->list) == 0) {
                uiDrawFlagLabels(menu, FUN_003e83b4(work, menu->subject, 1));
            }
            break;
        }
    }
    return 0;
}
