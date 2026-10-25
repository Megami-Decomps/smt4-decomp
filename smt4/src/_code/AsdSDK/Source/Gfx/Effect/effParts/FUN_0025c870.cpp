/* NON_MATCHING: stores of unk88..unk8a use r2/r1 for the constants where retail uses r1/r0 and schedules `mov r0, r4` before the last strb. */
#include "AsdSDK/Source/Gfx/Effect/effParts.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern const char g_effPartsSourcePath[]; /* "c:\SMT4\XRD686\sdds4\Patch\AsdSDK\Source\Gfx\Effect\effParts.cpp": __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
void FUN_002a3d58(EffPart *part);

/* Creates the 0xC0-byte variant of a part: cleared, its first 0x90 bytes cleared again, flags set, initialized. */
EffPart *FUN_0025c870(void)
{
    EffPart *part;

    asdDebugTrace(g_effPartsSourcePath, 1482);
    part = (EffPart *)memAlloc(0x10000, 0x100, 0, 0xc0, 0x10, 1);
    memClear(part, 0xc0);
    memClear(part, 0x90);
    part->unk84 = 1;
    part->unk88 = 8;
    part->unk89 = 0;
    part->unk8a = 0;
    FUN_002a3d58(part);
    return part;
}

} /* extern "C" */
