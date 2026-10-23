/* NON_MATCHING: compiler splits the sparse cases; retail uses one zero-based jump table through category 60. */
#include "common.h"

// These categories belong to the exceptional group; all others use the default group.
extern "C" u32 FUN_002e0164(u32 category)
{
    switch (category) {
    case 0x0E: case 0x11: case 0x14: case 0x16:
    case 0x17: case 0x19: case 0x1F: case 0x25:
    case 0x26: case 0x28: case 0x2E: case 0x2F:
    case 0x30: case 0x31: case 0x32: case 0x33:
    case 0x34: case 0x35: case 0x36: case 0x37:
    case 0x3C:
        return 0;
    default:
        return 1;
    }
}
