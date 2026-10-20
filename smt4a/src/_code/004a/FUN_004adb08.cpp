/* NON_MATCHING: loop shape/registers: retail guards the iteration with begin != end (the header node loaded once) and branches around the marker store; built jumps into a bottom test and predicates the store. */
#include <map>
#include "common.h"

typedef struct Marker {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 ready;
} Marker;

typedef struct Target {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ Marker *marker;
} Target;

typedef struct Binding {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Target *target;
} Binding;

typedef struct BindingOwner {
    /* 0x0000 */ u8 unk0000[0x1420];
    /* 0x1420 */ std::map<unsigned long long, Binding *> bindings;
} BindingOwner;

extern "C" {

extern s32 FUN_004ac83c(Target *target);

/* Checks every binding's target; marks the ready ones and returns 0 when any is not ready. */
u32 FUN_004adb08(BindingOwner *owner)
{
    u32 allReady = 1;
    std::map<unsigned long long, Binding *>::iterator it;

    for (it = owner->bindings.begin(); it != owner->bindings.end(); ++it) {
        Target *target = it->second->target;

        if (FUN_004ac83c(target) == 0) {
            allReady = 0;
        } else {
            target->marker->ready = 1;
        }
    }
    return allReady;
}

} /* extern "C" */
