/* NON_MATCHING: unrolled predicated structure now matches retail; only the constant/value register pair (r3/r2) is swapped. */
#include "gamedata/Table00.h"
#include "script/ScriptArgs.h"
#include "shard/scrGetArg.h"
extern "C" {
Table00Record* dataTable00FindById(u16);
u32 randRange(u16);
void scrSetResult(s32);

u32 FUN_003802d4(void)
{
    Table00Record* record = dataTable00FindById((u16)scrGetArg(0));
    u32 candidates[3];
    s32 count = 0;
    for (s32 index = 0; index < 3; ++index) {
        s32 value = record->choices[index].value;
        if (value != 0x7B6) {
            candidates[count] = value;
        }
        if (value != 0x7B6 && value > 0) {
            count++;
        }
    }
    s32 result = -1;
    if (count > 0) {
        result = candidates[randRange((u16)(count - 1))];
    }
    scrSetResult(result);
    return 1;
}
}
