#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern CallbackBinding DAT_00464d90;

/* Installs a callback and its context. */
void callbackBindingInstall(CallbackBinding binding)
{
    DAT_00464d90 = binding;
}

} /* extern "C" */
