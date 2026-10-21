/* NON_MATCHING: compiler lowers severity with ASR and emits separate result/context stores instead of retail STRD. */
#include "common.h"

namespace { struct Error { u8 active, type; u16 tag; u32 result, context; }; }

extern "C" {
extern Error DAT_004d4200;
void FUN_002ad4f8(Error *error);
void FUN_002c131c(u32 result, u32 context)
{
    s32 severity = (s32)result >> 27;
    if (severity != 1 && severity != -7) {
        Error *error = &DAT_004d4200;
        error->active = 0;
        error->type = 0;
        error->tag = 0xbca3;
        error->result = result;
        error->context = context;
        FUN_002ad4f8(error);
    }
}
}
