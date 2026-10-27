/* NON_MATCHING: BibleItemMenu::confirm matches in logic and calls (virtual isScreenReady, hidden-argument FUN_004a8750); armcc lays out the shared sprite/selection tail after the else branch where retail places it right after the owned branch and jumps back, and widens the first id differently (uxth vs mov). */
#include "bible/bibleMain.h"
#include "classes/Obj55c89c.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include "code/Code002a_Smt4a.h"

/* A compendium list entry: 0x20 bytes with the item id halfword at +4. */
struct BibleItemEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 itemId;
    /* 0x06 */ u8 unk06[0x1A];
};

/* The compendium's item menu (derived from the shared view interface); only the fields the confirm
 * handler touches are named. */
class BibleItemMenu : public BibleView {
public:
    void confirm();

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
    /* 0x854 */ u32 resourceA;
    /* 0x858 */ u32 resourceB;
    /* 0x85C */ u8 *entry;
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
u8 *FUN_00275bc8(u32 a, u32 b);
void FUN_0032d0c8(s32 a, s32 b, u16 id, const void *record);
void FUN_0035ad50(u16 id, u8 *out);
void panelSetTarget(s32 target, s32 arg);
void FUN_0037c8e4(s32 a, s32 b);
void FUN_004a3b48(BibleItemMenu *menu);
s32 FUN_004a8750(u16 id, u8 flag, s32 a, s32 b, s32 c);
s32 utilityReturnSuccess(u8 *object);
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder);
}

/* Applies the highlighted entry: plays its sound, opens its detail and resets the sprites. */
void Obj55c89c::confirm()
{
    BibleItemMenu *menu = reinterpret_cast<BibleItemMenu *>(this);
    if (menu->isScreenReady() == 0 || utilityReturnSuccess(&menu->successArg) != 0) {
        return;
    }
    menu->entry = FUN_00275bc8(menu->resourceA, menu->resourceB);
    *(u32 *)(menu->entry + 0x108) = 2;
    menu->state = 1;
    menu->substate = 0;
    menu->confirmed = 1;
    BibleItemEntry *list = menu->entries;
    if (menu->owned != 0) {
        u16 id = list[flaggedValueHolderGetTotal(menu->holder())].itemId;
        sysPlaySe(0x4E);
        FUN_0032d0c8(0, 1, id, (const void *)slotRecordFindById(id));
    } else {
        s16 id = (s16)list[flaggedValueHolderGetTotal(menu->holder())].itemId;
        s32 target = FUN_004a8750((u16)id, menu->confirmed, 0, menu->level >= 100, 0);
        FUN_0037c8e4(1, 0);
        if (FUN_002a4b28((u16)id) != 0) {
            panelSetTarget(-target, 0);
        } else {
            messageSetActiveMode(1);
        }
        sysPlaySe(0x2F);
        u8 detail[300];
        FUN_0035ad50((u16)id, detail);
        if (FUN_002a4b28((u16)id) != 0) {
            FUN_0032d0c8(0, 1, (u16)id, detail);
        } else {
            FUN_0032d0c8(0, 2, (u16)id, detail);
        }
    }
    uiSpriteBankApplyPreset(menu->sprites(), 8);
    uiSpriteBankApplyPreset(menu->sprites(), 9);
    g_animatedPageSelection.selected = -1;
    FUN_004a3b48(menu);
}
