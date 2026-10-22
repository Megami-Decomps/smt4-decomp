#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;

/* Returns whether there is an object at 0x57F118. */
u8 campCecEditIsOpen(void)
{
    return g_campCecEdit != NULL;
}

} /* extern "C" */
