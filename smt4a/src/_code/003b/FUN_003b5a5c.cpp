#include "ui/MessageMain.h"
#include "ui/UiSpriteState.h"
#include <string.h>

struct MessageRemovalModeViewA {
    u8 unk00[0x98];
    u32 mode;
};
struct MessageIconUnit;

extern "C" {
extern MessageGlobalsA g_messageMain;
u32 scrGetArg(u32);
MessageIconUnit *saveSlotFindById(u32);
u32 FUN_00187168(const MessageIconUnit *);
s32 scrGetCommandFrame();
void FUN_0014e188(UiSpriteState *, s32, s32, void *, s32, f32);
void uiSpriteSetKeyframe(UiSpriteState *, s32, s32);
void sysPlayVoice(u32);

u32 FUN_003b5a5c()
{
    MessagePanelA *panel = g_messageMain.panel;
    u32 id = scrGetArg(0);
    const MessageIconUnit *unit = saveSlotFindById(static_cast<u16>(id));
    if (FUN_00187168(unit)) {
        s32 frame = scrGetCommandFrame();
        if (frame == 0) {
            if (!panel->unk90) {
                MessagePanelA *current = g_messageMain.panel;
                current->unk90 = 1;
                current->state = 1;
                FUN_0014e188(reinterpret_cast<UiSpriteState *>(current->blockB00), 20, 0xBB9, current->block194, 11, 1.0f);
                uiSpriteSelectAnim(reinterpret_cast<UiSpriteState *>(current->blockB00), 0);
                memset(current->removal.states, 0, sizeof(current->removal.states) + sizeof(current->removal.ids));
                panel->removal.lastIndex = 0;
            } else {
                ++panel->removal.lastIndex;
                reinterpret_cast<MessageRemovalModeViewA *>(panel)->mode = 20;
            }
            panel->removal.states[panel->removal.lastIndex] = 2;
            panel->removal.ids[panel->removal.lastIndex] = 0;
            panel->removal.special[panel->removal.lastIndex] = 0;
        }
        if (reinterpret_cast<MessageRemovalModeViewA *>(panel)->mode == 20) {
            panel->removal.ids[panel->removal.lastIndex] = id;
            FUN_0014e188(reinterpret_cast<UiSpriteState *>(panel->removalSprites.rows[panel->removal.lastIndex]),
                         20, 0xC12, panel->block194, 11, 1.0f);
            uiSpriteSetKeyframe(reinterpret_cast<UiSpriteState *>(panel->removalSprites.rows[panel->removal.lastIndex]), 11, 0);
            panel->removal.states[panel->removal.lastIndex] = 4;
            sysPlayVoice(0x100016F);
        }
        if (!panel->unk90 || panel->state != 2 || panel->removal.states[panel->removal.lastIndex] != 0)
            return 0;
    }
    return 1;
}
}
