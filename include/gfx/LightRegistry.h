#ifndef GFX_LIGHT_REGISTRY_H
#define GFX_LIGHT_REGISTRY_H
#include "common.h"
#include <stddef.h>

struct LightRegistry;
struct LightRegistration {
    u8 unk00[0x0C]; // 0x00
    LightRegistry* registry; // 0x0C
};
extern "C" LightRegistration** _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_(
    LightRegistration**, LightRegistration**, LightRegistration**, LightRegistration* const*);
struct LightRegistry {
    union {
        u8 unk00[0x18]; // 0x00
        struct {
            u8 unk00BeforeChildren[0x10];
            u8 childListPrefix[8]; // 0x10: list header preceding begin/end
        } children;
    };
    LightRegistration** begin; // 0x18
    LightRegistration** end; // 0x1C

    bool remove(LightRegistration* const& light)
    {
        LightRegistration** newEnd = begin;
        while (newEnd != end && *newEnd != light) {
            ++newEnd;
        }
        if (newEnd != end) {
            newEnd = _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_(newEnd + 1, end, newEnd, &light);
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
typedef char LightRegistryChildListOffsetCheck[
    offsetof(LightRegistry, children.childListPrefix) == 0x10 ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void sceneTraverserVisit(void *owner, void *visitor);
#ifdef __cplusplus
}
#endif

#endif
