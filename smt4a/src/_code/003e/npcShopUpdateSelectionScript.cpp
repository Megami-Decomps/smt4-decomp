/* Starts the selection script for the previous shop state, then handles its result. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "code/Code003c_Smt4a.h"
#include "script/ScriptEntry.h"

struct ScriptProcess;
struct NpcShopNameEntry {
    u8 unk00[6];
    u16 id;
    u8 unk08[4];
};
struct NpcShopSelectWork {
    u32 unk00;
    s32 state;
    s32 step;
    s32 previousState;
    u32 unk10;
    void *bytecode;
    ScriptProcess *script;
    u32 unk1c;
    NpcShopNameEntry names[3];
    u8 unk44[8];
    s32 selected;
};

extern "C" {
extern const char g_npcShopSelectRepeatEntryName[]; // "npcShop_Select_02"
extern const char g_npcShopSelectSpecialEntryName[]; // "npcShop_Select_01"
extern const char g_npcShopSelectState5EntryName[]; // "npcShop_Select_03"
extern const char g_npcShopSelectDefaultEntryName[]; // "npcShop_Select_00"
const char *dataFindKindRecordWithAocOverrides(u32 id, s32 mode);
s32 tableGroupFindEntryIndex(void *table, const char *name);
s32 scrRunOpcodesStub(ScriptProcess *script);
bool panelIsMissingOrFlagClear();
u32 messageGetChoiceResult();
void obj04Finish();
}

static __inline void npcShopStartEntry(NpcShopSelectWork *work, const char *name)
{
    s32 entry = tableGroupFindEntryIndex(work->bytecode, name);
    if (entry >= 0) {
        scrScriptProcessStartEntry(work->script, entry);
    }
}

static __inline void npcShopChangeState(NpcShopSelectWork *work, s32 state)
{
    work->previousState = work->state;
    work->state = state;
    work->step = 0;
}

extern "C" void npcShopUpdateSelectionScript(NpcShopSelectWork *work)
{
    switch (work->step) {
    case 0:
        if (work->names[0].id != 0) {
            scrSetStringSlot(0, dataFindKindRecordWithAocOverrides(work->names[0].id, 0));
        }
        if (work->names[1].id != 0) {
            scrSetStringSlot(1, dataFindKindRecordWithAocOverrides(work->names[1].id, 0));
        }
        if (work->names[2].id != 0) {
            scrSetStringSlot(2, dataFindKindRecordWithAocOverrides(work->names[2].id, 0));
        }
        messageMainRequestBanner();
        if (work->previousState == 4) {
            npcShopStartEntry(work, g_npcShopSelectRepeatEntryName);
        } else if (work->previousState == 6) {
            npcShopStartEntry(work, g_npcShopSelectSpecialEntryName);
        } else if (work->previousState == 5) {
            npcShopStartEntry(work, g_npcShopSelectState5EntryName);
        } else {
            npcShopStartEntry(work, g_npcShopSelectDefaultEntryName);
        }
        ++work->step;
        break;
    case 1:
        if (scrRunOpcodesStub(work->script) == 2 && panelIsMissingOrFlagClear()) {
            s32 selected = messageGetChoiceResult();
            if (selected == -1) {
                npcShopChangeState(work, 7);
            } else if (selected == 3) {
                npcShopChangeState(work, 6);
            } else {
                work->selected = selected;
                npcShopChangeState(work, 4);
            }
            messageMainClearBannerRequest();
            obj04Finish();
        }
        break;
    }
}
