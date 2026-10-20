#include "common.h"

extern "C" {

typedef struct VoiceBody {
    /* 0x00 */ u8 unk00[0x1e];
    /* 0x1E */ u16 flags;
} VoiceBody;

/* Sets or clears bit 4 of the flags halfword at +0x1e. */
void FUN_0015e3c4(VoiceBody *body, u32 set)
{
    body->flags = (body->flags & ~0x10) | (set << 4);
}

} /* extern "C" */
