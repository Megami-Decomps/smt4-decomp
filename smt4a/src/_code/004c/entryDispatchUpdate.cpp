#include "shard/W8Match1_EntryDispatch.h"
extern "C" {
u32 FUN_00163aa4(DispatchEntry*, f32);
u32 FUN_00167458(DispatchEntry*, u32);

// Uses the entry kind's appropriate update routine and default factor.
u32 entryDispatchUpdate(DispatchEntrySet* entries, s32 kind)
{
    u32 result = 0;
    switch (kind) {
    case 0:
    case 6:
        result = FUN_00167458(&entries->entries[kind], 0);
        break;
    case 4:
        result = FUN_00167458(&entries->entries[kind], 1);
        break;
    case 1:
    case 2:
    case 3:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        result = FUN_00163aa4(&entries->entries[kind], 1.0f);
        break;
    }
    return result;
}
}
