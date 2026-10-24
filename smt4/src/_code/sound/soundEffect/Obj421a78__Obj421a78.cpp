/* NON_MATCHING: class and defaults recovered (the first two words, the six cleared records and the table values); armcc schedules the stores differently (retail interleaves the record zeroing across the body, copies the position with ldr/ldrd, and keeps 0x100/0x104 as one stm). */
#include "classes/Obj421a78.h"

extern "C" const Obj421a78Vec3 DAT_004d4668;

Obj421a78::Obj421a78()
{
    unk0C = 0x3C;
    unk10 = 4000;
    unk14 = 100;
    unk18 = 0.5f;
    unk1C = 0.4f;
    source = &DAT_004d4668;
    unk24 = 0.6f;
    unk28 = 0.4f;
    unk2C = 0;
    unk2D = 0;
    unk30 = 0;
    position.x = source->x;
    position.y = source->y;
    position.z = source->z;
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
    unk100 = 0xBE0;
    unk104 = 0xE60;
    unk108 = 0x820;
    unk10D = 4;
    unk10E = 0;
}
