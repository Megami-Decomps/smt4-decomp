#include "common.h"

extern "C" {

typedef struct Part {
    u8 state;       /* 0x00 */
    u8 unk01[15];
    u8 sub[1];      /* 0x10 */
} Part;

extern u32 flaggedEntryGetValueA(void *sub);
extern u32 flaggedEntryGetValueB(void *sub);

/* Returns the value of the part's sub-object from the handler for the part's state; state 1 is handled by the next function. */
u32 flaggedEntryGetValueByState(Part *part)
{
    if (part->state != 1) {
        return flaggedEntryGetValueA(part->sub);
    }
    return flaggedEntryGetValueB(part->sub);
}

} /* extern "C" */
