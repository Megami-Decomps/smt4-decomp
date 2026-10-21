#include "shard/W5_W5Match1_RecordKeys.h"

struct MapResourceRequestEntry {
    /* 0x00 */ AsyncRequestResult request;
    /* 0x0C */ u8 blocked;
    /* 0x0D */ u8 unk0d[3];
};

extern "C" {
extern MapResourceRequestEntry g_fileSlots[67];
void mapIfStoreRequestResult(u32 result, AsyncRequestResult* request, u32 detail);
void FUN_002b6480(u32 resource, u32* output, s32 flags,
                 void (*callback)(u32, AsyncRequestResult*, u32), AsyncRequestResult* request);

// Accept an existing map resource or start its asynchronous request when permitted.
u32 mapIfRequestResource(u32 index)
{
    if (index >= 67) {
        return 0;
    }
    MapResourceRequestEntry* entry = &g_fileSlots[index];
    if (entry->request.result != 0) {
        return 1;
    }
    if (entry->blocked != 0) {
        return 0;
    }
    FUN_002b6480(entry->request.state, &entry->request.result, 0,
                 mapIfStoreRequestResult, &entry->request);
    return 1;
}
}
