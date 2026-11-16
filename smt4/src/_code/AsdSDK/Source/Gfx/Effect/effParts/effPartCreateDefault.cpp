#include "AsdSDK/Source/Gfx/Effect/effParts.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern const char g_effPartsSourcePath[]; /* "c:\SMT4\XRD686\sdds4\Patch\AsdSDK\Source\Gfx\Effect\effParts.cpp": __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
void effPartInitDefaults(EffPart *part);

/* Allocates a cleared 0xC0-byte part. */
static __inline EffPart *effPartAlloc(void)
{
    EffPart *part;

    asdDebugTrace(g_effPartsSourcePath, 1482);
    part = (EffPart *)memAlloc(0x10000, 0x100, 0, 0xc0, 0x10, 1);
    memClear(part, 0xc0);
    return part;
}

/* Creates the 0xC0-byte variant of a part: cleared, its first 0x90 bytes cleared again, flags set, initialized. */
EffPart *effPartCreateDefault(void)
{
    EffPart *part = effPartAlloc();

    memClear(part, 0x90);
    part->unk84 = 1;
    part->unk88 = 8;
    part->unk89 = 0;
    part->unk8a = 0;
    effPartInitDefaults(part);
    return part;
}

} /* extern "C" */
