/* NON_MATCHING: retail clears all four rotation words and then stores w = 1 (an inlined clear followed by the identity); armcc drops the first w store. */
#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

extern "C" {

extern struct {
    /* 0x000 */ u8 unk000[0x88];
    /* 0x088 */ u8 mode;
    /* 0x089 */ u8 unk089;
    /* 0x08A */ u8 unk08a;
    /* 0x08B */ u8 unk08b[0x6b5];
    /* 0x740 */ Vec4 rotation;
} DAT_004d8b40;

/* Virtual slot: resets the display state (mode 8, identity rotation). */
void FUN_00324970(void)
{
    DAT_004d8b40.mode = 8;
    DAT_004d8b40.unk089 = 0;
    DAT_004d8b40.unk08a = 0;
    DAT_004d8b40.rotation.x = 0;
    DAT_004d8b40.rotation.y = 0;
    DAT_004d8b40.rotation.z = 0;
    DAT_004d8b40.rotation.w = 1.0f;
}

} /* extern "C" */
