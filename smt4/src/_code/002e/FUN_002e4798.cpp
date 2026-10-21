#include "common.h"
namespace { struct Record { u8 padding[0x50]; u16 value; u8 reserved[0x11]; s8 secondary, priority; }; }
extern "C" {
Record *dataTable08Sub2GetRecord(u32 id);
s32 FUN_002e4798(const u16 *firstId, const u16 *secondId)
{
    Record *first = dataTable08Sub2GetRecord(*firstId);
    Record *second = dataTable08Sub2GetRecord(*secondId);
    s32 difference = first->priority - second->priority;
    if (difference == 0) { difference = second->value - first->value; }
    return difference;
}
}
