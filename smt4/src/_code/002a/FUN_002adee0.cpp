/* NON_MATCHING: compiler adds a shared explicit-zero return instead of retail's fallthrough return. */
#include "common.h"

namespace {
struct Part { u32 first; void *value; };
struct Owner { u32 first; u32 second; Part *part; };
}

extern "C" {
/* Computes or forwards the requested value. */
s32 FUN_002adee0(const Owner *owner)
{
    return owner != NULL && owner->part != NULL && owner->part->value != NULL;
}
}
