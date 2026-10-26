/* NON_MATCHING: the three leading words now come from Obj421a58Base and the prologue matches; the build merges the base's word 2/3 stores into one stm (retail stores them singly) and keeps the channel count in a register (retail reloads it with ldrb). */
#include "classes/Obj421a58.h"

Obj421a58::Obj421a58()
    : unk10(0.4f), unk14(0.5f)
{
    unk18 = 0;
    unk1c = 0;
    unk20 = 0;
    unk48 = 0;
    unk4c = 0;
    unk50 = 0x10000;
    unk54 = 0;
    channelCount = 4;
    unk5e = 0;
    for (u32 i = 0; i < channelCount; i++) {
        channelA[i] = 0;
    }
    for (u32 i = 0; i < channelCount; i++) {
        channelB[i] = 0;
    }
}
