/* Allocates a zeroed 0x1C-byte record holding two values and stores it in *record. Returns 1 on success, 0 when the
 * allocator is not set up or the allocation fails. */
#include "common.h"

extern "C" {
struct Allocator {
    /* 0x0 */ void *(*allocate)(u32 size);
    /* 0x4 */ void (*free)(void *ptr);
};

struct ValueRecord {
    /* 0x00 */ u32 unk00[5];
    /* 0x14 */ u32 first;
    /* 0x18 */ u32 second;
};

extern Allocator DAT_00589508;

s32 moCreateValueRecord(ValueRecord **record, u32 first, u32 second)
{
    if (DAT_00589508.allocate == NULL || DAT_00589508.free == NULL) {
        return 0;
    }
    ValueRecord *created = (ValueRecord *)DAT_00589508.allocate(sizeof(ValueRecord));
    if (created == NULL) {
        return 0;
    }
    created->unk00[0] = 0;
    created->unk00[1] = 0;
    created->unk00[2] = 0;
    created->unk00[3] = 0;
    created->unk00[4] = 0;
    created->first = first;
    created->second = second;
    *record = created;
    return 1;
}
}
