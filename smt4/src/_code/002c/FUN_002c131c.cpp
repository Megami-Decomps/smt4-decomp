#include "common.h"

namespace {
struct ErrorWords {
    u32 result, context;
};
struct Error {
    u8 active, type;
    u16 tag;
    ErrorWords words;
};
}

extern "C" {
extern Error DAT_004d4200;
void FUN_002ad4f8(Error *error);
void FUN_002c131c(u32 result, u32 context)
{
    s32 severity = result >> 27;
    if (result & 0x80000000) {
        severity -= 32;
    }
    if (severity != 1 && severity != -7) {
        Error *error = &DAT_004d4200;
        error->type = 0;
        error->tag = 0xbca3;
        error->active = 0;
        ErrorWords words = {result, context};
        error->words = words;
        FUN_002ad4f8(error);
    }
}
}
