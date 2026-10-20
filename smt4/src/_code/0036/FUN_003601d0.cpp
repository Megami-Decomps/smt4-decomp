/* Sets the value on the body object and flags it as changed (bit 5). */
#include "common.h"

extern "C" {

typedef struct Body {
    /* 0x00 */ u8 unk00[0xe];
    /* 0x0E */ u8 value;
    /* 0x0F */ u8 unk0f[0x5d];
    /* 0x6C */ u16 flags;
} Body;

void FUN_003601d0(Body *body, u8 value)
{
    body->value = value;
    body->flags |= 0x20;
}

}
