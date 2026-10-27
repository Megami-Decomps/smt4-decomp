/* NON_MATCHING: only the message-bank address adds are scheduled before the selector argument (retail interleaves them after it). */
#include "common.h"
#include "shard/Shard004A.h"

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
void screenShowMessage(u32 message);
void buttonHelpSetText(s32 mode, u32 color);

// Show the current group's selected message, or draw the empty-state background.
void messageChoiceShowCurrent(MessageChoiceOwner *owner)
{
    if (owner->choices[owner->group].count > 0) {
        MessageChoiceBank *messages = &owner->messages[owner->group];
        s32 selected = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(&owner->choices[owner->group]));
        screenShowMessage(messages->entries[selected].message);
        return;
    }
    buttonHelpSetText(0, 0x323232ff);
}
}
