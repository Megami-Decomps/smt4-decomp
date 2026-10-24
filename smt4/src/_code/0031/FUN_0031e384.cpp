/* NON_MATCHING: retail copies its constant direction tables onto the stack with integer ldm/stm in six pieces (mine uses vldmia pairs), reaches the work pointer and step counter through one base symbol (+4/+0x1c), and schedules the float window tests differently; the sequence logic is the same. */
#include "common.h"

namespace {
/* The work block the toggle flag lives in (only the flags byte at 0x24baf is used). */
struct CheatFlagsWork {
    /* 0x00000 */ u8 unk00000[0x24baf];
    /* 0x24baf */ u8 flags;              /* bit 1: the hidden mode */
};
}

extern "C" {
extern CheatFlagsWork *DAT_0043e2ac;
extern s32 DAT_0043e2c4;                 /* how many steps of the input sequence have been entered */
s32 FUN_002c15fc(u32 button);
s32 padIsButtonPressed(u32 button);
s32 padIsButtonRepeat(u32 button);
void FUN_0027f958(f32 *angle, u8 buffer[16], s32 stick);
s32 FUN_00281e34(void);
void FUN_002bf810(u32 sound);

/* Abandons the sequence when any button outside it is pressed or held. */
static s32 sequenceBroken(void)
{
    return padIsButtonRepeat(2) != 0 || padIsButtonRepeat(1) != 0 || padIsButtonRepeat(9) != 0 ||
           padIsButtonRepeat(10) != 0 || padIsButtonRepeat(0) != 0;
}

/* Watches for the hidden-mode input: with both shoulder buttons held, the stick is swept through twelve of
   the six 45-degree directions in order, then three buttons are pressed in turn; completing it toggles bit 1
   of the flags byte (the sweep runs the other way round while the bit is set) and plays a sound. Returns the
   flags byte as it was on entry. */
u8 FUN_0031e384(void)
{
    const f32 directions[6] = { 45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f };
    /* The direction expected at each of the twelve steps, for the normal and the reversed sweep. */
    const f32 forward[12] = { 270.0f, 225.0f, 180.0f, 135.0f, 90.0f, 45.0f,
                              270.0f, 225.0f, 180.0f, 135.0f, 90.0f, 45.0f };
    const f32 reverse[12] = { 45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f,
                              45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f };
    u8 flags = DAT_0043e2ac->flags;
    if (FUN_002c15fc(7) == 0) {
        DAT_0043e2c4 = 0;
        return flags;
    }
    if (FUN_002c15fc(8) == 0) {
        DAT_0043e2c4 = 0;
        return flags;
    }
    if (DAT_0043e2c4 < 12) {
        f32 angle;
        u8 buffer[16];
        FUN_0027f958(&angle, buffer, 0);
        FUN_00281e34();
        angle = angle * 57.295776f;
        if (angle < 0.0f) {
            angle = angle + 360.0f;
        }
        const f32 *sequence = (flags & 2) != 0 ? reverse : forward;
        f32 expected = sequence[DAT_0043e2c4];
        f32 held = sequence[DAT_0043e2c4 - 1];
        f32 found = -1.0f;
        for (s32 i = 0; i < 6; i++) {
            if (directions[i] - 10.0f <= angle && angle <= directions[i] + 10.0f) {
                found = directions[i];
                if (DAT_0043e2c4 >= 1 && found == held) {
                    found = -1.0f;
                }
                break;
            }
        }
        if (found < 0.0f) {
            return flags;
        }
        if (expected != found) {
            DAT_0043e2c4 = 0;
            return flags;
        }
        DAT_0043e2c4 = DAT_0043e2c4 + 1;
        return flags;
    }
    if (DAT_0043e2c4 == 12) {
        if (padIsButtonPressed(10) == 0) {
            if (sequenceBroken()) {
                DAT_0043e2c4 = 0;
                return flags;
            }
        } else {
            DAT_0043e2c4 = DAT_0043e2c4 + 1;
        }
    } else if (DAT_0043e2c4 == 13) {
        if (padIsButtonPressed(5) == 0) {
            if (sequenceBroken()) {
                DAT_0043e2c4 = 0;
                return flags;
            }
        } else {
            DAT_0043e2c4 = DAT_0043e2c4 + 1;
        }
    } else if (DAT_0043e2c4 == 14) {
        if (padIsButtonPressed(6) != 0) {
            DAT_0043e2c4 = DAT_0043e2c4 + 1;
        } else if (sequenceBroken()) {
            DAT_0043e2c4 = 0;
            return flags;
        }
    }
    if (DAT_0043e2c4 == 15) {
        u8 current = DAT_0043e2ac->flags;
        if ((flags & 2) == 0) {
            current = current | 2;
        } else {
            current = current & 0xfd;
        }
        DAT_0043e2ac->flags = current;
        FUN_002bf810(0x1000170);
        DAT_0043e2c4 = 0;
    }
    return flags;
}

} /* extern "C" */
