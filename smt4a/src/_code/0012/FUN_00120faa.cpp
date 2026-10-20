#include "common.h"

extern "C" {

void FUN_002e9538(u8 *member, u32 value);
u32 FUN_002ea93c(u32 value);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 member10[1];
} MemberHolder;

/* Converts `value` with FUN_002ea93c and passes it to FUN_002e9538 together with the member at 0x10. */
void FUN_00120faa(MemberHolder *object, u32 value)
{
    u32 converted = FUN_002ea93c(value);
    FUN_002e9538(object->member10, converted);
}

} /* extern "C" */
