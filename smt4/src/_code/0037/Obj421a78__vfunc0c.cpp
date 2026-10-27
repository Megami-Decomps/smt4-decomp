/* NON_MATCHING: scheduling only: armcc hoists the count load above the dirty-flag clear; retail clears the flag first (retail keeps r0 live across it: a removed one-instruction setter strb r1,[r0,#270]; no source for a multifile member). */
#include "classes/Obj421a78.h"

/* Virtual slot: when flagged, clears the per-slot words of every active slot and drops the flag. */
void Obj421a78::vfunc0c()
{
    clearSlots();
}
