/* NON_MATCHING: stack arguments use VFP copying instead of retail integer block transfers, with different saved registers/frame size. */
#include "shard/W6_W6Match5_RecordCallParameters.h"

extern "C" void texTableRecordCall(u32, s32, RecordCallParameters *);

extern "C" void FUN_002ae9ec(u32 first, u32 table, s32 index, u32 second, u32 third, u32 fourth)
{
    RecordCallParameters parameters;
    for (s32 i = 0; i < 3; ++i)
        parameters.reserved[i] = 0;
    parameters.first = first;
    parameters.second = second;
    parameters.third = third;
    parameters.fourth = fourth;
    parameters.firstFlag = 1;
    parameters.secondFlag = 1;
    texTableRecordCall(table, index, &parameters);
}
