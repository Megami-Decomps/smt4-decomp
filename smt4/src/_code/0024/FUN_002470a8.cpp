/* NON_MATCHING: block/table saved registers and default-table block placement differ; final variant selection is shared later. */
#include "gamedata/NamedVariantTable.h"
#include "gamedata/DataTable.h"

extern "C" {
extern NamedVariantTableKey DAT_00439d20[455];
s32 libc_strcmp(const char *left, const char *right);
void *fileSlotGetBuffer(u32 slot);
u32 binFileGetValue(const void *file);
void *FUN_0024ba44(void *file, u32 block);
u32 tbcrBlockGetPayload(const void *block);
void *dataTableFileGetTable(void *block, u32 table);
}

static __inline const NamedVariantTableKey *findVariantKey(const char *name)
{
    const NamedVariantTableKey *key = DAT_00439d20;
    for (s32 index = 0; index < 455; ++index, ++key) {
        if (libc_strcmp(name, key->name) == 0) {
            return key;
        }
    }
    return NULL;
}

// Select a named table's first or second variant, falling back to the default table.
extern "C" NamedVariantTableEntry *FUN_002470a8(s32 alternate, const char *name, s32 invert)
{
    const NamedVariantTableKey *key = findVariantKey(name);
    NamedVariantTableEntry *entries;
    if (key != NULL) {
        u32 blockIndex = key->block;
        u32 tableIndex = key->table;
        void *file = fileSlotGetBuffer(7);
        if (binFileGetValue(file) <= blockIndex) {
            blockIndex = 0;
        }
        void *block = FUN_0024ba44(file, blockIndex);
        if (tbcrBlockGetPayload(block) <= tableIndex) {
            tableIndex = 0;
        }
        entries = reinterpret_cast<NamedVariantTableEntry *>(dataTableGetEntries(dataTableFileGetTable(block, tableIndex)));
    } else {
        void *file = fileSlotGetBuffer(7);
        binFileGetValue(file);
        void *block = FUN_0024ba44(file, 0);
        tbcrBlockGetPayload(block);
        entries = reinterpret_cast<NamedVariantTableEntry *>(dataTableGetEntries(dataTableFileGetTable(block, 0)));
    }
    u32 variant = alternate != 0;
    if (invert != 0) {
        variant = 1 - variant;
    }
    return entries + variant;
}
