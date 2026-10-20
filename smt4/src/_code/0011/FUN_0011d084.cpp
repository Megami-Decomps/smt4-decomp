#include "common.h"

extern "C" {

typedef struct Record0011d084 {
    u8 unk00[0x48];
} Record0011d084;

typedef struct Owner0011d084 {
    u8 unk00[0x4a0];
    Record0011d084 record;             /* 0x4A0 */
} Owner0011d084;

void FUN_0011d08c(Record0011d084 *record, u32 id);

/* Passes the record at the object's +0x4A0 on to FUN_0011d08c, the function that follows it. */
void FUN_0011d084(Owner0011d084 *owner, u32 id)
{
    FUN_0011d08c(&owner->record, id);
}

} /* extern "C" */
