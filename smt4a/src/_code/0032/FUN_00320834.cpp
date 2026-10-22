/* NON_MATCHING: compiler coalesces retail's second g_uiQuest pointer load; selection sound logic otherwise matches. */
#include "shard/W5_W5Match7_UiQuest.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" int sysPlaySe(s32 soundId);

/* Play the sound associated with the current quest-choice menu. */
extern "C" void FUN_00320834(void)
{
    UiQuestApoc *menu = g_uiQuest;
    s32 count = g_uiQuest->listState.count;
    if (menu->unk90c) {
        if (g_gameState.navigation.alternateNaviMap) {
            if (count == 2) {
                if (menu->listState.selection == 0) {
                    sysPlaySe(0x10F);
                }
                if (menu->listState.selection == 1) {
                    sysPlaySe(0x110);
                }
            }
        } else if (count == 2) {
            if (menu->listState.selection == 0) {
                sysPlaySe(0xD7);
            }
            if (menu->listState.selection == 1) {
                sysPlaySe(0xD6);
            }
        }
    } else {
        if (count == 2) {
            if (menu->listState.selection == 0) {
                sysPlaySe(0xD7);
            }
            if (menu->listState.selection == 1) {
                sysPlaySe(0xD6);
            }
        }
        if (menu->listState.count == 3) {
            if (menu->listState.selection == 0) {
                sysPlaySe(0xD8);
            }
            if (menu->listState.selection == 1) {
                sysPlaySe(0xD9);
            }
            if (menu->listState.selection == 2) {
                sysPlaySe(0xDA);
            }
        }
    }
}
