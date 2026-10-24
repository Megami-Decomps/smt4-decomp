#include "common.h"

extern "C" {

void tableFireMatchingEntries(u32 matchId);

/* Forwards to tableFireMatchingEntries (the tail call falls through to the next function). */
void tableFireMatchingEntriesThunk(u32 matchId)
{
    tableFireMatchingEntries(matchId);
}

} /* extern "C" */
