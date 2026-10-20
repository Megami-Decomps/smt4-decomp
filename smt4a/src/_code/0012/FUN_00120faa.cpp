#include "common.h"

extern "C" {

void onlineSockAddrCopy(u8 *member, u32 value);
u32 onlineUrlGetAddress(u32 value);

typedef struct MemberHolder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 member10[1];
} MemberHolder;

/* Converts `value` with onlineUrlGetAddress and passes it to onlineSockAddrCopy together with the member at 0x10. */
void FUN_00120faa(MemberHolder *object, u32 value)
{
    u32 converted = onlineUrlGetAddress(value);
    onlineSockAddrCopy(object->member10, converted);
}

} /* extern "C" */
