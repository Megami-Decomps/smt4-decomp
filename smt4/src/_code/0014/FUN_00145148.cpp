/* NON_MATCHING: same 114 rows, block layout and the settings/zero registers as retail (signed channel/length bytes of the entry view); only the entry-field temporaries (r2/r3) and the capture-copy loop's pointer/index registers (r3/ip) are swapped. */
#include "shard/W5_W5Match1_RecordKeys.h"
#include <stddef.h>

// Source-local extended views: the shared table and state describe only shorter prefixes.
struct ChannelCaptureEntryView {
    u8 active;
    s8 channel;
    s8 textLength;
    u8 unk003;
    u32 first;
    u32 second;
    u8 unk00C[0xFC];
    u16 text[24];
};
struct ChannelCaptureTableView {
    ChannelCaptureEntryView entries[64];
    s16 selected;
    u16 channel;
    u8 unk4E04[0x28];
    u32 textLength;
};
struct ChannelCaptureTextView {
    u32 unk00;
    u16 text[24];
    u16 length;
};
struct ChannelCaptureStateView {
    u8 enabled;
    u8 ready;
    u8 unk02[2];
    ChannelCaptureTableView *table;
    ChannelCaptureTextView *capture;
    u32 first;
    u32 second;
};
typedef char ChannelCaptureLayoutCheck[
    sizeof(ChannelCaptureEntryView) == sizeof(RenderChannelEntry) && offsetof(ChannelCaptureEntryView, text) == 0x108 &&
    offsetof(ChannelCaptureTableView, selected) == 0x4E00 && offsetof(ChannelCaptureTableView, textLength) == 0x4E2C &&
    offsetof(ChannelCaptureTextView, length) == 0x34 && offsetof(ChannelCaptureStateView, first) == 0xC ? 1 : -1];

extern "C" {
extern ChannelCaptureStateView g_textRendererSettings;
extern u16 DAT_004eaa1c[];

void FUN_00145148(void)
{
    if (!g_textRendererSettings.enabled || !g_textRendererSettings.ready)
        return;
    ChannelCaptureTableView *table = g_textRendererSettings.table;
    table->entries[table->selected].channel = table->channel;
    table->entries[table->selected].textLength = table->textLength;
    table->entries[table->selected].first = g_textRendererSettings.first;
    table->entries[table->selected].second = g_textRendererSettings.second;
    g_textRendererSettings.first = 0;
    g_textRendererSettings.second = 0;
    if (g_textRendererSettings.capture->length == 0) {
        table->entries[table->selected].textLength = 0;
        if (DAT_004eaa1c[0]) {
            for (s32 index = 0; index < 24; ++index) {
                table->entries[table->selected].text[index] = DAT_004eaa1c[index];
                if (!DAT_004eaa1c[index])
                    break;
                ++table->entries[table->selected].textLength;
            }
        }
    } else {
        table->entries[table->selected].textLength = g_textRendererSettings.capture->length;
        for (u32 index = 0; index < g_textRendererSettings.capture->length; ++index)
            table->entries[table->selected].text[index] = g_textRendererSettings.capture->text[index];
        table->entries[table->selected].text[g_textRendererSettings.capture->length] = 0;
    }
    if (table->selected < 64)
        ++table->selected;
}
}
