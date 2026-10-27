#include "Model/MoriModelUnit.h"
#include "Model/IdArraySize.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00526108[];
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 kind, u32 bytes, u32 flags);
void idArrayConstruct(IdArray *array, u16 *values, u32 count);

// Initialize a model unit and allocate its optional invalid-ID array.
void moriModelChannelInitialize(MoriModelUnit *unit, s32 count)
{
    unit->unk00 = 0;
    unit->unk04 = 0.0f;
    unit->unk08 = 0.0f;
    unit->unk0c = 0;
    unit->indexStorage = NULL;
    unit->unk2c = 0;
    unit->enabled = 1;
    unit->count = count;
    if (count > 0) {
        u32 bytes = idArrayByteSize(count);
        asdDebugTrace(DAT_00526108, 424);
        unit->indexStorage = static_cast<u16 *>(asdMemoryAlloc(0x10000, 0x100, 0, bytes, 1));
        idArrayConstruct(&unit->indices, unit->indexStorage, count);
    }
}
}
