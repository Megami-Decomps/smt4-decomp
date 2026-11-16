#include "common.h"

struct ResourceStatusKind { u8 unk00[0x3a]; u8 kind; };

extern "C" {
// Select the requested status ailments that the resource's cure kind affects.
u16 FUN_003d2b2c(const ResourceStatusKind *resource, u16 ailments)
{
    u16 result = 0;
    if ((resource->kind & 0x7f) != 0 && ailments != 0) {
        u32 kind = resource->kind & 0x7f;
        if (kind == 22) {
            if (ailments & 0x20) result = 0x20;
            if (ailments & 0x40) result |= 0x40;
            if (ailments & 0x80) result |= 0x80;
            if (ailments & 0x100) result |= 0x100;
            if (ailments & 0x200) result |= 0x200;
            if (ailments & 0x800) result |= 0x800;
            if (ailments & 0x1000) result |= 0x1000;
            if (ailments & 0x2000) result |= 0x2000;
            return result;
        } else if (kind == 23) {
            if (ailments & 0x80) result = 0x80;
        } else if (kind == 28) {
            if (ailments & 0x40) result = 0x40;
            if (ailments & 0x80) result |= 0x80;
            if (ailments & 0x100) result |= 0x100;
            if (ailments & 0x800) result |= 0x800;
            if (ailments & 0x1000) result |= 0x1000;
            if (ailments & 0x2000) result |= 0x2000;
        } else if (kind == 24) {
            result = ailments;
        } else if (kind == 31) {
            if (ailments & 0x20) result = 0x20;
            if (ailments & 0x200) result |= 0x200;
        } else {
            if (ailments & (1 << kind)) result = 1 << kind;
        }
    }
    return result;
}
}
