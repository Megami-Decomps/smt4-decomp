/* NON_MATCHING: only register numbering differs (retail keeps the usage record in r0/r2 where the build uses r1). */
#include "sys/AllocationTracking.h"

extern "C" {
extern AllocationTracking DAT_00465120;
u32 FUN_002b30fc(AllocationHeader *header);

AllocationHeader *FUN_001246cc(void *payload)
{
    AllocationHeader *header = reinterpret_cast<AllocationHeader **>(payload)[-1];
    AllocationUsage *usage = DAT_00465120.usage;
    --usage->count;
    usage->bytes -= header->size;
    if ((header->tag & 0xFF) < 8) {
        u32 category = FUN_002b30fc(header);
        usage = DAT_00465120.usage;
        usage->categoryBytes[category] -= header->size;
        category = FUN_002b30fc(header);
        usage = DAT_00465120.usage;
        usage->categoryPayloadBytes[category] =
            (usage->categoryPayloadBytes[category] -
             (header->size - header->alignment)) + sizeof(AllocationHeader);
    }
    AllocationLink *link = &header->link;
    if (!(link->previous)) {
        if (link->next) {
            DAT_00465120.usage->head = link->next;
            link->next->previous = NULL;
        } else {
            DAT_00465120.usage->tail = NULL;
            DAT_00465120.usage->head = NULL;
        }
    } else {
        if (!link->next) {
            DAT_00465120.usage->tail = link->previous;
            link->previous->next = NULL;
        } else {
            link->previous->next = link->next;
            link->next->previous = link->previous;
        }
    }
    if (DAT_00465120.usage->cursor == link) {
        DAT_00465120.usage->cursor = NULL;
    }
    header->tag = 0;
    return header;
}
}
