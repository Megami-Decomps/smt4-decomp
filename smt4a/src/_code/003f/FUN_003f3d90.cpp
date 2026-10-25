/* NON_MATCHING: ARMCC keeps x in r6 from entry instead of copying r4 to r6, and omits retail's nop before the member-speed call. */
#include "ui/PartyPanel.h"
#include "shard/TextureDrawCall.h"

extern "C" {
u32 partyPanelGetFlag(void);
PartyMember* partyPanelGetMember(s32 index);
void efctSetSpeed(f32 speed);
}

// Apply the panel effect speed to its main effect and three member effects.
extern "C" void FUN_003f3d90(void* context, u32 x, u32 y, s32 enabled, f32 speed)
{
    if (enabled == 0) {
        return;
    }
    u32 flag = partyPanelGetFlag();
    if (flag == 1 || flag == 4 || flag == 12 || flag == 15 || flag == 17) {
        efctSetSpeed(speed);
        FUN_001835b4(2, 0x11, 0xB5, x, y, 0xC9);
        for (s32 index = 0; index < 3; ++index) {
            PartyMember* member = partyPanelGetMember(index + 13);
            if (member != NULL) {
                efctSetSpeed(member->effectSpeed * speed);
            }
            FUN_001835b4(2, 0x11, index + 0xB8, x, y, 0xCE);
            efctSetSpeed(speed);
        }
    }
}
