/* NON_MATCHING: the bit-array update is inlined, but the build reassociates the byte address
 * and reloads the updated byte from memory instead of narrowing the stored register. */
#include "code/Code002c.h"
#include "util/BitsAndBytes.h"

enum { DISCOVERED_CELLS_OFFSET = 0x12F0 };

/* Sets a cell's discovery flag and reports whether it changed. */
extern "C" u8 MapNavi_SetDiscoveredCell(u32 cell, s32 discovered)
{
    u8 *bits = saveGetFlagRowTable() + DISCOVERED_CELLS_OFFSET;
    u8 previous = bits[cell >> 3];
    bitArrayWrite(bits, cell, discovered);
    return bits[cell >> 3] != previous;
}
