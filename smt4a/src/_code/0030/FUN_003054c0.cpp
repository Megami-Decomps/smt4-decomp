/* NON_MATCHING: compiler saves r4 for stack alignment; retail saves only lr. */
#include "common.h"
extern "C" {
struct Child { u8 unk00[0x10]; u32 value; };
Child *ownerChildValue(void *owner);
/* Returns the owner's child value, or zero if no child exists. */
u32 FUN_003054c0(void *owner) {
    Child *child = ownerChildValue(owner);
    return child != NULL ? child->value : 0;
}
}
