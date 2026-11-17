#include "ui/MessageMainA.h"
#include "ui/UiSpriteApi.h"
#include <string.h>

struct MessageRemovalModeViewA {
    u8 unk00[0x98];
    u32 mode;
};
struct MessageIconUnit;

extern "C" {
u32 scrGetArg(u32);
MessageIconUnit *saveSlotFindById(u32);
u32 partySlotIsOccupied(const MessageIconUnit *);
s32 scrGetCommandFrame();
void sysPlayVoice(u32);

u32 FUN_003b5a5c()
{
    MessageWindowA *panel = g_messageMain.banner;
    u32 id = scrGetArg(0);
    const MessageIconUnit *unit = saveSlotFindById(static_cast<u16>(id));
    if (partySlotIsOccupied(unit)) {
        s32 frame = scrGetCommandFrame();
        if (frame == 0) {
            if (!panel->shown) {
                MessageWindowA *current = g_messageMain.banner;
                current->shown = 1;
                current->counterState = 1;
                uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(&current->sprites[17]), 20, 0xBB9, &current->parameters, 11, 1.0f);
                uiSpriteSelectAnim(reinterpret_cast<UiSpriteState *>(&current->sprites[17]), 0);
                memset(current->queueStates, 0, sizeof(current->queueStates) + sizeof(current->queueIds));
                panel->queueIndex = 0;
            } else {
                ++panel->queueIndex;
                reinterpret_cast<MessageRemovalModeViewA *>(panel)->mode = 20;
            }
            panel->queueStates[panel->queueIndex] = 2;
            panel->queueIds[panel->queueIndex] = 0;
            panel->queueSpecial[panel->queueIndex] = 0;
        }
        if (reinterpret_cast<MessageRemovalModeViewA *>(panel)->mode == 20) {
            panel->queueIds[panel->queueIndex] = id;
            uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(&panel->sprites[22 + panel->queueIndex]),
                         20, 0xC12, &panel->parameters, 11, 1.0f);
            uiSpriteSetKeyframe(reinterpret_cast<UiSpriteState *>(&panel->sprites[22 + panel->queueIndex]), 11, 0);
            panel->queueStates[panel->queueIndex] = 4;
            sysPlayVoice(0x100016F);
        }
        if (!panel->shown || panel->counterState != 2 || panel->queueStates[panel->queueIndex] != 0)
            return 0;
    }
    return 1;
}
}
