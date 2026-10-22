#include "common.h"

namespace {
struct MapTrapView {
    u32 unk00;          // 0x00
    u32 unk04;          // 0x04
    u32 unk08;          // 0x08
    u8 unk0C;           // 0x0C
    u8 unk0D[3];        // 0x0D
    u8 unk10;           // 0x10
    u8 unk11[3];        // 0x11
    f32 unk14;          // 0x14
    f32 unk18;          // 0x18
    f32 unk1C;          // 0x1C
    f32 unk20;          // 0x20
    u32 unk24;          // 0x24
    u8 unk28;           // 0x28
    u8 unk29;           // 0x29
    u8 unk2A[2];        // 0x2A
    u32 unk2C;          // 0x2C
    u32 unk30;          // 0x30
    u32 unk34;          // 0x34
    u32 unk38;          // 0x38
    u32 unk3C;          // 0x3C
    u8 unk40;           // 0x40
    u8 unk41[3];        // 0x41
    u32 unk44;          // 0x44
    u32 unk48;          // 0x48
    u32 unk4C;          // 0x4C
    f32 unk50;          // 0x50
    f32 unk54;          // 0x54
    f32 unk58;          // 0x58
    f32 unk5C;          // 0x5C
    u8 unk60;           // 0x60
    u8 unk61;           // 0x61
    u8 unk62[2];        // 0x62
    u32 unk64;          // 0x64
    u32 unk68;          // 0x68
    u8 unk6C;           // 0x6C
};
}

extern "C" {
extern u32 *g_mapTrap;

// Clear the map-trap state fields while preserving untouched bytes.
void mapTrapClearState(void)
{
    MapTrapView *trap = reinterpret_cast<MapTrapView *>(g_mapTrap);
    trap->unk00 = 0;
    trap->unk04 = 0;
    trap->unk08 = 0;
    trap->unk0C = 0;
    trap->unk38 = 0;
    trap->unk3C = 0;
    trap->unk40 = 0;
    trap->unk44 = 0;
    trap->unk48 = 0;
    trap->unk50 = 0.0f;
    trap->unk54 = 0.0f;
    trap->unk58 = 0.0f;
    trap->unk5C = 0.0f;
    trap->unk4C = 0;
    trap->unk60 = 0;
    trap->unk61 = 0;
    trap->unk64 = 0;
    trap->unk68 = 0;
    trap->unk6C = 0;
    trap->unk10 = 0;
    trap->unk14 = 0.0f;
    trap->unk18 = 0.0f;
    trap->unk1C = 0.0f;
    trap->unk20 = 0.0f;
    trap->unk24 = 0;
    trap->unk28 = 0;
    trap->unk2C = 0;
    trap->unk30 = 0;
    trap->unk34 = 0;
    trap->unk29 = 0;
}
}
