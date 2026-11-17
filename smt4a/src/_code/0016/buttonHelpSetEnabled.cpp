/* NON_MATCHING: only the zero register differs (retail keeps it in r3 and schedules the stores around the touchSelected address; built uses r0). */
#include "ui/ButtonHelpGlobal.h"

/* A private view of ButtonHelpWorkA from 0x500: addressing through it reproduces retail's early
 * work+0x500 base register (the shared fields give 8 vs 6 diff lines). */
struct ButtonHelpTail {
    u8 unk00[0xD4];      // 0x500
    u32 pressedLow;      // 0x5D4: touchPressed[0..3]
    u16 pressedHigh;     // 0x5D8: touchPressed[4..5]
    u8 touchSelected[9]; // 0x5DA
    u8 touchSuspended;   // 0x5E3
};
struct ButtonHelpTailView {
    u8 unk000[0x500];
    ButtonHelpTail tail; // 0x500
};

/* The current work through the private view. */
static inline ButtonHelpTailView *buttonHelpTailView(void)
{
    return reinterpret_cast<ButtonHelpTailView *>(g_buttonHelp.work);
}

extern "C" {
void FUN_001a90e0(u8 *state);

/* Suspends (nonzero) or resumes the touch update; suspending clears the slots' touch flags. */
void buttonHelpSetEnabled(s32 enabled)
{
    ButtonHelpTail *tail = &buttonHelpTailView()->tail;
    buttonHelpTailView()->tail.touchSuspended = (u8)enabled;
    if (enabled != 0) {
        buttonHelpTailView()->tail.pressedLow = 0;
        tail->pressedHigh = 0;
        FUN_001a90e0(buttonHelpTailView()->tail.touchSelected);
    }
}
}
