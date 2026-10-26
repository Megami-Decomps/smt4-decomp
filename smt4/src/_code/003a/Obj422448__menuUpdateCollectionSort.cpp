#include "shard/W6_W6Match5_EntryCollection.h"
#include "classes/Obj422448.h"
#include "shard/GameModeFlags.h"
#include "status/StatusCamera.h"

struct CollectionCounterWork {
    u8 unk00[0x14];
    s32 state;
    s32 timer;
    u8 unk1C[0x58C];
    EntryCollection collection;
};
typedef char CollectionCounterWorkOffset[offsetof(CollectionCounterWork, collection) == 0x5A8 ? 1 : -1];

extern "C" {
s32 useCounterIsFinished(void);
s32 useCounterGetCurrentValue(void);
void useCounterRelease(void);
void buttonHelpSetPreset(s32 preset);
void FUN_0022e0fc(EntryCollection* collection, s32 mode);

// Apply the saved ordering while the collection's counter menu remains active.
}

void Obj422448::menuUpdateCollectionSort()
{
    CollectionCounterWork* work = reinterpret_cast<CollectionCounterWork*>(this);
    if (useCounterIsFinished()) {
        useCounterRelease();
        buttonHelpSetPreset(0x3E);
        work->state = 3;
        work->timer = 0;
        return;
    }
    if (useCounterGetCurrentValue() == 0x4B || work->collection.count == 0) {
        return;
    }
    CollectionSortMode* setting =
        &reinterpret_cast<GameModeFlags*>(FUN_002a0d0c())->sortSettings.collection;
    s8 mode;
    switch (setting->order) {
    case 11: mode = 28; break;
    case 3: mode = 26; break;
    case 7: mode = 24; break;
    case 15: mode = 30; break;
    case 17: mode = 32; break;
    default:
        setting->order = 11;
        mode = 28;
        break;
    }
    if (setting->descending) {
        ++mode;
    }
    FUN_0022e0fc(&work->collection, mode);
}
