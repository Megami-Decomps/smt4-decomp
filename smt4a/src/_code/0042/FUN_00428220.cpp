/* NON_MATCHING: retail computes `high` (orr r4) before loading the id and variation and places `sub sp` after the kind load; this build hoists the loads above the orr (id in r3). */
#include "nn/Result.h"
#include "sys/ProgramId.h"

extern "C" {

/* A program id in pieces: the unique id, its category kind, a variation byte and a 0/1 media selector. */
struct ProgramIdSpec {
    /* 0x00 */ u8 unk00[0x0c];
    /* 0x0c */ u32 uniqueId;
    /* 0x10 */ u8 kind;
    /* 0x11 */ u8 variation;
    /* 0x12 */ u8 media;
};

s32 FUN_001028b8(char *buffer, u32 size, const char *format, ...);
s32 FUN_00439a04(const char *string);

/* Formats the spec as a 16-digit hexadecimal program id and hands it to the service; returns the failure result or 0. */
s32 FUN_00428220(const ProgramIdSpec *spec)
{
    u32 category;
    switch (spec->kind) {
    case 0:
        category = 0x8c;
        break;
    case 1:
        category = 0xd;
        break;
    case 3:
        category = 0x10;
        break;
    case 4:
        category = 0x30;
        break;
    case 2:
        category = 0;
        break;
    default:
        category = 0;
        break;
    }
    u32 high = category | 0x40000;
    u32 low = spec->variation | ((spec->uniqueId & 0xfffff) << 8);
    s32 media = programMediaBits(spec->media) << 28;
    u64 programId = (u64)high << 32 | (u64)(low & 0x0fffffff) | (u64)media;
    char text[20];
    FUN_001028b8(text, 17, "%016llx", programId);
    s32 result = FUN_00439a04(text);
    if (!nnResultIsFailure(result)) {
        result = 0;
    }
    return result;
}

} /* extern "C" */
