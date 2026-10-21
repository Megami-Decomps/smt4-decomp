/* NON_MATCHING: compiler changes the register allocation and store/frame scheduling shown by retail. */
#include "common.h"
extern "C" {
struct Value { u8 unk00[0x18]; void *first; void *second; };
struct Owner { u8 unk00[0x78]; u32 option; };
Value *FUN_003054c0(Owner *owner);
void FUN_002ee50c(void *value, u32 option);
/* Resolves the selected child and applies its owner's option. */
void *FUN_003055cc(Owner *owner) {
    Value *value = FUN_003054c0(owner);
    if (value == NULL) return NULL;
    void *child = value->second;
    if (child != NULL) FUN_002ee50c(child, owner->option);
    return child;
}
}
