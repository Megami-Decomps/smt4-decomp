/* NON_MATCHING: paired packet stores use r0 as their address instead of retail r2. */
#include "shard/W6_W6Match5_RecordCallParameters.h"
#include "shard/W6_W6Match3_ExtendedRecordCall.h"

extern "C" void FUN_00180280(u32 table, s32 index, RecordCallParameters* parameters);

extern "C" void texTableRecordCallExtended(u32 flags, u32 table, s32 index, u32 second, u32 third,
                             u32 firstExtra, u32 secondExtra, u32 fourth)
{
    RecordCallParameters parameters;
    parameters.first = flags | 0x8000;
    parameters.second = second;
    parameters.third = third;
    parameters.fourth = fourth;
    parameters.reserved[0] = 0;
    parameters.reserved[1] = firstExtra;
    parameters.reserved[2] = secondExtra;
    parameters.firstFlag = 1;
    parameters.secondFlag = 1;
    FUN_00180280(table, index, &parameters);
}
