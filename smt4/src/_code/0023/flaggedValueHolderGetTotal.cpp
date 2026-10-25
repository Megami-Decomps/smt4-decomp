#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "shard/flaggedValueHolderGetTotal.h"

extern "C" {
u32 FUN_0029efc0(const FlaggedEntry *entry);
u32 FUN_0029e93c(const FlaggedEntry *entry);
u32 flaggedEntryGetValueA(const FlaggedEntry *entry);
u32 flaggedEntryGetValueB(const FlaggedEntry *entry);

u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder)
{
    u32 first = holder->kind == 1 ? FUN_0029e93c(&holder->entry)
                                  : FUN_0029efc0(&holder->entry);
    u32 second = holder->kind == 1 ? flaggedEntryGetValueB(&holder->entry)
                                   : flaggedEntryGetValueA(&holder->entry);
    return second + first;
}
}
