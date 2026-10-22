#ifndef GFX_LIGHT_REGISTRY_H
#define GFX_LIGHT_REGISTRY_H
#include "common.h"
#include <stddef.h>

struct LightRegistry;
struct LightRegistration {
    u8 unk00[0x0C]; // 0x00
    LightRegistry* registry; // 0x0C
};
extern "C" LightRegistration** FUN_002b74cc(
    LightRegistration**, LightRegistration**, LightRegistration**, LightRegistration* const*);
struct LightRegistry {
    u8 unk00[0x18]; // 0x00
    LightRegistration** begin; // 0x18
    LightRegistration** end; // 0x1C

    bool remove(LightRegistration* const& light)
    {
        LightRegistration** newEnd = begin;
        while (newEnd != end && *newEnd != light) {
            ++newEnd;
        }
        if (newEnd != end) {
            newEnd = FUN_002b74cc(newEnd + 1, end, newEnd, &light);
        }
        bool removed = end != newEnd;
        end = newEnd;
        return removed;
    }
};
struct LightRegistrationSlots {
    LightRegistration** entries; // 0x00
};
typedef char LightRegistryLayoutCheck[sizeof(LightRegistry) == 0x20 &&
    offsetof(LightRegistry, begin) == 0x18 && offsetof(LightRegistry, end) == 0x1C &&
    sizeof(LightRegistration) == 0x10 && offsetof(LightRegistration, registry) == 0x0C ? 1 : -1];
#endif
