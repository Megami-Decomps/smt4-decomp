/* NON_MATCHING: loop shape and sub-block addressing now match retail; retail branches around the marker store (beq) where the build predicates it (ldrne/strbne). */
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

typedef struct BindingBlock {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ std::map<unsigned long long, Binding *> bindings;
} BindingBlock;

typedef struct BindingOwner {
    /* 0x0000 */ u8 unk0000[0x141C];
    /* 0x141C */ BindingBlock block;
} BindingOwner;

extern "C" {

extern s32 FUN_004ac83c(Target *target);

/* Checks every binding's target; marks the ready ones and returns 0 when any is not ready. */
u32 FUN_004adb08(BindingOwner *owner)
{
    BindingBlock *block = &owner->block;
    u32 allReady = 1;
    std::map<unsigned long long, Binding *>::iterator it;

    it = block->bindings.begin();
    if (it != block->bindings.end()) {
        do {
            Target *target = it->second->target;

            if (FUN_004ac83c(target) == 0) {
                allReady = 0;
            } else {
                target->marker->ready = 1;
            }
            ++it;
        } while (it != block->bindings.end());
    }
    return allReady;
}

} /* extern "C" */
