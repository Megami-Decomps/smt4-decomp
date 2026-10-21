#include "shard/Shard003E.h"

extern "C" {

typedef struct ValueAtF0 {
    /* 0x00 */ u8 unk00[0xF0];
    /* 0xF0 */ s32 unkF0;
} ValueAtF0;

extern s32 gameProgressIsAdvanced(void);

/* True when gameProgressIsAdvanced says so and the object's value at +0xF0 is not negative. */
u32 valueAtF0IsReady(ValueAtF0 *obj)
{
    if (gameProgressIsAdvanced() == 0 || obj->unkF0 < 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
