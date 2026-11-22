/* NON_MATCHING: 197 vs 197 rows (64 diff lines); all instructions, offsets and pool words match retail except r4/r5 are swapped (retail: entries/loop/color in r4, menu in r5). */
#include "common.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0033.h"

struct QuestListEntry {
    /* 0x00 */ s16 count;
    /* 0x02 */ u16 capacity;
    /* 0x04 */ u16 questId;
    /* 0x06 */ u8 unk06[0x1A];

    u16 getId() const { return questId; }
};

struct QuestSpriteFrame {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;
};

struct QuestMenu {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ s32 state;
    /* 0x0018 */ s32 stateTimer;
    /* 0x001C */ u8 unk001C[4];
    /* 0x0020 */ u8 list[0xA8];
    /* 0x00C8 */ u8 layout[0x14];
    /* 0x00DC */ u8 rowSprite[0x73C];
    /* 0x0818 */ u8 entriesA[0x34];
    /* 0x084C */ u32 entriesB;
    /* 0x0850 */ u8 unk0850[0x10];
    /* 0x0860 */ s8 tabsActive;
    /* 0x0861 */ u8 unk0861[3];
    /* 0x0864 */ QuestListEntry entries[1];
    /* 0x0884 */ u8 unk0884[0x9FEE];
    /* 0xA872 */ s16 preset;
    /* 0xA874 */ s32 category;
    /* 0xA878 */ u8 unkA878[2];
    /* 0xA87A */ s16 categories[0x80];
    /* 0xA97A */ s16 categoryCount;
    /* 0xA97C */ s16 categoryCursor;
    /* 0xA97E */ s8 touchedCategory;
};
typedef char QuestMenuLayoutCheck[
    offsetof(QuestMenu, tabsActive) == 0x860 &&
    offsetof(QuestMenu, entries) == 0x864 &&
    offsetof(QuestMenu, preset) == 0xA872 &&
    offsetof(QuestMenu, category) == 0xA874 &&
    offsetof(QuestMenu, categories) == 0xA87A &&
    offsetof(QuestMenu, categoryCount) == 0xA97A &&
    offsetof(QuestMenu, categoryCursor) == 0xA97C &&
    offsetof(QuestMenu, touchedCategory) == 0xA97E &&
    sizeof(QuestListEntry) == 0x20 && sizeof(QuestMenu) == 0xA980 ? 1 : -1];

extern "C" {
s32 flaggedValueHolderGetTotal(void *holder);
void uiOpenStartAnimations(QuestMenu *menu);
void FUN_0032d0c8(RelativeDirectory *directory, u32 index, u16 skillId, u32 extra);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
s32 FUN_004d03d8(s32 x, s32 y, s32 w, s32 h);
s32 FUN_004d0420(s32 x, s32 y, s32 w, s32 h);
void FUN_004a4848(QuestMenu *menu);
s32 gameGetMode(void);
s32 FUN_0035db94(void);
void uiSpriteBankApplyPreset(void *bank, s32 preset);
void releaseEntriesB(u32 entries);
void releaseEntriesA(void *entries);
void sortMenuAcquire(s32 a, s32 b);
void useCounterStart(void);
void buttonHelpSetText(s32 a, u32 color);
void sendEvent100020E(void);
void sendEvent100020F(void);
void statusPanelClose(void);
void FUN_00212724(void);

#define QUEST_COLOR_FADE 0xF4F4F4FF

/* One selection-menu input step: updates highlighted-item help and touch categories,
 * then opens a detail view, closes, or leaves the menu unchanged. */
void questMenuUpdate(QuestMenu *menu)
{
    QuestListEntry *entries = menu->entries;
    s16 previousQuest = entries[flaggedValueHolderGetTotal(menu->list)].getId();
    uiOpenStartAnimations(menu);
    s16 quest = entries[flaggedValueHolderGetTotal(menu->list)].getId();
    if (quest != previousQuest)
        FUN_0032d0c8(NULL, 1, (u16)quest, 0);

    s32 menuPressed = inputIsQuestMenuPressed();
    s32 cancelPressed = 0;
    if (menu->entries[0].count > 0)
        cancelPressed = inputIsQuestCancelPressed();

    if (menu->categoryCount > 0 && menu->tabsActive == 1) {
        for (s32 i = 0; i < 2; i++) {
            QuestSpriteFrame *tab = (QuestSpriteFrame *)layoutFindTableEntry(menu->layout, i + 0x1023);
            s32 x = tab->x;
            s16 y = tab->y;
            s32 w = tab->size[0];
            s32 h = tab->size[1];
            s32 hit = FUN_004d03d8(x, y, w, h);
            if (hit != 0)
                menu->touchedCategory = (s8)i;
            if (FUN_004d0420(x, y, w, h) != 0) {
                menu->touchedCategory = (s8)i;
                if (i != 0) {
                    menu->categoryCursor++;
                    if (menu->categoryCount <= menu->categoryCursor)
                        menu->categoryCursor = 0;
                } else {
                    menu->categoryCursor--;
                    if (menu->categoryCursor < 0)
                        menu->categoryCursor = menu->categoryCount - 1;
                }
                if (menu->category != menu->categories[menu->categoryCursor]) {
                    menu->category = menu->categories[menu->categoryCursor];
                    FUN_004a4848(menu);
                }
                break;
            }
        }
    }

    if (gameGetMode() != 0) {
        menu->state = 4;
        menu->stateTimer = 0;
        if (FUN_0035db94() == 1)
            menu->preset = 9;
        else
            menu->preset = 0xB;
        uiSpriteBankApplyPreset(menu->rowSprite, menu->preset);
        releaseEntriesB(menu->entriesB);
        releaseEntriesA(menu->entriesA);
        return;
    }
    if (menuPressed != 0) {
        statusPanelClose();
        if (menu->tabsActive == 0)
            FUN_00212724();
        buttonHelpSetText(0, QUEST_COLOR_FADE);
        uiSpriteBankApplyPreset(menu->rowSprite, 1);
        gameGlobalsSetMenuOpenFlag(1);
        menu->state = 6;
        menu->stateTimer = 0;
        sendEvent100020F();
    } else if (cancelPressed != 0) {
        sortMenuAcquire(0xC, 0);
        useCounterAppendValue(1);
        useCounterAppendValue(2);
        useCounterAppendValue(4);
        useCounterAppendValue(5);
        useCounterAppendValue(3);
        useCounterStart();
        gameGlobalsSetMenuOpenFlag(1);
        menu->state = 3;
        menu->stateTimer = 0;
        buttonHelpSetText(0, QUEST_COLOR_FADE);
        sendEvent100020E();
    }
}

} /* extern "C" */
