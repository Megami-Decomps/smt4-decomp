#include "classes/Obj420794.h"
#include <stddef.h>

struct BattlePresentationResource {
    u32 unk00;
    void *resource;
    u8 unk08[0x80];
    u8 flags;
    u8 unk89[3];
};
struct BattlePresentationReadinessWork {
    u8 unk0000[0x1F54];
    s32 secondaryEnabled;
    s32 primaryEnabled;
    BattlePresentationResource groups[4][4];   /* group 0 is the primary set */
    u8 unk281C[0xB8C];
    Obj420794 *filter;
};
typedef char BattlePresentationResourceOffsetsCheck[sizeof(BattlePresentationResource) == 0x8C &&
    offsetof(BattlePresentationResource, flags) == 0x88 && offsetof(BattlePresentationReadinessWork, groups) == 0x1F5C &&
    offsetof(BattlePresentationReadinessWork, filter) == 0x33A8 ? 1 : -1];
extern "C" void *__aeabi_memcpy4(void *output, const void *input, u32 bytes);

template <s32 group>
static __inline bool battlePresentationGroupIsReady(s32 enabled, const BattlePresentationReadinessWork *work)
{
    if (enabled != 0) {
        for (s32 index = 0; index < 4; ++index) {
            BattlePresentationResource snapshot;
            __aeabi_memcpy4(&snapshot, &work->groups[group][index], sizeof(snapshot));
            if ((snapshot.flags & 1) != 0 && snapshot.resource == NULL) {
                return false;
            }
        }
    }
    return true;
}

/* Checks enabled presentation resource groups and the optional screen filter before allowing playback. */
extern "C" u32 FUN_004f95cc(const BattlePresentationReadinessWork *work)
{
    if (!battlePresentationGroupIsReady<0>(work->primaryEnabled, work)) {
        return 0;
    }
    s32 secondaryEnabled = work->secondaryEnabled;
    if (!battlePresentationGroupIsReady<1>(secondaryEnabled, work)) {
        return 0;
    }
    if (!battlePresentationGroupIsReady<2>(secondaryEnabled, work)) {
        return 0;
    }
    if (!battlePresentationGroupIsReady<3>(secondaryEnabled, work)) {
        return 0;
    }
    if (work->filter != NULL && work->filter->isReady() == 0) {
        return 0;
    }
    return 1;
}
