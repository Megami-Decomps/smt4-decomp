/* NON_MATCHING: readable rewrite of a raw draft; retail moves the first argument to r3 and keeps the request pointer in r0 (no stm merge of the last two stores), the build keeps both arguments in place and merges them into one stm. */
#include "common.h"

struct SoundRequest {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 flag;
    /* 0x02 */ u16 magic;
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
};

static __inline void soundRequestSet(SoundRequest *request, u8 kind, u32 second, u32 first)
{
    request->flag = 0;
    request->kind = kind;
    request->magic = 0xBCA3;
    request->second = second;
    request->first = first;
}

extern "C" {
extern SoundRequest DAT_0062d200;
void FUN_00189a80(void);

// Fills the pending request record and kicks the worker.
void FUN_001a1204(u32 first, u8 kind, u32 second)
{
    soundRequestSet(&DAT_0062d200, kind, second, first);
    FUN_00189a80();
}
}
