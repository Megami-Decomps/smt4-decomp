/* NON_MATCHING: 64-bit flag-mask loads and temporary VFP-register choices differ from retail; control flow and draw calls otherwise agree. */
#include "common.h"

struct FlagLabelRecord {
    u64 flags; // 0x000
    u8 unk008[0x15e];
    u16 message; // 0x166
};
extern "C" {
extern const u64 DAT_005715f8[];
extern const char DAT_00528128[];
extern const char DAT_00528130[];
extern const char DAT_00528138[];
extern const char DAT_00528140[];
u32 entryTableCallSlot3(u32 table);
void textFormatBuffer(char *output, const char *format, ...);
const char *FUN_0015687c();
const char *FUN_00180118(u16 message);
void textDrawDefaultString(const char *text, f32 x, f32 y);
}

// Draw the first applicable flag label and its associated description.
extern "C" void uiDrawFlagLabels(void *, const FlagLabelRecord *record)
{
    if (record == NULL)
        return;
    u32 lineHeight = entryTableCallSlot3(3);
    char label[12] = {};
    const char *description = NULL;
    if (record->flags & DAT_005715f8[2]) {
        textFormatBuffer(label, DAT_00528128);
        description = FUN_0015687c();
    } else if (record->flags & DAT_005715f8[3]) {
        textFormatBuffer(label, DAT_00528130);
        description = FUN_00180118(record->message);
    } else if (record->flags & DAT_005715f8[5]) {
        textFormatBuffer(label, DAT_00528138);
        description = FUN_00180118(record->message);
    } else if (record->flags & DAT_005715f8[4]) {
        textFormatBuffer(label, DAT_00528140);
        description = FUN_00180118(record->message);
    }
    textDrawDefaultString(label, 228.0f, 42.0f);
    textDrawDefaultString(description, 228.0f, static_cast<f32>(lineHeight) + 42.0f);
}
