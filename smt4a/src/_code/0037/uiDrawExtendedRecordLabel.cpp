#include "common.h"
#include "runtime/Stdio.h"
#include <string.h>
#include "text/TextDraw.h"
#include "AsdSDK/asdTextFormatStream.h"

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
const char *dataTable01GetRecordWithAocOverride(u16 message);
f32 fontMeasureTextWidth(const char *text, u32 mode, f32 spacing);
extern const char DAT_0052c008[];
}

// Populate the record labels and measure the fixed StreetPass description.
extern "C" s32 uiDrawExtendedRecordLabel(ExtendedRecordLabels *labels, const ExtendedLabelledRecord *record)
{
    if (labels == NULL)
        return 0;
    char text[80];
    asdTextFormatStream(labels->handles[0], 2, -1, 0, 0, textExpandGlyphsToBuffer(record->name, NULL, 0));
    if (record->message)
        textExpandGlyphsToBuffer(dataTable01GetRecordWithAocOverride(record->message), text, 0);
    else
        strcpy(text, "\x81\x7c\x81\x7c\x81\x7c");
    asdTextFormatStream(labels->handles[1], 2, -1, 0, 0, text);
    strcpy(text, "\x82\x63\x82\x85\x82\x96\x82\x85\x82\x8c\x82\x8f\x82\x90\x82\x85\x82\x92");
    asdTextFormatStream(labels->handles[2], 2, -1, 0, 0, text);
    __2sprintf(text, DAT_0052c008);
    asdTextFormatStream(labels->description, 2, -1, 0, 0, text);
    labels->descriptionWidth = static_cast<s32>(fontMeasureTextWidth(text, 2, 0.0f));
    labels->active = 1;
    return 1;
}
