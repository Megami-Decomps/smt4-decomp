#include "common.h"

extern "C" {

typedef struct SizeRecord {
    u8 unk00[0xe];
} SizeRecord;

typedef struct SizeOwner00128650 {
    u8 unk00[0xc];
    SizeRecord record;             /* 0x0C */
} SizeOwner00128650;

void FUN_00128658(SizeRecord *record, int width, int height);

/* Passes the record at the object's +0xC on to FUN_00128658, the function that follows it. */
void FUN_00128650(SizeOwner00128650 *owner, int width, int height)
{
    FUN_00128658(&owner->record, width, height);
}

} /* extern "C" */
