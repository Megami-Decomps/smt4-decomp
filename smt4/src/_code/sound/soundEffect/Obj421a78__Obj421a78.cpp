/* NON_MATCHING: the cleared tables now unroll and interleave as in retail; remaining: the member-initialised `last` record is stored right after the vtable (retail schedules it between the position loads), the position is copied with ldr/ldrd + str/strd, and the 0x100/0x104 words are one stm. */
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
    resource = 0;
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
    slotCount = 4;
    slotsDirty = 0;
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
