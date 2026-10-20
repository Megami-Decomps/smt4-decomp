#include "common.h"

extern "C" {

struct VoiceBody;

typedef struct Voice {
    u8 unk00[0x68];
    struct VoiceBody *body;        /* 0x68 */
} Voice;

void FUN_0015e3c4(struct VoiceBody *body, u32 set);

/* Passes the voice's body on to FUN_0015e3c4, the function that follows it. */
void FUN_0015e3bc(Voice *voice, u32 set)
{
    FUN_0015e3c4(voice->body, set);
}

} /* extern "C" */
