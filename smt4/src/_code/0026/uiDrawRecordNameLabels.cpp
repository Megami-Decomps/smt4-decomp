/* NON_MATCHING: stack-buffer lifetime and outgoing text arguments use different saved registers and strd grouping from retail. */
#include "common.h"

struct RecordLabels {
    u32 handles[3]; // 0x00
    u8 active; // 0x0c
};
struct LabelledRecord {
    u8 unk00[0x0e];
    char name[0x12]; // 0x0e
    u8 flags; // 0x20
    u8 unk21[0x27];
    u16 message; // 0x48
};
extern "C" {
void FUN_00296b3c(u32 handle, s32 mode, s32 selection, u32 flags, u32 options, const char *text);
void *FUN_002bd06c(u16 message);
void FUN_002bcfc0(void *message, char *output);
void FUN_0024ee4c(char *output, const char *text);
void rt_memcpy_w(void *output, const void *input, u32 bytes);
}

// Populate the name, message and optional developer label for this record.
extern "C" s32 uiDrawRecordNameLabels(RecordLabels *labels, const LabelledRecord *record)
{
    if (labels == NULL)
        return 0;
    char text[64];
    FUN_00296b3c(labels->handles[0], 2, -1, 0, 0, record->name);
    if (record->message)
        FUN_002bcfc0(FUN_002bd06c(record->message), text);
    else
        FUN_0024ee4c(text, "\x81\x7c\x81\x7c\x81\x7c");
    FUN_00296b3c(labels->handles[1], 2, -1, 0, 0, text);
    if (record->flags & 2) {
        rt_memcpy_w(text, "\x82\x63\x82\x85\x82\x96\x82\x85\x82\x8c\x82\x8f\x82\x90\x82\x85\x82\x92", 19);
        FUN_00296b3c(labels->handles[2], 2, -1, 0, 0, text);
    }
    labels->active = 1;
    return 1;
}
