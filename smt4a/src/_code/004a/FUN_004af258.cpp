/* NON_MATCHING: virtual readiness dispatch and counter clearing use different registers and stores; retail clears the four counters with stm. */
#include "common.h"
#include <string.h>

class ContainerSource {
public:
    virtual u32 vfunc00();
    virtual u8 getKind();
    virtual u32 vfunc08();
    virtual s32 isReady();
};
struct SourceContainer {
    u32 counters[4]; // 0x00
    u8 unk0010[0x1468];
    ContainerSource *source; // 0x1478
    u32 unk147c;
    u32 capacity; // 0x1480
    u32 flags; // 0x1484
    u8 unk1488[7];
    u8 active; // 0x148f
    u8 kind; // 0x1490
    u8 pending; // 0x1491
};
extern "C" void _ZN12MoLivePlayer5resetEv(SourceContainer *container);

// Attach a ready source and reset the container's counters and state.
extern "C" s32 FUN_004af258(SourceContainer *container, ContainerSource *source)
{
    if (source == NULL)
        return 64;
    _ZN12MoLivePlayer5resetEv(container);
    container->source = source;
    if (!source->isReady())
        return 65;
    container->kind = container->source->getKind();
    memset(container->counters, 0, sizeof(container->counters));
    container->capacity = 64;
    container->flags = 0x10000;
    container->active = 0;
    container->pending = 0;
    return 0;
}
