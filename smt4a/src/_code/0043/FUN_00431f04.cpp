#include "common.h"

extern "C" {

typedef struct List431f0c {
    u8 unk00[0x28];
} List431f0c;

typedef struct Owner431f04 {
    u8 unk00[0x18];
    List431f0c list;               /* 0x18 */
} Owner431f04;

int FUN_00431f0c(List431f0c *list);

/* Passes the owner's list on to FUN_00431f0c, the function that follows it. */
int FUN_00431f04(Owner431f04 *owner)
{
    return FUN_00431f0c(&owner->list);
}

} /* extern "C" */
