#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern RenderChannelState g_inputResetState;

/* Updates the selected render channel and remembers its index. */
void gfxSetSelectedChannelActive(u8 value)
{
    if (g_inputResetState.enabled != 0 && g_inputResetState.ready != 0) {
        RenderChannelTable *table = g_inputResetState.table;
        table->entries[(s16)table->selected].active = value;
        table->previous = table->selected;
    }
}

} /* extern "C" */
