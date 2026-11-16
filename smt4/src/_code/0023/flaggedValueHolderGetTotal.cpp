#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "shard/Shard004A.h"

extern "C" {
u32 resourceRunOperationIfUnblocked(const FlaggedEntry *entry);
u32 resourceRunEmbeddedOperationIfUnblocked(const FlaggedEntry *entry);
u32 flaggedEntryGetValueA(const FlaggedEntry *entry);
u32 flaggedEntryGetValueB(const FlaggedEntry *entry);

u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder)
{
    u32 first = holder->kind == 1 ? resourceRunEmbeddedOperationIfUnblocked(&holder->entry)
                                  : resourceRunOperationIfUnblocked(&holder->entry);
    u32 second = holder->kind == 1 ? flaggedEntryGetValueB(&holder->entry)
                                   : flaggedEntryGetValueA(&holder->entry);
    return second + first;
}
}
