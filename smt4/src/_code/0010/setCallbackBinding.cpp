#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern CallbackBinding g_startMenuPostHook;

/* Installs a callback and its context. */
void setCallbackBinding(CallbackBinding binding)
{
    g_startMenuPostHook = binding;
}

} /* extern "C" */
