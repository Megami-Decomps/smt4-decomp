/* NON_MATCHING: bit update is instruction-for-instruction equivalent, but byte-buffer/mask registers and bit-index scheduling differ. Candidate O2. */
#include "common.h"

struct ResourceNameDictionary {
    u16 count;  // 0x00
    u16 unk02;  // 0x02
    void* nodes; // 0x04
};

struct NamedFlagResource {
    u8 unk00[0x88]; // 0x00
    ResourceNameDictionary names; // 0x88
};

struct NamedFlagObject {
    u8 unk000[0x114]; // 0x000
    u8* bits;         // 0x114
    u8 unk118[0xf8];  // 0x118
    NamedFlagResource* resource; // 0x210
};

extern "C" u32 wstrlen(const char*);
extern "C" u32 FUN_001a7a20(ResourceNameDictionary*, const char*, u32);

// Resolve a named entry and update its bit only when the dictionary contains it.
extern "C" void resourceObjectSetNamedFlag(NamedFlagObject* object, const char* name, s32 enabled)
{
    NamedFlagResource* resource = object->resource;
    u32 index = FUN_001a7a20(&resource->names, name, wstrlen(name));
    if (index != 0xffff) {
        u8* bits = object->bits;
        u32 value = bits[index >> 3];
        u32 mask = 1u << (index & 7);
        if (enabled == 0) {
            value &= ~mask;
        } else {
            value |= mask;
        }
        bits[index >> 3] = value;
    }
}
