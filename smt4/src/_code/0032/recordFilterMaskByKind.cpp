#include "common.h"

struct KindRecord {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ u8 kind;   /* low 7 bits: kind; bit 7: flag */
};

extern "C" {

/* The bits of `mask` that the record's kind accepts: grouped kinds accept several bits, kind 14 all of
 * them, any other kind only its own bit. */
u32 recordFilterMaskByKind(const KindRecord *record, u32 mask)
{
    u32 result = 0;

    if ((record->kind & 0x7F) != 0 && mask != 0) {
        u32 kind = record->kind & 0x7F;

        if (kind == 12) {
            if (mask & 0x20) {
                result = 0x20;
            }
            if (mask & 0x40) {
                result |= 0x40;
            }
            if (mask & 0x80) {
                result |= 0x80;
            }
            if (mask & 0x100) {
                result |= 0x100;
            }
            if (mask & 0x200) {
                result |= 0x200;
            }
            return result;
        } else if (kind == 13) {
            if (mask & 0x80) {
                result = 0x80;
            }
        } else if (kind == 18) {
            if (mask & 0x40) {
                result = 0x40;
            }
            if (mask & 0x80) {
                result |= 0x80;
            }
            if (mask & 0x100) {
                result |= 0x100;
            }
        } else if (kind == 14) {
            result = mask;
        } else if (kind == 21) {
            if (mask & 0x20) {
                result = 0x20;
            }
            if (mask & 0x200) {
                result |= 0x200;
            }
        } else if (mask & (1 << kind)) {
            result = (u16)(1 << kind);
        }
    }
    return result;
}

} /* extern "C" */
