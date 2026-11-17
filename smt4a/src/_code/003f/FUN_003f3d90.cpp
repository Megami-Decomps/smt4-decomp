#include "ui/PartyPanel.h"
#include "shard/TextureDrawCall.h"
#include "result/WhisperEffect.h"
#include "ui/UiSpriteApi.h"

extern "C" {
PartyMember* partyPanelGetMember(s32 index);
void efctSetSpeed(f32 speed);
}

/* Starts the panel's main effect and the three member effects at (x, y); each member effect runs at
 * the member's own speed scaled by `speed`. */
static __inline void startPanelEffects(u32 x, u32 y, f32 speed)
{
    efctSetSpeed(speed);
    texDrawTableEntryAtStoredOrigin(2, 0x11, 0xB5, x, y, 0xC9);
    for (s32 index = 0; index < 3; ++index) {
        PartyMember* member = partyPanelGetMember(index + 13);
        if (member != NULL) {
            efctSetSpeed(vec2GetSpeed((const UiSpriteState *)member) * speed);
        }
        texDrawTableEntryAtStoredOrigin(2, 0x11, index + 0xB8, x, y, 0xCE);
        efctSetSpeed(speed);
    }
}

// Apply the panel effect speed to its main effect and three member effects.
extern "C" void FUN_003f3d90(void* context, u32 x, u32 y, s32 enabled, f32 speed)
{
    if (enabled == 0) {
        return;
    }
    u32 flag = partyPanelGetFlag();
    if (flag == 1 || flag == 4 || flag == 12 || flag == 15 || flag == 17) {
        startPanelEffects(x, y, speed);
    }
}
