#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *DAT_0057f118;
extern void FUN_003a4980(u32 *a, u16 *b, void *c);

void stateAtF4Apply(void)
{
    if (DAT_0057f118 != NULL) {
        FUN_003a4980(DAT_0057f118->unk0C, DAT_0057f118->unk08, DAT_0057f118->unk58);
    }
}

} /* extern "C" */
