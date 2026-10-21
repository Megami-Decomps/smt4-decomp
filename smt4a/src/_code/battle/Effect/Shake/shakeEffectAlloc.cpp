#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

typedef struct ShakeEffect {
    u32 unk00; /* 0x00 */
    u32 unk04; /* 0x04 */
    u32 unk08; /* 0x08 */
    u32 unk0c; /* 0x0c */
    u32 unk10; /* 0x10 */
} ShakeEffect;

extern void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Allocates a zeroed shake effect from the back of the main heap. */
ShakeEffect *shakeEffectAlloc(void)
{
    ShakeEffect *shake;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\Effect\\Shake.c", 35);
    shake = (ShakeEffect *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(ShakeEffect), 0);
    shake->unk00 = 0;
    shake->unk04 = 0;
    shake->unk08 = 0;
    shake->unk0c = 0;
    shake->unk10 = 0;
    return shake;
}

} /* extern "C" */
