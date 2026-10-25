/* NON_MATCHING: the bit-1 test now keeps retail's `and` + `lsrs` form (named flag local); retail returns before saving r4 when the count is not positive and lays the nested loops out differently. */
#include "common.h"

struct SoundStatusNodeView {
    u8 unk00[0x70];              // 0x00
    SoundStatusNodeView* next;   // 0x70
    u8 unk74[0x1C];              // 0x74
    u32 unk90;                  // 0x90
};

struct SoundStatusView {
    SoundStatusNodeView* head;   // 0x00
    s32 count;                  // 0x04
};

extern "C" {
extern SoundStatusView g_asdSoundStatus;

// Returns whether any indexed sound-status node has bit 1 set at offset 0x90.
u32 FUN_002bcb1c(void)
{
    const s32 count = g_asdSoundStatus.count;
    if (count <= 0) {
        return 0;
    }

    SoundStatusNodeView* const head = g_asdSoundStatus.head;
    for (s32 index = 0; index < count; ++index) {
        if (index < 0 || index >= count) {
            continue;
        }

        SoundStatusNodeView* node = head;
        for (s32 step = 0; step < index; ++step) {
            node = node->next;
        }

        if (node != 0) {
            u32 flag = (node->unk90 & 2u) >> 1;
            if (flag != 0) {
                return 1;
            }
        }
    }
    return 0;
}
}
