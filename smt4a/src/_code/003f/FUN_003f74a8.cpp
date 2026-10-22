/* NON_MATCHING: register allocation only: retail keeps the kind in r0 and the message group in r1 (swapped here). */
#include "common.h"

namespace {
struct ElementInfo {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 attribute; /* high byte: element kind */
};
}

extern "C" {

extern const char DAT_0052d3e8[];
u16 FUN_0019e52c(u16 id);
const char *FUN_00180114(u16 messageId);

// Message group id for an element kind, -1 when it has none.
static inline s32 elementMessageGroup(u32 kind)
{
    s32 id;

    switch (kind) {
    case 0:
        id = 0xae;
        break;
    case 1:
        id = 0xb2;
        break;
    case 2:
        id = 0xb0;
        break;
    case 3:
        id = 0xb1;
        break;
    case 4:
        id = 0xb3;
        break;
    case 5:
        id = 5;
        break;
    case 6:
        id = 0xba;
        break;
    case 7:
        id = 0xb9;
        break;
    case 8:
        id = 0xaf;
        break;
    case 9:
        id = 0xbb;
        break;
    default:
        id = -1;
        break;
    }
    return id;
}

/* Text naming the element kind of an entry (empty for kind 10). */
const char *FUN_003f74a8(void *owner, const ElementInfo *info)
{
    u32 kind;
    s32 id;
    u16 message;

    if ((info->attribute >> 8) == 10) {
        return DAT_0052d3e8;
    }
    kind = info->attribute >> 8;
    id = elementMessageGroup(kind);
    if (id < 0) {
        message = 0;
    } else if (kind == 9) {
        message = 0x29d;
    } else {
        message = FUN_0019e52c(id);
    }
    return FUN_00180114(message);
}

} /* extern "C" */
