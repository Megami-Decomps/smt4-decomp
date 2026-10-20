#include "common.h"

extern "C" {

/* Object with an enable flag at 0x45 and a sub-object pointer at 0x48. */
typedef struct {
    u8 unk00[0x45];
    u8 enabled;         /* 0x45 */
    u8 unk46[2];
    void *sub;          /* 0x48 */
} Owner;

int FUN_002ac068(void *sub, int arg);
int dataTableGetCount(void);

/* Runs the sub-object's FUN_002ac068 and returns dataTableGetCount's result; 0 when there is nothing to run. */
int FUN_002ac0c4(Owner *owner)
{
    if (owner->enabled == 0) {
        return 0;
    }
    if (owner->sub == NULL) {
        return 0;
    }
    FUN_002ac068(owner->sub, 0);
    return dataTableGetCount();
}

} /* extern "C" */
