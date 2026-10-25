#ifndef SHARD_W6_W6MATCH6_CECMESSAGEBOX_H
#define SHARD_W6_W6MATCH6_CECMESSAGEBOX_H

#include "AsdSDK/Source/Net/Cec/AsdCec.h"

struct CecCalendarDate {
    u32 words[3];
};

struct CecMessageBoxInfo {
    u8 unk00[8];
    u32 tag; // 0x08
    u8 unk0c[0x28];
    CecCalendarDate openedAt; // 0x34
    u8 infoA; // 0x40
    u8 infoB; // 0x41
    u8 unk42[0x1e];
};

struct CecMessageIndexHeader {
    u16 signature; // 0x00 (0x6262 when valid)
    u8 unk02[2];
    u32 size; // 0x04: bytes of the index data
    u8 unk08[0xc];
    u32 count; // 0x14
    u8 unk18[8];
};

struct CecMessageIndex {
    CecMessageIndexHeader header;
    AsdCecMessageId ids[33]; // 0x20
    u32 capacity; // 0x1ac
};

// Opening-time view of the existing message-box object; its canonical layout is unchanged.
struct CecMessageBoxOpenView {
    u8 unk000[4];
    u32 id; // 0x004
    u8 unk008[2];
    u8 flags0a;
    u8 flags0b;
    u8 unk00c[0x190];
    CecMessageBoxInfo info; // 0x19c
    CecMessageIndex inbox; // 0x1fc
    CecMessageIndex outbox; // 0x3ac
};

struct CecModuleFlags {
    u8 open;
    u8 started;
};

extern "C" s32 asdCecMessageBoxOpen(AsdCecMessageBox* box, u32 id, u32 expectedTag);

#endif
