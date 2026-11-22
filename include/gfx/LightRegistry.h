#ifndef GFX_LIGHT_REGISTRY_H
#define GFX_LIGHT_REGISTRY_H
#include "common.h"
#include <stddef.h>
#include <algorithm>

struct LightRegistry;
struct LightRegistration {
    u8 unk00[0x0C]; // 0x00
    LightRegistry* registry; // 0x0C
};
extern "C" LightRegistration** _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_(
    LightRegistration**, LightRegistration**, LightRegistration**, LightRegistration* const*);
/* Rogue Wave's std::remove over the registry's pointer array: find the first match, then compact the
 * rest with the out-of-line remove_copy. */
static __inline LightRegistration **lightRegistryRemove(LightRegistration **first, LightRegistration **last,
                                                        LightRegistration *const &value)
{
    first = std::find(first, last, value);
    LightRegistration **next = first;
    return first == last ? first : _ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_(++next, last, first, &value);
}
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
        LightRegistration** newEnd = lightRegistryRemove(begin, end, light);
        bool removed = newEnd != end;
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
