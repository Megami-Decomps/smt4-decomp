/* NON_MATCHING: retail moves key to r2 and uses r0 as the record base with separate stores for key/address; armcc builds the base in r2 and pairs them into strd */
/* Records a failed check (a key and the address it was detected at) in the global fault record, then runs the fault handler. */
#include "common.h"

extern "C" {
struct FaultRecord {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 code;
    /* 0x04 */ u32 key;
    /* 0x08 */ u32 address;
};
extern FaultRecord DAT_0062d200;
void FUN_00189a80(void);

void FUN_0016e800(u32 key, u32 address)
{
    DAT_0062d200.unk01 = 0;
    DAT_0062d200.code = 0xEDAC;
    DAT_0062d200.unk00 = 0;
    DAT_0062d200.address = address;
    DAT_0062d200.key = key;
    FUN_00189a80();
}
}
