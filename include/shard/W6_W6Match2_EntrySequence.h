#ifndef SHARD_W6_W6MATCH2_ENTRY_SEQUENCE_H
#define SHARD_W6_W6MATCH2_ENTRY_SEQUENCE_H

#include "common.h"

struct EntrySequenceDescription {
    char name[16]; // 0x00
    u16 id;        // 0x10
};

struct EntrySequenceSource {
    u32 flags;    // 0x00
    u8 unk04[0x10]; // 0x04
    EntrySequenceDescription* description; // 0x14
};

struct EntrySequencePacket {
    u32 id;       // 0x00
    s32 argument; // 0x04
    char name[24]; // 0x08
};

extern "C" {
void libc_strcpy(unsigned int *param_1,unsigned int *param_2);
void asdSequenceRequest(s32 state, const void *arg, u32 size);
}

extern "C" {
bool FUN_0017fb54(void);
}

extern "C" {
void FUN_00220ffc(void);
}

#endif
