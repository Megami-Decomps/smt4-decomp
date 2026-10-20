#include "common.h"

extern "C" {

struct Body;

typedef struct Voice00439fa4 {
    u8 unk00[5];
    u8 value;                      /* 0x05 */
    u8 unk06[0x62];
    struct Body *body;             /* 0x68 */
} Voice00439fa4;

void FUN_00439fb0(struct Body *body, u8 value);

/* Stores the value on the voice, then passes it to FUN_00439fb0 (the function that follows it) for the voice's body. */
void FUN_00439fa4(Voice00439fa4 *voice, u8 value)
{
    voice->value = value;
    FUN_00439fb0(voice->body, value);
}

} /* extern "C" */
