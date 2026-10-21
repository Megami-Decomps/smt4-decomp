#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern GraphicsPairState g_inputResetState;

/* Installs the binding while both graphics flags are set. */
void FUN_0019caa0(CallbackBinding binding)
{
    if (g_inputResetState.enabled != 0 && g_inputResetState.ready != 0) {
        g_inputResetState.binding = binding;
    }
}

} /* extern "C" */
