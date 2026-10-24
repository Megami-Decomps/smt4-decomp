#include "classes/Obj557e3c.h"

extern "C" void sysMemClear(void *memory, u32 size);

Obj557e3c::Obj557e3c()
{
    unk05 = 0xff;
    unk06 = 1;
    unk13 = 0;
    unk14 = 0;
    unk15 = 0;
    unk18 = 0;
    unk1c = 0;
    unk20 = 0;
    unk24 = 0;
    unk38 = 0;
    unk3c = 0;
    unk40 = 0;
    unk54 = 0;
    unk58 = 0;
    unk5c = 0;
    unk60 = 0;
    unk64 = 0;
    for (s32 i = 0; i < 5; i++) {
        sysMemClear(slots[i], 0x80);
        slotUsed[i] = 0;
    }
    unk2f4 = 0;
    unk308 = 0;
    unk30c = 0;
    unk2f8 = 0;
}
