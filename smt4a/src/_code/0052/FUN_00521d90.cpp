/* NON_MATCHING: Overlap-safe shared-callable assignment is complete; forward/reverse range traversal and assignment scratch registers differ from retail. */
#include "sys/SharedCallable.h"

/* Share a range of callable slots, traversing backwards when ranges overlap that way. */
extern "C" void FUN_00521d90(SharedCallableSlot *destination, SharedCallableSlot *source, u32 count)
{
    if (count == 0) {
        return;
    }
    if (destination <= source) {
        do {
            *destination++ = *source++;
        } while (--count != 0);
    } else {
        destination += count;
        source += count;
        do {
            --destination;
            --source;
            *destination = *source;
        } while (--count != 0);
    }
}
