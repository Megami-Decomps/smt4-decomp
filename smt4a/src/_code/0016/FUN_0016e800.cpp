/* Records a failed check (a key and the address it was detected at; `failed` is the caller's failure bit, unused here) in the global fault record, then runs the fault handler. */
#include "common.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "code/Code0016_Smt4a.h"

extern "C" {
struct FaultRecord {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 code;
    /* 0x04 */ u32 key;
    /* 0x08 */ u32 address;
};
extern FaultRecord DAT_0062d200;
void FUN_00189a80(FaultRecord *record);

void FUN_0016e800(s32 key, u32 address, u32 failed)
{
    FaultRecord *record = &DAT_0062d200;
    record->unk01 = 0;
    record->code = 0xEDAC;
    record->unk00 = 0;
    record->address = address;
    record->key = key;
    FUN_00189a80(record);
}
}
