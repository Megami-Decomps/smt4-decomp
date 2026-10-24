/* NON_MATCHING: the final erase loop is rotated (the compiler duplicates the first!=last test at the bottom; retail jumps back to the top test) and the iterator temporary is stored after the argument registers are set up. */
#include "mobiclip/MoLiveObjectHandleMap.h"

/* __rb_tree::erase(first, last): clearing the whole tree recycles every node onto the free list (destroying the owned handles); a partial range erases node by node. */
