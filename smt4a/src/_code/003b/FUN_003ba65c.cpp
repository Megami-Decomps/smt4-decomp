/* NON_MATCHING: 305 lines. The three tables are now local arrays copied from one constant block (retail's DAT_00530f3c), atan2f takes the two stick values and the press steps are a switch, as in retail. Retail reaches the save pointer and the progress counter (0x57f6b8) from one g_gameDataBlocks base, so the counter is defined in GameData's file (a translation-unit question), and its frame holds 8 more bytes beside the stick values. */
#include "common.h"
#include <math.h>

#define SEQ_STICK_STEPS 12
#define SEQ_STEP_PRESS_A 12
#define SEQ_STEP_PRESS_B 13
#define SEQ_STEP_PRESS_C 14
#define SEQ_STEP_DONE 15
#define SEQ_SECTOR_TOLERANCE 10.0f
#define SEQ_SECTOR_COUNT 6
#define SEQ_RAD_TO_DEG 57.295776f
#define SEQ_NO_SECTOR (-1.0f)
#define SEQ_FLAG_REVERSED 2
#define SEQ_SAVE_FLAG_OFFSET 0x27E97
#define SEQ_VOICE 0x1000211
#define SEQ_BUTTON_SHOULDER_A 7
#define SEQ_BUTTON_SHOULDER_B 8

struct SeqSave {
    /* 0x00000 */ u8 unk00000[0x27E97];
    /* 0x27E97 */ u8 flags;
};

extern "C" {
extern SeqSave *DAT_0057f69c;
extern s32 DAT_0057f6b8;      /* progress through the sequence */

s32 slotIsActive(u32 button);
s32 padButtonRepeat(u32 button);
s32 padButtonIsPressed(u32 button);
void padGetNormalizedAnalogStick(f32 *stickX, f32 *stickY, s32 arg);
void sysPlayVoice(u32 voice);

/* True when any of the buttons that must stay untouched during the final presses is repeating. */
static __inline bool seqWrongButtonRepeating(void)
{
    return padButtonRepeat(2) != 0 || padButtonRepeat(1) != 0 || padButtonRepeat(9) != 0
        || padButtonRepeat(10) != 0 || padButtonRepeat(0) != 0;
}

/* Watches for the input sequence (hold both shoulder buttons, turn the stick through the twelve sector
 * steps, then press three buttons in order); when it completes, toggles the save flag and plays a voice.
 * Returns the save flags as they were on entry. */
u8 FUN_003ba65c(void)
{
    u8 flags = DAT_0057f69c->flags;
    /* Sector centres the stick has to pass through, and the two lap orders. */
    f32 sectors[SEQ_SECTOR_COUNT] = { 45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f };
    f32 sequenceDefault[SEQ_STICK_STEPS] = {
        270.0f, 225.0f, 180.0f, 135.0f, 90.0f, 45.0f, 270.0f, 225.0f, 180.0f, 135.0f, 90.0f, 45.0f
    };
    f32 sequenceReversed[SEQ_STICK_STEPS] = {
        45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f, 45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f
    };

    if (slotIsActive(SEQ_BUTTON_SHOULDER_A) == 0 || slotIsActive(SEQ_BUTTON_SHOULDER_B) == 0) {
        DAT_0057f6b8 = 0;
        return flags;
    }

    if (DAT_0057f6b8 < SEQ_STICK_STEPS) {
        f32 stickX;
        f32 stickY;
        padGetNormalizedAnalogStick(&stickX, &stickY, 0);
        f32 angle = atan2f(stickX, stickY) * SEQ_RAD_TO_DEG;
        if (angle < 0.0f)
            angle += 360.0f;
        const f32 *sequence = (flags & SEQ_FLAG_REVERSED) != 0 ? sequenceReversed : sequenceDefault;
        f32 sector = SEQ_NO_SECTOR;
        for (s32 i = 0; i < SEQ_SECTOR_COUNT; i++) {
            if (sectors[i] - SEQ_SECTOR_TOLERANCE <= angle && angle <= sectors[i] + SEQ_SECTOR_TOLERANCE) {
                sector = sectors[i];
                if (DAT_0057f6b8 > 0 && sector == sequence[DAT_0057f6b8 - 1])
                    sector = SEQ_NO_SECTOR;
                break;
            }
        }
        if (sector < 0.0f)
            return flags;
        if (sequence[DAT_0057f6b8] == sector)
            DAT_0057f6b8++;
        else
            DAT_0057f6b8 = 0;
        return flags;
    }

    switch (DAT_0057f6b8) {
    case SEQ_STEP_PRESS_A:
        if (padButtonIsPressed(10) != 0) {
            DAT_0057f6b8++;
        } else if (seqWrongButtonRepeating()) {
            DAT_0057f6b8 = 0;
            return flags;
        }
        break;
    case SEQ_STEP_PRESS_B:
        if (padButtonIsPressed(5) != 0) {
            DAT_0057f6b8++;
        } else if (seqWrongButtonRepeating()) {
            DAT_0057f6b8 = 0;
            return flags;
        }
        break;
    case SEQ_STEP_PRESS_C:
        if (padButtonIsPressed(6) != 0) {
            DAT_0057f6b8++;
        } else if (seqWrongButtonRepeating()) {
            DAT_0057f6b8 = 0;
            return flags;
        }
        break;
    }

    if (DAT_0057f6b8 == SEQ_STEP_DONE) {
        if ((flags & SEQ_FLAG_REVERSED) == 0)
            DAT_0057f69c->flags |= SEQ_FLAG_REVERSED;
        else
            DAT_0057f69c->flags &= ~SEQ_FLAG_REVERSED;
        sysPlayVoice(SEQ_VOICE);
        DAT_0057f6b8 = 0;
    }
    return flags;
}

} /* extern "C" */
