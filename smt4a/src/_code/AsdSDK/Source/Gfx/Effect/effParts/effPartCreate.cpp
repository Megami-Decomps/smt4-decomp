#include "AsdSDK/Source/Gfx/Effect/effParts.h"

#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/effPartCreate.h"

extern "C" {
extern const char g_effPartsSourcePath[]; /* "c:\SMT4F\SMT4F\AsdSDK\Source\Gfx\Effect\effParts.cpp": __FILE__ */


void *memAlloc(int, int, int, int size, int align, int);
void sysMemClear(void *block, s32 size);
void FUN_001b4ddc(EffPart *part);

/* Creates a part object: a zeroed 0x90-byte block with unk80/unk84 cleared, then initialized. */
EffPart *effPartCreate(void)
{
    asdDebugTrace(g_effPartsSourcePath, 1443);
    EffPart *part = (EffPart *)memAlloc(0x10000, 0x100, 0, 0x90, 0x10, 1);

    sysMemClear(part, 0x90);
    part->unk80 = 0;
    part->unk84 = 0;
    FUN_001b4ddc(part);
    return part;
}

} /* extern "C" */
