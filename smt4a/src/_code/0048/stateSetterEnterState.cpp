/* NON_MATCHING: retail preserves three additional region-store/base-pointer moves; state argument scheduling differs. */
#include "common.h"
#include <stddef.h>

extern "C" {
void ifTouchRegionRemove();
void sysPlaySe(s32 sound);
void __aeabi_memset4(void *destination, u32 size, u32 value);
void scrScriptProcessStartEntry(void *process, s32 entry);
void obj04Finish();
u16 FUN_001643b4(u32 group, s32 sprite);

/* Rebuild touch regions on activation and finish the transition on either exit state. */
void stateSetterEnterState(void *object, s32 nextState)
{
    // This object's touch table extends beyond the small shared StateSetter prefix.
    struct EntryView {
        u8 unk00;
        u8 state;
        u8 unk02[0xa];
        u32 timer;
        u8 unk10[0x25c];
        void *process; // 0x26c
        u8 active;
        u8 unk271[0x1c7];
        u16 regions[0x92]; // 0x438
        s16 regionCount; // 0x55c
        u16 sound;
    };
    typedef char EntryViewLayout[offsetof(EntryView, regions) == 0x438 &&
        offsetof(EntryView, regionCount) == 0x55c && sizeof(EntryView) == 0x560 ? 1 : -1];
    EntryView *entry = static_cast<EntryView *>(object);
    entry->timer = 0;
    u8 previousState = entry->state;
    entry->state = nextState;
    if (nextState == 2) {
        if (entry->regionCount > 0) {
            for (s32 i = 0; i < entry->regionCount; ++i) {
                ifTouchRegionRemove();
            }
            __aeabi_memset4(entry->regions, sizeof(entry->regions), 0xffffffff);
            entry->regionCount = 0;
        }
        for (s32 i = 0; i < 90; ++i) {
            entry->regions[i + 3] = FUN_001643b4(0x23, i + 0x56);
            ++entry->regionCount;
        }
        for (s32 i = 0; i < 4; ++i) {
            entry->regions[i + 139] = FUN_001643b4(0x23, i + 0xc6);
            ++entry->regionCount;
        }
        if (previousState != 4 && previousState != 5) {
            sysPlaySe(entry->sound);
        }
        scrScriptProcessStartEntry(entry->process, 0);
    }
    if (nextState == 4 || nextState == 5) {
        obj04Finish();
        entry->active = 0;
    }
}
}
