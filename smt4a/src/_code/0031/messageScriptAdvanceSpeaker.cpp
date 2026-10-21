#include "common.h"

struct MessageSpeaker {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u8 kind;
};

extern "C" {
u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
void scrWorkSetValue(s32 index, s32 value);
s32 scrWorkGetValue(s32 index);
void FUN_00417e08(u16 id);
s32 dataTableValueOrZero(u32 index);
void FUN_003dea6c(u16 id, s32 mode, s32 enabled);
void FUN_001695a0(void);
s32 messageForwardDefaultMode(s32 message, s32 mode, s32 frame, s32 flags, s32 unused);
s32 FUN_004186a4(void);
u32 FUN_004186e0(void);
MessageSpeaker *FUN_001ad9b4(u32 id);
void optionsSetFlag1(void);

// Advance the speaker's message and update the option state on completion.
u32 messageScriptAdvanceSpeaker(void)
{
    u16 speakerId = scrGetArg(0);
    if (scrGetCommandFrame() == 0) {
        FUN_00417e08(speakerId);
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
    }
    s32 message = dataTableValueOrZero(0x1e);
    if (scrWorkGetValue(0) == 0) {
        FUN_003dea6c(speakerId, 0, 1);
        FUN_001695a0();
        s32 result = messageForwardDefaultMode(message, 0, scrWorkGetValue(1), 6, 0);
        scrWorkSetValue(1, scrWorkGetValue(1) + 1);
        if (result == 1) {
            scrWorkSetValue(1, 0);
            if (FUN_004186a4()) {
                MessageSpeaker *previous = FUN_001ad9b4(FUN_004186e0());
                MessageSpeaker *current = FUN_001ad9b4(speakerId);
                if (previous && current &&
                    ((previous->kind != 5 && previous->kind != 4 && previous->kind != 1) ||
                     (current->kind != 0 && current->kind != 10)))
                    optionsSetFlag1();
            }
            return 1;
        }
    }
    return 0;
}
}
