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

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00309fcc(u32 a, u32 b);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 *libcLocaleGetTables(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void nn_math_ARMv6_MTX34CopyAsm(unsigned int *param_1,unsigned int *param_2);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_001386b4(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

bool FUN_001387c0(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00221b70(int index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void efctSetSpeed(float speed);

#ifdef __cplusplus
}
#endif

#endif
