#include "shard/W5_W5Match2_InputResetState.h"

extern "C" {

extern InputResetState g_textRendererSettings;

/* Clear all values and the count while the input state is active. */
void inputClearActiveValues(void)
{
    if (g_textRendererSettings.active != 0) {
        u32 index;
        for (index = 0; index < 12; ++index) {
            g_textRendererSettings.values->values[index] = 0;
        }
        g_textRendererSettings.values->count = 0;
    }
}

}
