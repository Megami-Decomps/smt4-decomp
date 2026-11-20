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
extern Error DAT_0062d200;
void FUN_00189a80(Error *error);

/* Records a fatal error when the result severity is neither 1 nor -7, then invokes the fatal handler. */
void errThrowFatal(u32 result, u32 context)
{
    s32 severity = result >> 27;
    if (result & 0x80000000) {
        severity -= 32;
    }
    if (severity != 1 && severity != -7) {
        Error *error = &DAT_0062d200;
        error->type = 0;
        error->tag = 0xedac;
        error->active = 0;
        ErrorWords words = {result, context};
        error->words = words;
        FUN_00189a80(error);
    }
}
}
