#ifndef SHARD_W6_W6MATCH6_RESOURCE_ID_H
#define SHARD_W6_W6MATCH6_RESOURCE_ID_H
#include "common.h"

struct PackedResourceId {
    s32 value;
};

static __inline bool resourceIdInRange(s32 value, s32 category, s32 first, s32 end)
{
    return ((value & 0x3fc00) >> 10) == category &&
           (value & 0x3ff) >= first && (value & 0x3ff) < end;
}

// Map legacy packed resource identifiers to the replacement resource set.
static __inline u32 remapLegacyResourceId(const PackedResourceId *resource)
{
    s32 value = resource->value;
    if (value == 0)
        return 0;
    switch ((resource->value & 0x3fc00) >> 10) {
    case 0x11:
        return resourceIdInRange(value, 0x11, 0x104, 0x118) ? 0xc8a13909 : 0xc9413915;
    case 0x20:
        switch (value) {
        case (s32)0xc8a08035: return 0xc8613916;
        }
        break;
    case 0x28:
    case 0x2e:
        break;
    case 0x34:
        if (resourceIdInRange(value, 0x34, 100, 300)) {
            switch (value) {
            case (s32)0xc860d069: return 0xc8613914;
            case (s32)0xc860d06e: return 0xc8613913;
            case (s32)0xc900d075: return 0xc8a13905;
            case (s32)0xc920d073: return 0xc941390a;
            case (s32)0xc920d086: return 0xc941390c;
            case (s32)0xc920d08c: return 0xc941390e;
            case (s32)0xc920d08f: return 0xc941390b;
            case (s32)0xc920d095: return 0xc941390d;
            case (s32)0xc920d0a4: return 0xc941390f;
            case (s32)0xc920d0a7: return 0xc9413910;
            case (s32)0xc920d0a8: return 0xc9413940;
            case (s32)0xe0a0d0a9: return 0xc94138c2;
            case (s32)0xe0c0d066: return 0xe0c13897;
            case (s32)0xe0e0d068: return 0xe0e1388f;
            }
        }
        switch (value) {
        case (s32)0xc8a0d018: return 0xc9413917;
        case (s32)0xd860d020: return 0xd861388e;
        case (s32)0xd860d024: return 0xd861389a;
        case (s32)0xd880d023: return 0xd8813896;
        }
        break;
    }
    return value;
}
#endif
