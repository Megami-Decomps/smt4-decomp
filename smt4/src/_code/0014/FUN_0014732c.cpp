#include "common.h"

extern "C" {

struct VoiceBody;

typedef struct Voice {
    u8 unk00[0x68];
    struct VoiceBody *body;        /* 0x68 */
} Voice;

void FUN_00147334(struct VoiceBody *body, u32 mode);

/* Passes the voice's body on to FUN_00147334, the function that follows it. */
void FUN_0014732c(Voice *voice, u32 mode)
{
    FUN_00147334(voice->body, mode);
}

} /* extern "C" */
