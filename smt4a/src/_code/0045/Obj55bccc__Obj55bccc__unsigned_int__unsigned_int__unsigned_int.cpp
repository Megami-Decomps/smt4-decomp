/* NON_MATCHING: with the five arrays as members constructed empty, the stores come in retail's order; retail clears each slot array's capacity word as two read-modify-writes (and #0xC0000000, then bic) where armcc folds them into a zero store, and stores `first` before loading the vtable (the build: after `second`). */
#include "classes/Obj55bccc.h"

/* Starts with every word cleared and the five arrays empty. */
Obj55bccc::Obj55bccc(u32 second, u32 third, u32 first)
    : first(first), second(second), third(third), unk60(0), unk64(0)
{
}
