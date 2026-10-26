/* Records a failed check (a key and the address it was detected at; `failed` is the caller's failure bit, unused here) in the global fault record, then runs the fault handler. */
#include "common.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
struct FaultRecord {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 code;
    /* 0x04 */ u32 key;
    /* 0x08 */ u32 address;
};
extern FaultRecord DAT_004d4200;
void FUN_002ad4f8(FaultRecord *record);

void FUN_002bbb2c(s32 key, u32 address, u32 failed)
{
    FaultRecord *record = &DAT_004d4200;
    record->unk01 = 0;
    record->code = 0xBCA3;
    record->unk00 = 0;
    record->address = address;
    record->key = key;
    FUN_002ad4f8(record);
}
}
