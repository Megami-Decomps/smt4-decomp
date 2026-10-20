#include "common.h"

extern "C" {

/* Object with an optional effect record at 0x4c. */
typedef struct {
    u8 unk00[0x4c];
    void *effect;       /* 0x4c */
} Owner;

int effBehaviorRun(void *effect);
int FUN_0032246c(Owner *owner, f32 scale);

/* If the owner has an effect record, runs effBehaviorRun on it and then FUN_0032246c with scale 1.0. */
void FUN_002720a4(Owner *owner)
{
    if (owner->effect != NULL) {
        effBehaviorRun(owner->effect);
        FUN_0032246c(owner, 1.0f);
    }
}

} /* extern "C" */
