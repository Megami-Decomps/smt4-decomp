/* NON_MATCHING: input-sequence detector (hold both shoulder buttons, move the stick through twelve 45-degree sectors, press three buttons in order, then toggle a save flag and play a voice); written from the decompilation, the two 12-entry sector tables are reconstructed from the decompiler's stack stores (two clockwise / counter-clockwise laps) and the sector search is a shared helper */
#include "common.h"

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

s32 FUN_00163fd4(u32 button);
s32 padButtonRepeat(u32 button);
s32 padButtonIsPressed(u32 button);
void FUN_00317af8(f32 *angle, u8 buffer[16], s32 flag);
void FUN_0050d8e4(void);
void sysPlayVoice(u32 voice);

/* Sector centres the stick has to pass through, in order, for both lap directions. */
static const f32 SEQUENCE_DEFAULT[SEQ_STICK_STEPS] = {
    270.0f, 225.0f, 180.0f, 135.0f, 90.0f, 45.0f, 270.0f, 225.0f, 180.0f, 135.0f, 90.0f, 45.0f
};
static const f32 SEQUENCE_REVERSED[SEQ_STICK_STEPS] = {
    45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f, 45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f
};
static const f32 SECTORS[SEQ_SECTOR_COUNT] = { 45.0f, 90.0f, 135.0f, 180.0f, 225.0f, 270.0f };

/* True when any of the buttons that must stay untouched during the final presses is repeating. */
static __inline bool seqWrongButtonRepeating(void)
{
    return padButtonRepeat(2) != 0 || padButtonRepeat(1) != 0 || padButtonRepeat(9) != 0
        || padButtonRepeat(10) != 0 || padButtonRepeat(0) != 0;
}

/* The sector centre the stick angle is within the tolerance of, or SEQ_NO_SECTOR. */
static __inline f32 seqSectorOf(f32 angle)
{
    for (s32 i = 0; i < SEQ_SECTOR_COUNT; i++) {
        if (SECTORS[i] - SEQ_SECTOR_TOLERANCE <= angle && angle <= SECTORS[i] + SEQ_SECTOR_TOLERANCE)
            return SECTORS[i];
    }
    return SEQ_NO_SECTOR;
}

u8 FUN_003ba65c(void)
{
    u8 flags = DAT_0057f69c->flags;
    const f32 *sequence = (flags & SEQ_FLAG_REVERSED) != 0 ? SEQUENCE_REVERSED : SEQUENCE_DEFAULT;

    if (FUN_00163fd4(SEQ_BUTTON_SHOULDER_A) == 0 || FUN_00163fd4(SEQ_BUTTON_SHOULDER_B) == 0) {
        DAT_0057f6b8 = 0;
        return flags;
    }

    if (DAT_0057f6b8 < SEQ_STICK_STEPS) {
        f32 angle;
        u8 buffer[16];
        FUN_00317af8(&angle, buffer, 0);
        FUN_0050d8e4();
        angle *= SEQ_RAD_TO_DEG;
        if (angle < 0.0f)
            angle += 360.0f;

        f32 sector = seqSectorOf(angle);
        if (DAT_0057f6b8 >= 1 && sector == sequence[DAT_0057f6b8 - 1])
            sector = SEQ_NO_SECTOR;
        if (sector < 0.0f)
            return flags;
        if (sequence[DAT_0057f6b8] != sector) {
            DAT_0057f6b8 = 0;
            return flags;
        }
        DAT_0057f6b8++;
        return flags;
    }

    if (DAT_0057f6b8 == SEQ_STEP_PRESS_A || DAT_0057f6b8 == SEQ_STEP_PRESS_B || DAT_0057f6b8 == SEQ_STEP_PRESS_C) {
        u32 expected = DAT_0057f6b8 == SEQ_STEP_PRESS_A ? 10 : DAT_0057f6b8 == SEQ_STEP_PRESS_B ? 5 : 6;
        if (padButtonIsPressed(expected) != 0) {
            DAT_0057f6b8++;
        } else if (seqWrongButtonRepeating()) {
            DAT_0057f6b8 = 0;
            return flags;
        }
    }

    if (DAT_0057f6b8 == SEQ_STEP_DONE) {
        u8 saved = DAT_0057f69c->flags;
        if ((flags & SEQ_FLAG_REVERSED) == 0)
            saved |= SEQ_FLAG_REVERSED;
        else
            saved &= ~SEQ_FLAG_REVERSED;
        DAT_0057f69c->flags = saved;
        sysPlayVoice(SEQ_VOICE);
        DAT_0057f6b8 = 0;
    }
    return flags;
}

} /* extern "C" */
