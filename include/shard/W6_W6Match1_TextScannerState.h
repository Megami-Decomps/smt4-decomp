#ifndef SHARD_W6_W6MATCH1_TEXTSCANNERSTATE_H
#define SHARD_W6_W6MATCH1_TEXTSCANNERSTATE_H

#include "common.h"

// Recovered layout; constructor/vtable symbol migration is still required for the real class.
struct TextScannerState {
    const u32* vtable; // 0x00
    u32 unk04;        // 0x04
    u32 unk08;        // 0x08
    u32 unk0c;        // 0x0c
    u32 unk10;        // 0x10
    u8 unk14;         // 0x14
    u8 unk15[3];      // 0x15
    u8 unk18;         // 0x18
    u8 unk19;         // 0x19
    u8 unk1a;         // 0x1a
    u8 unk1b;         // 0x1b
    u32 unk1c;        // 0x1c
    u32 unk20;        // 0x20
    u32 unk24;        // 0x24
    u32 unk28;        // 0x28
    u32 unk2c;        // 0x2c
    u8 enabled;       // 0x30
};

#endif
