#include "shard/S1NwSnd.h"

// Copy the two-word value without changing its representation.
extern "C" void listNodeCopy(ListNode *destination, const ListNode *source)
{
    *destination = *source;
}
