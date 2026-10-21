#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GraphicsPairState g_textRendererSettings;

/* Installs the binding while both graphics flags are set. */
void FUN_00145628(CallbackBinding binding)
{
    if (g_textRendererSettings.enabled != 0 && g_textRendererSettings.ready != 0) {
        g_textRendererSettings.binding = binding;
    }
}

} /* extern "C" */
