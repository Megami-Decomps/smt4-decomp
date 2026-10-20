#include "common.h"

extern "C" {

/* Object with an enable flag at 0x45 and a sub-object pointer at 0x48. */
typedef struct {
    u8 unk00[0x45];
    u8 enabled;         /* 0x45 */
    u8 unk46[2];
    void *sub;          /* 0x48 */
} Owner;

int FUN_001a6f60(void *sub, int arg);
int dataTableGetEntries(void);

/* Runs the sub-object's FUN_001a6f60 and returns dataTableGetEntries's result; 0 when there is nothing to run. */
int FUN_001b31ac(Owner *owner)
{
    if (owner->enabled == 0) {
        return 0;
    }
    if (owner->sub == NULL) {
        return 0;
    }
    FUN_001a6f60(owner->sub, 0);
    return dataTableGetEntries();
}

} /* extern "C" */
