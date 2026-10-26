/* NON_MATCHING: the two readiness words are now read before the override test and FUN_00156994 takes its real (model, matrix, dt) arguments, as in retail; retail still copies the manager into a second register (mov r5,r6) and reads its animation set through the original register. */
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

// Applies every model's weight to the manager's animation set.
static __inline void applyModelWeights(ModelManager *self)
{
    FUN_00158038(self);
    if ((self->flags & 2) == 0) {
        u32 ready = self->unk10;
        u32 started = self->unk04;
        ModelAnimationSet *active;
        ModelOverride *override = DAT_0056fcb8;
        if (override != NULL && (override->flags & 1) && (override->flags & 2)) {
            active = &override->embedded;
        } else {
            active = self->animations;
        }
        if (ready != 0 && started != 0) {
            ModelEntry **entry;
            ModelEntry **end;
            if (active != NULL) {
                entry = self->begin;
                end = self->end;
            }
            if (active != NULL && entry != end) {
                ModelAnimationSet *animations = self->animations;
                if (animations != NULL) {
                    ModelAnimationSet *base = animations + 1;
                    do {
                        FUN_00156994(*entry, base, (*entry)->weight);
                        entry++;
                    } while (entry != end);
                }
            }
        }
    }
}

// The model calculation process.
u32 FUN_00145f94(void)
{
    ModelManager *manager = g_handleRegistry;
    applyModelWeights(manager);
    return 0;
}

}
