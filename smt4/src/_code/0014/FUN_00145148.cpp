/* NON_MATCHING: same block layout and accesses; several saved and scratch registers differ. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
extern RenderChannelState g_textRendererSettings;
extern u16 DAT_004eaa1c[];

/* Records the current text and callback in the selected history entry. */
void FUN_00145148(void)
{
    if (!g_textRendererSettings.enabled || !g_textRendererSettings.ready)
        return;

    RenderChannelTable *table = g_textRendererSettings.table;
    table->entries[table->selected].textLength = table->unk4E02;
    table->entries[table->selected].captureLength = table->pending;
    table->entries[table->selected].binding.callback = g_textRendererSettings.binding.callback;
    table->entries[table->selected].binding.context = g_textRendererSettings.binding.context;
    g_textRendererSettings.binding.callback = NULL;
    g_textRendererSettings.binding.context = NULL;

    if (g_textRendererSettings.capture->count == 0) {
        table->entries[table->selected].captureLength = 0;
        if (DAT_004eaa1c[0]) {
            for (s32 index = 0; index < 24; ++index) {
                table->entries[table->selected].captureText[index] = DAT_004eaa1c[index];
                if (!DAT_004eaa1c[index])
                    break;
                ++table->entries[table->selected].captureLength;
            }
        }
    } else {
        table->entries[table->selected].captureLength = g_textRendererSettings.capture->count;
        for (u32 index = 0; index < g_textRendererSettings.capture->count; ++index)
            table->entries[table->selected].captureText[index] = g_textRendererSettings.capture->text[index];
        table->entries[table->selected].captureText[g_textRendererSettings.capture->count] = 0;
    }
    if (table->selected < 64)
        ++table->selected;
}
} /* extern "C" */
