#include "common.h"

extern "C" {

typedef struct Record0015a1b4 {
    u8 unk00[0x48];
} Record0015a1b4;

typedef struct Owner0015a1b4 {
    u8 unk00[0x4a0];
    Record0015a1b4 record;             /* 0x4A0 */
} Owner0015a1b4;

void FUN_0015a1bc(Record0015a1b4 *record, u32 id);

/* Passes the record at the object's +0x4A0 on to FUN_0015a1bc, the function that follows it. */
void FUN_0015a1b4(Owner0015a1b4 *owner, u32 id)
{
    FUN_0015a1bc(&owner->record, id);
}

} /* extern "C" */
