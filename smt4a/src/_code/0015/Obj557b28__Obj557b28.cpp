/* NON_MATCHING: same stores; the scheduler orders the vtable store and the float constant loads differently (retail loads the six tuning floats together and writes them with one vstm right after the byte stores; the build interleaves them with the zero stores). */
#include "classes/Obj557b28.h"

Obj557b28::Obj557b28()
    : unk04(0)
{
    unk08 = 0;
    unk0c = 0;
    unk10 = 0;
    unk14 = 0;
    unk18 = 0;
    unk1c = 0;
    unk20 = 0;
    unk21 = 0;
    unk22 = 0;
    unk23 = 0x66;
    unk24 = 3.0f;
    unk28 = 20000.0f;
    unk2c = 0.659f;
    unk30 = 1.7f;
    unk34 = 1.6666666f;
    unk38 = 250.0f;
    unkAc = 0.0f;
    unkB0 = 0.0f;
    unkB4 = 0.0f;
    unkB8 = 0.0f;
    unkBc = 0.0f;
    unkC0 = 0.0f;
    unkC4 = 1;
}
