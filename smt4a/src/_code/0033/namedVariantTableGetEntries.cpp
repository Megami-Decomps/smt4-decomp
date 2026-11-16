#include "gamedata/NamedVariantTable.h"
#include <string.h>

extern "C" {
extern const NamedVariantTableKey g_namedVariantTableKeys[527];
void *dataTableValueOrZero(u32 table);
u32 binFileGetValue(void *file);
void *fbinGetFile(void *file, u32 block);
u32 tbcrBlockGetPayload(void *block);
void *dataTableFileGetTable(void *block, u32 table);
NamedVariantTableEntry *dataTableGetEntries(void *table);
}

static inline NamedVariantTableEntry *namedVariantResolve(u32 blockIndex, u32 tableIndex)
{
    void *file = dataTableValueOrZero(7);
    if (binFileGetValue(file) <= blockIndex)
        blockIndex = 0;
    void *block = fbinGetFile(file, blockIndex);
    if (tbcrBlockGetPayload(block) <= tableIndex)
        tableIndex = 0;
    return dataTableGetEntries(dataTableFileGetTable(block, tableIndex));
}

static inline const NamedVariantTableKey *namedVariantFind(const char *name)
{
    const NamedVariantTableKey *key = g_namedVariantTableKeys;
    for (s32 index = 0; index < 527; ++index, ++key) {
        if (strcmp(name, key->name) == 0)
            return key;
    }
    return NULL;
}

extern "C" {
// Resolve a named table section, falling back to section zero, then select either variant.
NamedVariantTableEntry *namedVariantTableGetEntries(s32 variant, const char *name, s32 invert)
{
    const NamedVariantTableKey *key = namedVariantFind(name);
    NamedVariantTableEntry *entries;
    if (key) {
        u32 block = key->block;
        u32 table = key->table;
        entries = namedVariantResolve(block, table);
    } else
        entries = namedVariantResolve(0, 0);
    u32 selected = 0;
    if (variant)
        selected = 1;
    if (invert)
        selected = 1 - selected;
    return entries + selected;
}
}
