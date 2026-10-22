/* NON_MATCHING: Retail unrolls the three candidates and stores zero entries before excluding them from the count. */
#include "gamedata/Table00.h"
extern "C" {
u32 scrGetArg(u32);
Table00Record* dataTable00FindById(u16);
u32 randRange(u16);
void scrSetResult(s32);

u32 FUN_003802d4(void)
{
    Table00Record* record = dataTable00FindById((u16)scrGetArg(0));
    u32 candidates[3];
    s32 count = 0;
    for (u32 index = 0; index < 3; ++index) {
        u16 value = record->choices[index].value;
        if (value != 0x7B6 && value != 0) {
            candidates[count++] = value;
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
