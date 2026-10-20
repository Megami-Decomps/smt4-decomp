#include "shard/Shard0036.h"

extern "C" {

extern StateAtF4 *DAT_0057f118;

void FUN_0036cf98(u8 value)
{
    if (DAT_0057f118 != NULL) {
        DAT_0057f118->unk189 = value;
    }
}

} /* extern "C" */
