#include "common.h"

/* A model in the manager's list. */
struct ModelEntry {
    /* 0x000 */ u8 unk000[0x1fc];
    /* 0x1fc */ f32 weight;
};

struct ModelAnimationSet {
    /* 0x00 */ u8 unk00[0x38];
};

/* The model manager (the part its calculation process reads). */
struct ModelManager {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[4];
    /* 0x0c */ ModelAnimationSet *animations;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ ModelEntry **begin;
    /* 0x1c */ ModelEntry **end;
    /* 0x20 */ u8 unk20[0x14];
    /* 0x34 */ u32 flags;
};

/* The override model state: when both low flag bits are set its embedded record stands in for the
 * manager's animation set. */
struct ModelOverride {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ ModelAnimationSet embedded;
};

extern "C" {

extern ModelManager *g_handleRegistry;
extern ModelOverride *DAT_0056fcb8;

void FUN_00158038(ModelManager *manager);
void FUN_00156994(ModelEntry *model, ModelAnimationSet *outMatrix, f32 dt);

// The animation set in force: the override's while both its low flag bits are set, else the manager's
// (the same selection as FUN_00146314's activeParameters).
static __inline ModelAnimationSet *activeAnimations(ModelManager *self)
{
    ModelOverride *override = DAT_0056fcb8;
    if (override != NULL && (override->flags & 1) && (override->flags & 2)) {
        return &override->embedded;
    }
    return self->animations;
}

// Whether the manager has an animation set and models to weight this frame (an inlined body: retail
// copies the manager into its own register for it).
static __inline bool modelWeightsPending(ModelManager *self)
{
    FUN_00158038(self);
    if ((self->flags & 2) != 0) {
        return false;
    }
    u32 started = self->unk04;
    u32 ready = self->unk10;
    ModelAnimationSet *active = activeAnimations(self);
    if (ready == 0 || started == 0) {
        return false;
    }
    return active != NULL && self->begin != self->end;
}

// The model calculation process.
u32 FUN_00145f94(void)
{
    ModelManager *manager = g_handleRegistry;
    if (modelWeightsPending(manager)) {
        ModelAnimationSet *animations = manager->animations;
        if (animations != NULL) {
            ModelEntry **entry = manager->begin;
            ModelEntry **end = manager->end;
            ModelAnimationSet *base = animations + 1;
            do {
                FUN_00156994(*entry, base, (*entry)->weight);
                entry++;
            } while (entry != end);
        }
    }
    return 0;
}

}
