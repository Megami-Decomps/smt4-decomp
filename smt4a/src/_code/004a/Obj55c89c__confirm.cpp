/* NON_MATCHING: the state/phase stm uses r1 instead of retail's r2. */
#include "bible/bibleMain.h"
#include "classes/Obj55c89c.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include "code/Code002a_Smt4a.h"
#include "script/scrScriptProcess.h"

/* A compendium list entry: 0x20 bytes with the item id halfword at +4. */
struct BibleItemEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 itemId;
    /* 0x06 */ u8 unk06[0x1A];

    u16 getItemId() const { return itemId; }
};

/* The compendium's item menu (derived from the shared view interface); only the fields the confirm
 * handler touches are named. */
class BibleItemMenu : public BibleView {
public:

    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 state;
    /* 0x18 */ u32 substate;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ u8 holderArea[0x74];        /* a FlaggedValueHolder */
    /* 0x94 */ s8 level;
    /* 0x95 */ u8 unk95;
    /* 0x96 */ u8 successArg;
    /* 0x97 */ u8 unk97[0xDC - 0x97];
    /* 0xDC */ u8 spriteArea[0x854 - 0xDC];   /* a SpritePresetBank */
    /* 0x854 */ void *resourceA;
    /* 0x858 */ void *resourceB;
    /* 0x85C */ ScriptProcess *entry;
    /* 0x860 */ u8 owned;
    /* 0x861 */ u8 confirmed;
    /* 0x862 */ u8 unk862[2];
    /* 0x864 */ BibleItemEntry entries[1];

    FlaggedValueHolder *holder() { return (FlaggedValueHolder *)holderArea; }
    SpritePresetBank *sprites() { return (SpritePresetBank *)spriteArea; }
};

extern "C" {
extern struct { u32 unk0; s32 selected; } g_animatedPageSelection;
void sysPlaySe(s32 id);
void uiSpriteBankApplyPreset(SpritePresetBank *bank, u32 preset);
u32 slotRecordFindById(u16 id);
void FUN_0032d0c8(s32 a, s32 b, u16 id, const void *record);
void unitRecordBuildFromSave(u16 id, u8 *out);
void panelSetTarget(s32 target, s32 arg);
void messageBannerInitCounter(s32 a, s32 b);
void compendiumRefreshStatusPreview(BibleItemMenu *menu);
s32 compendiumComputeSummonCost(u16 id, u8 flag, s32 a, s32 b, s32 c);
s32 utilityReturnSuccess(u8 *object);
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder);
} /* extern "C" */

/* Applies the highlighted entry: plays its sound, opens its detail and resets the sprites. */
void Obj55c89c::confirm()
{
    BibleItemMenu *menu = (BibleItemMenu *)this;
    if (isScreenReady() == 0 || utilityReturnSuccess(&menu->successArg) != 0) {
        return;
    }
    menu->entry = scrScriptProcessCreate(menu->resourceA, menu->resourceB);
    scriptProcessSetMode(menu->entry, 2);
    state = 1;
    phase = 0;
    BibleItemEntry *list = menu->entries;
    if (mode == 0) {
        menu->confirmed = 1;
        s16 id = list[flaggedValueHolderGetTotal(menu->holder())].getItemId();
        s32 target = compendiumComputeSummonCost((u16)id, menu->confirmed, 0, menu->level >= 100, 0);
        messageBannerInitCounter(1, 0);
        if (compendiumEntryIsRegistered((u16)id) != 0) {
            panelSetTarget(-target, 0);
        } else {
            messageSetActiveMode(1);
        }
        sysPlaySe(0x2F);
        u8 detail[300];
        unitRecordBuildFromSave((u16)id, detail);
        if (compendiumEntryIsRegistered((u16)id) != 0) {
            FUN_0032d0c8(0, 1, (u16)id, detail);
        } else {
            FUN_0032d0c8(0, 2, (u16)id, detail);
        }
    } else {
        menu->confirmed = 1;
        s16 id = (s16)list[flaggedValueHolderGetTotal(menu->holder())].itemId;
        sysPlaySe(0x4E);
        FUN_0032d0c8(0, 1, id, (const void *)slotRecordFindById(id));
    }
    uiSpriteBankApplyPreset(menu->sprites(), 8);
    uiSpriteBankApplyPreset(menu->sprites(), 9);
    g_animatedPageSelection.selected = -1;
    compendiumRefreshStatusPreview(menu);
}
