#include "common.h"

extern "C" {

typedef struct VoiceBody {
    /* 0x00 */ u8 unk00[0x1e];
    /* 0x1E */ u16 flags;
} VoiceBody;

/* Replaces the low two bits of the flags halfword at +0x1e. */
void FUN_00147334(VoiceBody *body, u32 mode)
{
    body->flags = (body->flags & ~3) | (mode & 3);
}

} /* extern "C" */
