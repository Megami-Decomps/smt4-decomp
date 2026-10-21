/* NON_MATCHING: category/choice address preparation and state/constant register allocation differ; -O2 candidate. */
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"

struct EquipmentChoice { u16 id, quantity; };
struct EquipmentChoiceList { EquipmentChoice choices[1024]; u16 unk1000; };
union EquipmentCategory {
    FlaggedValueHolder selection;
    struct { u8 unk00[8]; s32 count; } items;
};
struct EquipmentMenu {
    u32 unk000;
    s32 state, phase;
    u32 unk00c;
    s32 previousState;
    u8 unk014[0x178];
    u32 process;
    u8 unk190[0x23c];
    SpritePresetBank bank; // 0x3cc
    u8 releaseState[0x34]; // 0xb08
    u32 releaseHandle;
    s32 category;
    u8 unkb44[0x1c];
    EquipmentCategory categories[9]; // 0xb60
    EquipmentChoiceList choices[9]; // 0xf74, stride0x1002
    u8 unk9f86[0xc0aa];
    s16 touchCount;
    u8 unk16032[0xe];
    u32 closeRequest;
};
extern "C" {
u32 scrRunOpcodesStub(u32);
void FUN_0019de98(u32, u32);
u32 panelSetTarget(u32, u8);
u32 FUN_004954e8(EquipmentMenu *);
void messageChoiceShowCurrent(EquipmentMenu *);
u32 FUN_004d0584();
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *);
u32 FUN_0049cad0(const EquipmentChoice *);
u32 btlRollClamped(u16, u32);
void sendEvent100020E();
void sendEvent100020F();
void FUN_00498494(EquipmentMenu *, s32);
u32 inputIsQuestMenuPressed();
u32 inputIsQuestCancelPressed();
void FUN_0038b010(u32);
void uiSpriteBankApplyPreset(SpritePresetBank *, u32);
void obj04Finish();
void releaseEntriesB(u32);
void releaseEntriesA(void *);
void ifTouchRegionRemove();
void FUN_0049706c(EquipmentMenu *);

void itemMenuHandleSelectionInput(EquipmentMenu *menu)
{
    if (menu->phase != 0) {
        if (menu->phase == 1 && scrRunOpcodesStub(menu->process) == 2) {
            FUN_0019de98(0, 0xf4f4f4ff);
            menu->previousState = menu->state;
            menu->state = 5;
            menu->phase = 0;
        }
        return;
    }
    scrRunOpcodesStub(menu->process);
    panelSetTarget(0, 0);
    u32 confirmed = FUN_004954e8(menu);
    messageChoiceShowCurrent(menu);
    if (menu->categories[menu->category].items.count > 0 && FUN_004d0584())
        confirmed = 1;
    s32 category = menu->category;
    u32 index = flaggedValueHolderGetTotal(&menu->categories[category].selection);
    const EquipmentChoice *choice = &menu->choices[category].choices[index];
    bool eligible = true;
    if (menu->category != 8) {
        u32 limit = FUN_0049cad0(choice);
        eligible = btlRollClamped(choice->id, limit) != 0;
    }
    if (eligible && confirmed) {
        sendEvent100020E();
        FUN_00498494(menu, 12);
        return;
    }
    if (inputIsQuestMenuPressed()) {
        menu->closeRequest = 0;
        FUN_0038b010(0);
        sendEvent100020F();
        uiSpriteBankApplyPreset(&menu->bank, 1);
        obj04Finish();
        releaseEntriesB(menu->releaseHandle);
        releaseEntriesA(menu->releaseState);
        for (s32 i = 0; i < menu->touchCount; ++i)
            ifTouchRegionRemove();
        menu->phase = 1;
        return;
    }
    if (inputIsQuestCancelPressed()) {
        sendEvent100020E();
        FUN_0049706c(menu);
    }
}
}
