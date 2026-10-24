/* NON_MATCHING: same stores and loops as retail; the build schedules the vtable store after the first byte/word stores (retail stores it right after the third word), keeps the channel count in a register (retail reloads it with ldrb) and prologue pushes r4. */
#include "classes/Obj421a58.h"

Obj421a58::Obj421a58()
    : unk04(0), unk08(0), unk0c(250), unk10(0.4f), unk14(0.5f)
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
