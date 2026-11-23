/* NON_MATCHING: register allocation only: retail keeps the kind in r0 (here r2) and clears the message with a predicated movlt. */
#include "ui/ElementCategory.h"

namespace {
struct ElementInfo {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 attribute; /* high byte: element kind */
};
}

extern "C" {

extern const char DAT_0052d3e8[];
const char *table01RecordLookupForContent(u16 messageId);

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
    message = 0;
    if (id >= 0) {
        if (kind == 9) {
            message = 0x29d;
        } else {
            message = dataTable10FindValue((u16)id);
        }
    }
    return table01RecordLookupForContent(message);
}

} /* extern "C" */
