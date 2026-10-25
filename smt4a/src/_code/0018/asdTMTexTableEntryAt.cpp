#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* Returns the table entry (0x14 bytes) of texture `index` in the TMX file of table `file`. */
TextureTableEntryIV *asdTMTexTableEntryAt(u32 file, s32 index)
{
    TextureTableFilePrefixIV *table = reinterpret_cast<TextureTableFilePrefixIV *>(asdTMTexTableCallFileC(file, index));
    s32 slot = index % 1000;
    return &(*table->entries)[slot];
}

}
