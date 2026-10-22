#include "common.h"

extern "C" {

typedef struct StepObject {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ s8 state;          /* -1 = inactive */
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ u32 flags;         /* STEP_FINISHED, STEP_LOCKED */
} StepObject;

#define STEP_FINISHED 0x1
#define STEP_LOCKED 0x1000 /* no stepping */

void FUN_00220984(void);
s32 FUN_0039ad14(StepObject *object);
s32 FUN_0039b370(StepObject *object);
void FUN_0039c728(StepObject *object);
s32 flagBitIsSet(u32 bit);
s32 gameFlagIsSet(u32 flag);

/* Steps the object; when flag 0x400 and bit 118 are set it runs the state-specific extra first.
 * Marks it finished once the step reports done. */
void FUN_00399b44(StepObject *object)
{
    if (object->state == -1) {
        return;
    }
    u32 locked = (object->flags & STEP_LOCKED) >> 12;
    if (gameFlagIsSet(0x400) && flagBitIsSet(118) && object->state != 0) {
        FUN_0039c728(object);
    }
    if (locked) {
        return;
    }
    FUN_00220984();
    s32 done;
    if (object->state == 0) {
        if (!gameFlagIsSet(0x400) || !flagBitIsSet(118)) {
            return;
        }
        done = FUN_0039b370(object);
    } else {
        done = FUN_0039ad14(object);
    }
    if (done) {
        object->flags |= STEP_FINISHED;
    }
}

} /* extern "C" */
