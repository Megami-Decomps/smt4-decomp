/* NON_MATCHING: group/selector address calculations use opposite r1/r2 registers and schedule the selector argument after the message-bank base. */
#include "common.h"

struct MessageChoiceSelector {
    u32 unk00;
    u32 unk04;
    s32 count; // 0x08
    u8 unk0c[0x68];
};
struct MessageChoiceEntry {
    u16 message;
    u16 flags;
};
struct MessageChoiceBank {
    MessageChoiceEntry entries[1024];
    u16 unk1000;
};
struct MessageChoiceOwner {
    u8 unk000[0xb40];
    s32 group; // 0xb40
    u8 unkb44[0x1c];
    MessageChoiceSelector choices[9]; // 0xb60
    MessageChoiceBank messages[9]; // 0xf74
};

extern "C" {
s32 flaggedValueHolderGetTotal(MessageChoiceSelector *selector);
void screenShowMessage(u32 message);
void FUN_0019de98(s32 mode, u32 color);

// Show the current group's selected message, or draw the empty-state background.
void messageChoiceShowCurrent(MessageChoiceOwner *owner)
{
    s32 group = owner->group;
    if (owner->choices[group].count > 0) {
        MessageChoiceBank *messages = &owner->messages[group];
        s32 selected = flaggedValueHolderGetTotal(&owner->choices[group]);
        screenShowMessage(messages->entries[selected].message);
        return;
    }
    FUN_0019de98(0, 0x323232ff);
}
}
