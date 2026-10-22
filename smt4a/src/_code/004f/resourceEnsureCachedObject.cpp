#include "common.h"

struct ResourceCacheRecord {
    /* 0x00 */ u32 source;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1c */ s32 id;
    /* 0x20 */ void *object;
    /* 0x24 */ u8 unk24[4];
};
struct ResourceCacheRecordSmall {
    /* 0x00 */ u32 source;
    /* 0x04 */ s32 id;
    /* 0x08 */ void *object;
    /* 0x0c */ u32 unk0c;
};
struct ResourceCacheWork {
    /* 0x0000 */ u8 unk0000[0x190];
    /* 0x0190 */ ResourceCacheRecord first[50];
    /* 0x0960 */ ResourceCacheRecordSmall second[109];
    /* 0x1030 */ u8 unk1030[0xf20];
    /* 0x1f50 */ void *context;
};

extern "C" {
void *FUN_0041aca8(void *context, u32 source);

void resourceEnsureCachedObject(ResourceCacheWork *work, s32 id)
{
    for (s32 index = 0; index < 50; ++index) {
        ResourceCacheRecord *record = &work->first[index];
        if (record->id == id) {
            if (!record->object) {
                record->object = FUN_0041aca8(work->context, record->source);
            }
            return;
        }
    }
    for (s32 index = 0; index < 109; ++index) {
        ResourceCacheRecordSmall *record = &work->second[index];
        if (record->id == id) {
            if (!record->object) {
                record->object = FUN_0041aca8(work->context, record->source);
            }
            return;
        }
    }
}
}
