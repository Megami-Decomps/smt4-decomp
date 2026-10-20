/* NON_MATCHING: retail loads g_uiQuest a second time for the first page test (ldr r0,[r0]); built reuses the first load. */
#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {

extern void buttonHelpSetPreset(s32 preset);
extern void FUN_002b8454(s32 a, s32 b, s32 c, s32 d);
extern s32 FUN_0029022c(void);
extern u32 FUN_002903f0(void);
extern s32 FUN_0029efa8(UiQuestCursor *cursor);
extern s32 FUN_0029efc0(UiQuestCursor *cursor);

/* Refreshes the quest menu's button help for the current page/selection and queues the matching cursor sounds. */
void FUN_002905d0(void)
{
    UiQuest *menu = g_uiQuest;
    UiQuestPanel *panel = &menu->panel;
    u16 current;

    if (menu->panel.detailMode != 0) {
        if (g_uiQuest->panel.page == 1) {
            buttonHelpSetPreset(0x6C);
        }
        if (menu->panel.page == 2) {
            if (menu->panel.selection == 0) {
                buttonHelpSetPreset(0x6D);
            }
            if (menu->panel.selection == 1) {
                buttonHelpSetPreset(0x6E);
            }
        }
        return;
    }
    if (g_uiQuest->panel.page == 1) {
        buttonHelpSetPreset(0x6F);
    }
    if (menu->panel.page == 2) {
        if (menu->panel.selection == 0) {
            buttonHelpSetPreset(0x70);
        }
        if (menu->panel.selection == 1) {
            buttonHelpSetPreset(0x71);
        }
    }
    if (menu->panel.page == 3) {
        if (menu->panel.selection == 0) {
            buttonHelpSetPreset(0x72);
        }
        if (menu->panel.selection == 1) {
            buttonHelpSetPreset(0x73);
        }
        if (menu->panel.selection == 2) {
            buttonHelpSetPreset(0x74);
        }
    }
    if (panel->confirming != 0) {
        FUN_002b8454(5, 1, 0x32, 1);
        FUN_002b8454(2, 0x12, 0, 1);
    }
    current = menu->list[FUN_0029efc0(&menu->cursor) + FUN_0029efa8(&menu->cursor)];
    if (FUN_002903f0() == current) {
        FUN_002b8454(5, 1, 0x33, 1);
    } else if (panel->confirming == 0) {
        FUN_002b8454(5, 1, 0x31, 1);
    }
    if (FUN_0029022c() == 0) {
        FUN_002b8454(2, 0x12, 0, 1);
    } else {
        FUN_002b8454(2, 4, 0x33, 1);
    }
}

} /* extern "C" */
