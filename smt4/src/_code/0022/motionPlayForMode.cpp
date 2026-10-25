#include "common.h"
#include "status/StatusCamera.h"

extern "C" {

/* The motion slot FUN_0022e0fc plays into; it is empty while `id` is 0. */
typedef struct MotionSlot {
    /* 0x00 */ u16 id;
} MotionSlot;

typedef struct MotionOwner {
    /* 0x000 */ u8 unk000[0x5A8];
    /* 0x5A8 */ MotionSlot motion;
} MotionOwner;

/* A 7-bit motion mode and an alternate-motion flag sharing one byte. */
typedef struct MotionMode {
    u8 mode : 7;
    u8 alternate : 1;
} MotionMode;

/* The state FUN_002a0d0c returns. */
typedef struct MotionModeState {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ MotionMode mode;
} MotionModeState;

void FUN_0022e0fc(MotionSlot *slot, s8 motion);

/* Plays the motion for the current mode (resetting an unknown mode to 1); the next motion id is
 * its alternate when `allowAlternate` is set and the state asks for it. */
void motionPlayForMode(MotionOwner *owner, s32 allowAlternate)
{
    MotionMode *mode;
    s8 motion;

    if (owner->motion.id == 0) {
        return;
    }
    mode = &reinterpret_cast<MotionModeState *>(FUN_002a0d0c())->mode;
    switch (mode->mode) {
    case 2:
        motion = 2;
        break;
    case 1:
        motion = 6;
        break;
    case 4:
        motion = 14;
        break;
    case 5:
        motion = 20;
        break;
    case 3:
        motion = 22;
        break;
    default:
        mode->mode = 1;
        motion = 6;
        break;
    }
    if (allowAlternate && mode->alternate) {
        motion++;
    }
    FUN_0022e0fc(&owner->motion, motion);
}

} /* extern "C" */
