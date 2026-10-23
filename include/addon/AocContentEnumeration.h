#ifndef ADDON_AOCCONTENTENUMERATION_H
#define ADDON_AOCCONTENTENUMERATION_H
#include "addon/AocHandleJob.h"
#include <stddef.h>

struct AocContentRecord {
    u32 words[6];
};
struct AocEnumerationResult {
    s32 count;
    u32 detail;
};
struct AocContentEnumeration {
    u8 unk00[8];
    u32 parameters[2]; // 0x08
    AocContentRecord entries[32]; // 0x10
    s32 count; // 0x310
    s32 flaggedCount; // 0x314
};
typedef char AocContentEnumerationOffsets[
    sizeof(AocContentRecord) == 0x18 &&
    sizeof(AocEnumerationResult) == 8 &&
    offsetof(AocContentEnumeration, entries) == 0x10 &&
    offsetof(AocContentEnumeration, count) == 0x310 &&
    offsetof(AocContentEnumeration, flaggedCount) == 0x314 &&
    sizeof(AocContentEnumeration) == 0x318 ? 1 : -1];
#endif
