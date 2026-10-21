/* NON_MATCHING: retail uses a separate countdown and 0x900-relative halfword stores; direct indexed records compile differently. */
#include "common.h"

struct BankRecord {
    u16 values[4]; // 0x00
    u16 unk08;
};
struct RecordBank {
    u8 unk000[0x9d4];
    BankRecord records[133]; // 0x9d4
    u8 unkf06[0x16];
};

extern "C" {
// Clear the four value fields of every record in the selected bank.
void FUN_002569ac(RecordBank *banks, s32 bank)
{
    for (s32 index = 0; index < 133; ++index) {
        BankRecord *record = &banks[bank].records[index];
        record->values[0] = 0;
        record->values[1] = 0;
        record->values[2] = 0;
        record->values[3] = 0;
    }
}
}
