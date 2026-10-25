#include "AsdSDK/Source/Gfx/Effect/effParts.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/effPartCreate.h"

extern "C" {

extern const char g_effPartsSourcePath[]; /* "c:\SMT4\XRD686\sdds4\Patch\AsdSDK\Source\Gfx\Effect\effParts.cpp": __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
void FUN_002a3d58(EffPart *part);

/* Creates a part object: a zeroed 0x90-byte block with unk80/unk84 cleared, then initialized. */
EffPart *effPartCreate(void)
{
    EffPart *part;

    asdDebugTrace(g_effPartsSourcePath, 1463);
    part = (EffPart *)memAlloc(0x10000, 0x100, 0, 0x90, 0x10, 1);
    memClear(part, 0x90);
    part->unk80 = 0;
    part->unk84 = 0;
    FUN_002a3d58(part);
    return part;
}

} /* extern "C" */
