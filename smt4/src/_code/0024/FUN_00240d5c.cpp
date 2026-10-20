#include "common.h"

extern "C" {

typedef struct Part {
    u8 state;       /* 0x00 */
    u8 unk01[15];
    u8 sub[1];      /* 0x10 */
} Part;

extern void flaggedEntryGetValueA(void *sub);
extern void flaggedEntryGetValueB(void *sub);

/* Hands the sub-object to the handler for the part's state; state 1 is handled by the next function. */
void FUN_00240d5c(Part *part)
{
    if (part->state != 1) {
        flaggedEntryGetValueA(part->sub);
        return;
    }
    flaggedEntryGetValueB(part->sub);
}

} /* extern "C" */
