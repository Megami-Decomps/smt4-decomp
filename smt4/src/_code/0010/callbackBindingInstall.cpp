#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern CallbackBinding g_installedCallbackBinding;

/* Installs a callback and its context. */
void callbackBindingInstall(CallbackBinding binding)
{
    g_installedCallbackBinding = binding;
}

} /* extern "C" */
