/* NON_MATCHING: Inlined group checks hoist group pointers and preserve an extra register instead of rebasing each snapshot. */
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
    BattlePresentationResource primary[4];
    BattlePresentationResource secondary[3][4];
    u8 unk281C[0xB8C];
    Obj420794 *filter;
};
typedef char BattlePresentationResourceOffsetsCheck[sizeof(BattlePresentationResource) == 0x8C &&
    offsetof(BattlePresentationResource, flags) == 0x88 &&
    offsetof(BattlePresentationReadinessWork, filter) == 0x33A8 ? 1 : -1];
extern "C" void *rt_memcpy_w(void *output, const void *input, u32 bytes);

static __inline bool battlePresentationGroupIsReady(const BattlePresentationResource *resources)
{
    for (s32 index = 0; index < 4; ++index) {
        BattlePresentationResource snapshot;
        rt_memcpy_w(&snapshot, &resources[index], sizeof(snapshot));
        if ((snapshot.flags & 1) != 0 && snapshot.resource == NULL) {
            return false;
        }
    }
    return true;
}

/* Checks enabled presentation resource groups and the optional screen filter before allowing playback. */
extern "C" u32 FUN_004f95cc(const BattlePresentationReadinessWork *work)
{
    if (work->primaryEnabled != 0 && !battlePresentationGroupIsReady(work->primary)) {
        return 0;
    }
    s32 secondaryEnabled = work->secondaryEnabled;
    if (secondaryEnabled != 0 && !battlePresentationGroupIsReady(work->secondary[0])) {
        return 0;
    }
    if (secondaryEnabled != 0 && !battlePresentationGroupIsReady(work->secondary[1])) {
        return 0;
    }
    if (secondaryEnabled != 0 && !battlePresentationGroupIsReady(work->secondary[2])) {
        return 0;
    }
    if (work->filter != NULL && work->filter->isReady() == 0) {
        return 0;
    }
    return 1;
}
