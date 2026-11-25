/* NON_MATCHING: the build compares capacity in r3 rather than preserving it in ip and combines the two
 * unwrapped-position stores instead of predicating the nonwrapped case. */
#include "util/ByteRing.h"

/* Returns the end cursor, using a position past capacity when unread bytes wrap around the ring. */
extern "C" ByteRingCursor FUN_0022bc54(ByteRing *ring)
{
    u32 writeOffset = ring->writeOffset;
    if (ring->occupied == 0) {
        return ByteRingCursor(ring, NULL, writeOffset);
    }
    if (writeOffset == 0 || writeOffset == ring->capacity) {
        return ByteRingCursor(ring, ring->begin, ring->capacity);
    }
    ByteRingCursor end(ring, ring->begin + writeOffset, writeOffset);
    if (writeOffset <= ring->readOffset) {
        end.position += ring->capacity;
    }
    return end;
}
