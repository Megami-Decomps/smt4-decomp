/* NON_MATCHING: written as its Apocalypse twin Obj55bccc::Obj55bccc: retail clears each array's capacity word as two
 * read-modify-writes (and #0xC0000000, then bic) where armcc folds them into a zero store, and orders the first
 * stores differently. */
#include "classes/Obj4218b0.h"

/* Starts with every word cleared and the five arrays empty. */
Obj4218b0::Obj4218b0(u32 second, u32 third, u32 first)
    : first(first), second(second), third(third), unk60(0), unk64(0)
{
}
