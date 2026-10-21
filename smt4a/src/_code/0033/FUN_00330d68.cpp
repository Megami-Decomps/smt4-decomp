#include "shard/Shard0033.h"

extern "C" {

extern void mapTrapBeginMoveToScene(void);

/* Script command: runs mapTrapBeginMoveToScene and finishes. */
u32 FUN_00330d68(void)
{
    mapTrapBeginMoveToScene();
    return 1;
}

} /* extern "C" */
