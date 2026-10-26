/* NON_MATCHING: switch on the type matches retail's cmp/sub/subs chain; remaining diff: retail keeps the zero in ip, reloads the table header per inline begin()/end() and does not fuse the null tests into adds. */
#include "gfx/VertexBufferTable.h"

extern "C" void FUN_001b4288(VertexBufferTable* table, u32 value)
{
    GfxResourceDictionaryEntry* end = table->end();
    for (GfxResourceDictionaryEntry* entry = table->begin(); entry != end; ++entry) {
        VertexBufferResource* resource = entry->getResource();
        switch (resource->flags) {
        case 0x20000009:
        case 0x20000011:
            resource->unk30 = value;
            break;
        }
    }
}
