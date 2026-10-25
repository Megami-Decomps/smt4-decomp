/* NON_MATCHING: Effect-save entry copying is complete; keyed-record indexing and allocation-size/argument setup use different registers and scheduling. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct SavedEffectEntry {
    u32 words[5];
};
struct SavedEffectRecord {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ s32 count;
    /* 0x02C */ u8 unk02c[0x110];
    /* 0x13C */ SavedEffectEntry *entries;
    /* 0x140 */ u8 unk140[8];
};
extern "C" {
extern SavedEffectRecord g_keyedRecords[];
void *asdMemoryAlloc(u32 kind, u32 alignment, u32 flags, u32 size, s32 tracked);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
}

/* Copy at most 64 effect entries into the keyed save record. */
extern "C" void FUN_0031bae0(u32 key, const SavedEffectEntry *entries, s32 count)
{
    if (count > 64) {
        return;
    }
    SavedEffectRecord *record = &g_keyedRecords[key];
    if (count > 0) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\Effect\\EffectSave.c", 213);
        u32 size = count * sizeof(SavedEffectEntry);
        SavedEffectEntry *copy = static_cast<SavedEffectEntry *>(asdMemoryAlloc(256, 256, 0, size, 1));
        record->entries = copy;
        __aeabi_memcpy4(copy, entries, size);
    }
    record->count = count;
}
