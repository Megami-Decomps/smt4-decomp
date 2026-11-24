#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexResource.h"
#include "addon/AocSlot.h"
#include "addon/AocSystemA.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"

extern "C" {

/* Releases the slot's texture node and handle and marks the slot inactive. */
void aocSlotRelease(AocSlot *slot)
{
    if (slot != NULL && slot->handle != AOC_SLOT_NO_HANDLE && slot->active != 0) {
        asdTMTexTableReleaseNode(slot->textureTable, slot->handle);
        packageFileDisableByKindName((u32)g_aocSystem, slot->textureTable, slot->handle);
        slot->handle = AOC_SLOT_NO_HANDLE;
        slot->active = 0;
    }
}

} /* extern "C" */
