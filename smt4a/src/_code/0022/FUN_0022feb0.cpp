/* NON_MATCHING: Counter values and nonzero-index lists are reconstructed; list append/count updates and persistent pointers allocate different registers/frame slots. */
#include "gamedata/DataTable.h"

struct CounterListDefinition {
    /* 0x00 */ s16 counter;
    /* 0x02 */ u8 unk02[0x3e];
};
struct CounterSelectionList {
    /* 0x000 */ u32 count;
    /* 0x004 */ u32 values[50];
    /* 0x0CC */ u16 indices[50];
};
struct CounterSelectionWork {
    /* 0x000 */ u8 unk000[0x48c];
    /* 0x48C */ CounterSelectionList first;
    /* 0x5BC */ CounterSelectionList second;
};
extern "C" {
void sysMemClear(void *data, u32 size);
u32 gameCountersGetWord(u8 counter);
u32 countersGetB(u8 counter);
u32 FUN_002e50d4();
u32 gameDataGetTableValue();
}

/* Rebuild nonzero-counter lists, applying the two special counter interpretations. */
extern "C" void FUN_0022feb0(CounterSelectionWork *work)
{
    if (work == NULL) {
        return;
    }
    DataTableView<CounterListDefinition> definitions(0x37, 0);
    sysMemClear(&work->first, sizeof(work->first) + sizeof(work->second));
    for (s32 i = 0; i < static_cast<s32>(definitions.count); ++i) {
        DataTableView<CounterListDefinition> current(0x37, 0);
        const CounterListDefinition *definition = current.at(i);
        if (definition == NULL || definition->counter < 0) {
            continue;
        }
        if (definition->counter == 46) {
            u32 total = FUN_002e50d4();
            work->first.values[i] = total - countersGetB(46);
            work->second.values[i] = total;
        } else if (definition->counter == 44) {
            work->first.values[i] = gameDataGetTableValue();
            work->second.values[i] = gameDataGetTableValue();
        } else {
            work->first.values[i] = gameCountersGetWord(static_cast<u8>(definition->counter));
            work->second.values[i] = countersGetB(static_cast<u8>(definition->counter));
        }
        if (definition->counter == 23 || definition->counter == 32) {
            continue;
        }
        if (work->first.values[i] != 0) {
            work->first.indices[work->first.count++] = static_cast<u16>(i);
        }
        if (work->second.values[i] != 0) {
            work->second.indices[work->second.count++] = static_cast<u16>(i);
        }
    }
}
