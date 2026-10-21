/* NON_MATCHING: -O2 candidate; block39 initialization fills the pre-getter NOP instead of retail's prologue; no declaration-order steering used. */
#include "gamedata/DataTable.h"

struct BinFile;
struct TbcrBlock;
struct DataTableFile;
struct ParameterPairRecord {
    u8 data[0x19c];
};

extern "C" {
u32 dataTableValueOrZero(u32 slot);
s32 binFileGetValue(BinFile* file);
TbcrBlock* FUN_002bf384(BinFile* file, u32 index);
s32 tbcrBlockGetPayload(TbcrBlock* block);
void* dataTableFileGetTable(DataTableFile* file, u32 index);
}

// Each category has three mode tables, with two parameter variants per table.
extern "C" void* dataTableSelectParameterVariant(s32 variant, u32 category, s32 invert, s32 mode)
{
    u32 tableIndex = 0;
    switch (category) {
    case 0: break;
    case 1: tableIndex = 3; break;
    case 2: tableIndex = 6; break;
    case 3: tableIndex = 9; break;
    case 4: tableIndex = 12; break;
    case 5: tableIndex = 15; break;
    case 6: tableIndex = 18; break;
    case 7: tableIndex = 21; break;
    case 8: tableIndex = 24; break;
    case 9: tableIndex = 27; break;
    case 10: tableIndex = 30; break;
    case 11: tableIndex = 33; break;
    case 12: tableIndex = 36; break;
    default: return NULL;
    }
    if (mode == 1) {
        ++tableIndex;
    } else if (mode == 6) {
        tableIndex += 2;
    }

    BinFile* file = reinterpret_cast<BinFile*>(dataTableValueOrZero(7));
    u32 blockIndex = 39;
    if (static_cast<u32>(binFileGetValue(file)) <= 39) {
        blockIndex = 0;
    }
    TbcrBlock* block = FUN_002bf384(file, blockIndex);
    if (static_cast<u32>(tbcrBlockGetPayload(block)) <= tableIndex) {
        tableIndex = 0;
    }
    void* table = dataTableFileGetTable(reinterpret_cast<DataTableFile*>(block), tableIndex);
    ParameterPairRecord* entries = static_cast<ParameterPairRecord*>(dataTableGetEntries(table));
    u32 recordIndex = 0;
    if (variant != 0) {
        recordIndex = 1;
    }
    if (invert != 0) {
        recordIndex = 1 - recordIndex;
    }
    return entries + recordIndex;
}
