/* NON_MATCHING: retail has one full jump table; compiler partitions the switch into smaller tables and comparisons. */
#include "common.h"

// Classify map object kinds for the creation flag used by map-marker setup.
extern "C" u32 FUN_00356528(u32 kind)
{
    switch (kind) {
    default:
        return 1;
    case 0xE:
    case 0x11:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1F:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x2F:
    case 0x32:
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x4B:
        return 0;
    }
}
