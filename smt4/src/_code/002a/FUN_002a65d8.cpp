/* NON_MATCHING: Relative-resource iteration optimizes to a counted loop and literal type comparisons instead of the retail pointer loop. */
#include "gfx/VertexBufferTable.h"

extern "C" void FUN_002a65d8(VertexBufferTable* table, u32 value)
{
    GfxResourceDictionaryEntry* end = table->end();
    for (GfxResourceDictionaryEntry* entry = table->begin(); entry != end; ++entry) {
        VertexBufferResource* resource = entry->getResource();
        if (resource->flags == 0x20000009 || resource->flags == 0x20000011) {
            resource->unk30 = value;
        }
    }
}
