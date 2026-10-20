#include "shard/Shard003C.h"

extern "C" {

extern void sub68OwnerCall10(void);

/* Script command: runs sub68OwnerCall10. */
u32 FUN_003c1050(void)
{
    sub68OwnerCall10();
    return 1;
}

} /* extern "C" */
