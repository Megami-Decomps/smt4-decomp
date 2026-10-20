#include "shard/Shard003C.h"

extern "C" {

#include "shard/Shard0032.h"
extern StateAtF4 *DAT_0057f118;
extern void FUN_003c8738(void);

void FUN_003c8790(void)
{
    if (DAT_0057f118 == NULL || DAT_0057f118->unk0C == NULL) {
        return;
    }
    FUN_003c8738();
}

} /* extern "C" */
