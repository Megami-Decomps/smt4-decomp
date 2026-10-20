/* NON_MATCHING: retail copies the id byte (+0x25) to a stack temp (strb to sp) before taking its high nibble; built keeps it in a register */
#include "common.h"

extern "C" {

/* A byte split into two nibbles. */
typedef struct NibbleByte {
    u8 low : 4;
    u8 high : 4;
} NibbleByte;

typedef struct Part002f2c0a {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ NibbleByte ids;
} Part002f2c0a;

typedef struct Object002f2c0a {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Part002f2c0a part;
    /* 0x26 */ u8 unk26[0x16];
    /* 0x3c */ u16 flags;     /* low nibble: kind */
} Object002f2c0a;

typedef struct Record002f2c0a {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u8 flag;
} Record002f2c0a;

Record002f2c0a *FUN_002eac34(u8 id);

/* True when the object's kind is not 3 or 7 and the record for its high id nibble has its flag set. */
u32 FUN_002f2c0a(Object002f2c0a *object)
{
    u32 kind = object->flags & 0xf;

    if (kind != 7 && kind != 3) {
        Part002f2c0a *part = &object->part;
        NibbleByte ids = part->ids;

        if (FUN_002eac34(ids.high)->flag != 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
