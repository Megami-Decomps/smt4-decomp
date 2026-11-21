/* NON_MATCHING: written as smt4's Obj421a78 constructor (scalars in the initializer list, tables in the body); remaining: retail stores 0x0C-0x14 with one stm and pairs 0x100/0x104, where armcc pairs 0x0C/0x10 and 0x104/0x108, and copies the position with ldr/ldrd. */
#include "classes/Obj55be80.h"

extern "C" const Obj55be80Vec3 DAT_006306ec;

Obj55be80::Obj55be80()
    : unk0C(0x3C), unk10(4000), unk14(100), unk18(0.5f), unk1C(0.4f), source(&DAT_006306ec),
      unk24(0.6f), unk28(0.4f), unk2C(0), unk2D(0), resource(0), position(*source),
      unk100(0xBE0), unk104(0xE60), unk108(0x820), slotCount(4), slotsDirty(0)
{
    unkA4[0] = 0xA0;
    unkA4[1] = 0;
    unkA4[2] = 0xA0;
    unkA4[3] = 0;
    unkA4[4] = 0xA0;
    unkA4[5] = 0xA0;
    unkA4[6] = 0;
    unkA4[7] = 0;
    unkA4[8] = 0;
    unkA4[9] = 0;
    unkA4[10] = 0xA0;
    unkA4[11] = 0;
    unkA4[12] = 0;
    for (u32 i = 0; i < 4; i++) {
        tableA[i] = 0;
        tableB[i] = 0;
        pairs[i].first = 0;
        pairs[i].second = 0;
        tableC[i] = 0;
        tableD[i] = 0;
        tableE[i] = 0;
    }
}
