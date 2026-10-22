#include "common.h"

extern "C" {

/* Object with an optional effect record at 0x4c. */
typedef struct {
    u8 unk00[0x4c];
    void *effect;       /* 0x4c */
} Owner;

int effBehaviorRun(void *effect);
int FUN_002c74ac(Owner *owner, f32 scale);

/* If the owner has an effect record, runs effBehaviorRun on it and then FUN_002c74ac with scale 1.0. */
void effOwnerRunAtUnitScale(Owner *owner)
{
    if (owner->effect != NULL) {
        effBehaviorRun(owner->effect);
        FUN_002c74ac(owner, 1.0f);
    }
}

} /* extern "C" */
