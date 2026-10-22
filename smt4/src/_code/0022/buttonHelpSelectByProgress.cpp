#include "common.h"

extern "C" {

typedef struct HelpOwner {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3C */ s16 mode;
} HelpOwner;

void buttonHelpSetPreset(s32 preset);
s32 gameFlagIsSet(u32 flag);
s32 flagBitIsSet(u32 bit);

/* Picks the button help preset for the owner's mode (4 and 3 have their own) from the story progress flags. */
void buttonHelpSelectByProgress(HelpOwner *owner)
{
    if (!gameFlagIsSet(0x11)) {
        if (owner->mode == 4) {
            buttonHelpSetPreset(0xe8);
        } else {
            buttonHelpSetPreset(0x40);
        }
    } else if (!gameFlagIsSet(0x16)) {
        if (owner->mode == 4) {
            buttonHelpSetPreset(0xe8);
        } else {
            buttonHelpSetPreset(0xd3);
        }
    } else if (!gameFlagIsSet(0x40c)) {
        if (owner->mode == 4) {
            buttonHelpSetPreset(0xe8);
        } else if (owner->mode == 3) {
            buttonHelpSetPreset(0xe9);
        } else {
            buttonHelpSetPreset(0x41);
        }
    } else if (flagBitIsSet(0x76)) {
        if (owner->mode == 4) {
            buttonHelpSetPreset(0xe8);
        } else if (owner->mode == 3) {
            buttonHelpSetPreset(0xe9);
        } else {
            buttonHelpSetPreset(0x43);
        }
    } else {
        if (owner->mode == 4) {
            buttonHelpSetPreset(0xe8);
        } else if (owner->mode == 3) {
            buttonHelpSetPreset(0xe9);
        } else {
            buttonHelpSetPreset(0x41);
        }
    }
}

} /* extern "C" */
