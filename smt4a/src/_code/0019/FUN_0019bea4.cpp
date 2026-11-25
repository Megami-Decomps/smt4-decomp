/* NON_MATCHING: same block layout and accesses; several saved and scratch registers differ. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
extern RenderChannelState g_inputResetState;
extern u16 DAT_006473dc[];

/* Records the current text and callback in the selected history entry. */
void FUN_0019bea4(void)
{
    if (!g_inputResetState.enabled || !g_inputResetState.ready)
        return;

    RenderChannelTable *table = g_inputResetState.table;
    table->entries[table->selected].textLength = table->unk4E02;
    table->entries[table->selected].captureLength = table->pending;
    table->entries[table->selected].binding.callback = g_inputResetState.binding.callback;
    table->entries[table->selected].binding.context = g_inputResetState.binding.context;
    g_inputResetState.binding.callback = NULL;
    g_inputResetState.binding.context = NULL;

    if (g_inputResetState.capture->count == 0) {
        table->entries[table->selected].captureLength = 0;
        if (DAT_006473dc[0]) {
            for (s32 index = 0; index < 24; ++index) {
                table->entries[table->selected].captureText[index] = DAT_006473dc[index];
                if (!DAT_006473dc[index])
                    break;
                ++table->entries[table->selected].captureLength;
            }
        }
    } else {
        table->entries[table->selected].captureLength = g_inputResetState.capture->count;
        for (u32 index = 0; index < g_inputResetState.capture->count; ++index)
            table->entries[table->selected].captureText[index] = g_inputResetState.capture->text[index];
        table->entries[table->selected].captureText[g_inputResetState.capture->count] = 0;
    }
    if (table->selected < 64)
        ++table->selected;
}
} /* extern "C" */
