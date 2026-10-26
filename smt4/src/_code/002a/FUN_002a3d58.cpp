/* NON_MATCHING: the (-1, 0x80) pair is stored with stm (retail strd r0,r1) because the colour pointer sits in r0 instead of r2; the VFP colour copy matches now */
#include "common.h"
#include <string.h>
#include "AsdSDK/AsdMemUtil.h"

struct Float4LocalView {
    f32 v[4];
};

struct PolyDefaultsLocalView {
    Float4LocalView unk00; // 0x00
    Float4LocalView unk10; // 0x10
    Float4LocalView unk20; // 0x20
    u8 unk30[0x10];        // 0x30
    Float4LocalView unk40; // 0x40
    Float4LocalView unk50; // 0x50
    f32 unk60;            // 0x60
    s32 unk64;            // 0x64
    u32 unk68;            // 0x68
    u8 unk6C[8];          // 0x6C
    f32 unk74;            // 0x74
    u8 unk78[8];          // 0x78
};

extern "C" {
extern Float4LocalView g_polyDefaultColor;

// Clear the record and install its default vectors, color, and scalar values.
void FUN_002a3d58(PolyDefaultsLocalView *record)
{
    memClear(record, 0x80);

    memset(&record->unk00, 0, sizeof(record->unk00));
    record->unk00.v[3] = 1.0f;

    memset(&record->unk10, 0, sizeof(record->unk10));
    record->unk10.v[3] = 1.0f;

    memset(&record->unk40, 0, sizeof(record->unk40));
    record->unk40.v[3] = 1.0f;
    record->unk40.v[1] = 5.0f;

    memset(&record->unk50, 0, sizeof(record->unk50));
    record->unk50.v[3] = 1.0f;

    record->unk60 = 1.0f;
    record->unk74 = 1.0f;
    record->unk20 = g_polyDefaultColor;
    record->unk64 = -1;
    record->unk68 = 0x80;
}
}
