/* NON_MATCHING: retail puts the 84-byte range table at the bottom of the frame (sp+0, with the outputs at sp+84/88) and keeps three extra float temporaries in d8-d10; armcc places the table above the outgoing-argument slot (sp+4) and uses fewer VFP registers. */
#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match1_PartySlot.h"

extern "C" {

/* The step state machine's work block (only the fields used here). */
typedef struct ShiftEffectWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 result;
    /* 0x0C */ u8 unk0c[4];
    /* 0x10 */ s32 step;
    /* 0x14 */ u8 unk14[0x34];
    /* 0x48 */ struct {
        f32 value;      /* the party member's value the shift is looked up by */
        u8 unk04[0x18];
    } members[1];
} ShiftEffectWork;

/* The party slot the battle currently has selected, at 0x4D68 of the main state. */
typedef struct SelectedSlotView {
    /* 0x0000 */ u8 unk0000[0x4D68];
    /* 0x4D68 */ PartySlotA *selected;
} SelectedSlotView;

/* A value range (low, high] and the shift it maps to. */
typedef struct ShiftRange {
    f32 low;
    f32 high;
    f32 shift;
} ShiftRange;

BtlMainStateA *btlGetMainState(void);
extern const ShiftRange DAT_005297d4[7]; /* the shift ranges (-6..6 mapped to -0.3..0.3) */
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
s32 FUN_00163e84(s32 arg);
s32 FUN_0013def0(s32 arg);
void FUN_003d54f8(s32 arg, s32 value);
PartySlotA *FUN_003e503c(u32 index);
u32 FUN_00187168(PartySlotA *slot);
u32 FUN_0019acdc(u16 id, u32 arg);
void FUN_003f1b3c(BtlMainStateA *state, s32 section, s32 kind, u32 *info, u32 *effectId);
void FUN_0047f4cc(u32 effectId, f32 scale, f32 alphaA, f32 alphaB);
void btlReflectCreateKind42(s32 a, s32 b, s32 member, u32 info);
void btlReflectCreateKind43(s32 id, u32 index, u32 flags, u32 value, u32 parameter);

/* Runs the shift-effect intro: waits for the prompt, finds the selected party member, looks up
 * the shift for its value and starts the tinted effect. */
void FUN_00410d44(ShiftEffectWork *work)
{
    BtlMainStateA *state = btlGetMainState();

    switch (work->step) {
    case 0:
        if (FUN_00163e84(0) != 0) {
            if (FUN_0013def0(0) != 0) {
                FUN_003d54f8(0, 10);
            }
            work->step++;
        }
        break;
    case 1:
        if (FUN_00163e84(0) != 0) {
            s32 member = 0;

            for (u32 i = 0; i < 12; i++) {
                PartySlotA *slot = FUN_003e503c((u16)i);

                if (((SelectedSlotView *)state)->selected == slot) {
                    u32 info;
                    u32 effectId;

                    FUN_003f1b3c(state, FUN_0019acdc(slot->id, 1), 4, &info, &effectId);
                    f32 value = work->members[member].value;
                    ShiftRange table[7];

                    __aeabi_memcpy4(table, DAT_005297d4, sizeof(table));
                    f32 shift = 0.0f;
                    s32 found = 0;
                    f32 lowEdge;    /* never initialised in retail: the out-of-range fallback reads stale registers */
                    f32 highEdge;
                    f32 edgeShift;

                    for (s32 r = 0; r < 7; r++) {
                        if (table[r].low < value && table[r].high >= value) {
                            shift = table[r].shift;
                            found = 1;
                        }
                        if (lowEdge > table[r].low) {
                            lowEdge = table[r].low;
                            edgeShift = table[r].shift;
                        }
                        if (highEdge < table[r].high) {
                            lowEdge = table[r].low;
                            edgeShift = table[r].shift;
                        }
                    }
                    if (!found) {
                        if (lowEdge >= value) {
                            shift = edgeShift;
                        }
                        if (highEdge < value) {
                            shift = edgeShift;
                        }
                    }
                    FUN_0047f4cc(effectId, 0.70710677f, 1.0f + shift, 1.0f - shift);
                    btlReflectCreateKind42(0, 0, member, info);
                    btlReflectCreateKind43(0, 30, 0, member, 1);
                    work->step++;
                    return;
                }
                if (FUN_00187168(slot) != 0) {
                    member++;
                }
            }
            work->step++;
        }
        break;
    case 2:
        work->step = 3;
        break;
    case 3:
        work->result = 7;
        break;
    }
}

}
