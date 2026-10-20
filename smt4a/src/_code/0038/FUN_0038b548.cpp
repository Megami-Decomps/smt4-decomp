#include "shard/Shard0038.h"

extern "C" {

extern StateHolder518 *g_statusDown;

void FUN_0038b548(u8 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->unk24AA = value;
    }
}

} /* extern "C" */
