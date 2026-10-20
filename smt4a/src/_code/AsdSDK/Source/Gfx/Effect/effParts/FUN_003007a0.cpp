/* NON_MATCHING: store scheduling only: retail issues the last byte store before `mov r0, r4` (all three byte stores share r0/r1); armcc delays one past it. */
#include "AsdSDK/Source/Gfx/Effect/effParts.h"

#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char g_effPartsSourcePath[]; /* "c:\SMT4F\SMT4F\AsdSDK\Source\Gfx\Effect\effParts.cpp": __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
void sysMemClear(void *block, s32 size);
void FUN_001b4ddc(EffPart *part);

/* Creates the 0xC0-byte part variant: a cleared block whose first 0x90 bytes are cleared again, then flagged and initialized. */
EffPart *FUN_003007a0(void)
{
    EffPart *part;

    asdDebugTrace(g_effPartsSourcePath, 1462);
    part = (EffPart *)memAlloc(0x10000, 0x100, 0, 0xC0, 0x10, 1);
    sysMemClear(part, 0xC0);
    sysMemClear(part, 0x90);
    part->unk84 = 1;
    part->unk88 = 8;
    part->unk89 = 0;
    part->unk8a = 0;
    FUN_001b4ddc(part);
    return part;
}

} /* extern "C" */
