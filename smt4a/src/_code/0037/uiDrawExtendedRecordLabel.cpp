/* NON_MATCHING: armcc uses four saved registers and an 88-byte frame instead of retail's five and 92 bytes; text-buffer arguments use separate stores instead of strd. */
#include "common.h"
#include "text/TextDraw.h"

struct ExtendedRecordLabels {
    u32 handles[3]; // 0x00
    u8 active; // 0x0c
    u8 unk0d[3];
    u32 description; // 0x10
    s32 descriptionWidth; // 0x14
};
struct ExtendedLabelledRecord {
    u8 unk00[0x0e];
    char name[0x52]; // 0x0e
    u16 message; // 0x60
};
extern "C" {
void asdTextFormatStream(u32 handle, s32 mode, s32 selection, u32 flags, u32 options, const char *text);
const char *FUN_00180118(u16 message);
void ARM_common_memcpy4_7(char *output, const char *text);
void __aeabi_memcpy4(void *output, const void *input, u32 bytes);
void textFormatBuffer(char *output, const char *format, ...);
f32 FUN_00168594(const char *text, u32 mode, f32 spacing);
extern const char DAT_0052c008[];
}

// Populate the record labels and measure the fixed StreetPass description.
extern "C" s32 uiDrawExtendedRecordLabel(ExtendedRecordLabels *labels, const ExtendedLabelledRecord *record)
{
    if (labels == NULL)
        return 0;
    char text[80];
    asdTextFormatStream(labels->handles[0], 2, -1, 0, 0, FUN_001654f8(record->name, NULL, 0));
    if (record->message)
        FUN_001654f8(FUN_00180118(record->message), text, 0);
    else
        ARM_common_memcpy4_7(text, "\x81\x7c\x81\x7c\x81\x7c");
    asdTextFormatStream(labels->handles[1], 2, -1, 0, 0, text);
    __aeabi_memcpy4(text, "\x82\x63\x82\x85\x82\x96\x82\x85\x82\x8c\x82\x8f\x82\x90\x82\x85\x82\x92", 19);
    asdTextFormatStream(labels->handles[2], 2, -1, 0, 0, text);
    textFormatBuffer(text, DAT_0052c008);
    asdTextFormatStream(labels->description, 2, -1, 0, 0, text);
    labels->descriptionWidth = static_cast<s32>(FUN_00168594(text, 2, 0.0f));
    labels->active = 1;
    return 1;
}
