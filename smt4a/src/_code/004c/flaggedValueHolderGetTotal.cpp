#include "shard/W6_W6Match4_FlaggedValueHolder.h"

extern "C" {
u32 FUN_002a4860(const FlaggedEntry *entry);
u32 FUN_002a4844(const FlaggedEntry *entry);
u32 flaggedEntryGetValueA(const FlaggedEntry *entry);
u32 flaggedEntryGetValueB(const FlaggedEntry *entry);

u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder)
{
    u32 first = holder->kind == 1 ? FUN_002a4844(&holder->entry)
                                  : FUN_002a4860(&holder->entry);
    u32 second = holder->kind == 1 ? flaggedEntryGetValueB(&holder->entry)
                                   : flaggedEntryGetValueA(&holder->entry);
    return second + first;
}
}
