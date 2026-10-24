/* NON_MATCHING: retail stores through one base register into what looks like a single contiguous table (the two header pairs at 0x433e70 and the first record are written with strd/stm); the records are modelled here as separate externs (180 vs 193 rows). */
#include "common.h"

extern "C" {

/* One gradient/fade parameter record (0x28 bytes): three 2D points, a packed mode word and a
 * range pair. */
typedef struct FadeParams {
    /* 0x00 */ f32 start[2];
    /* 0x08 */ f32 end[2];
    /* 0x10 */ f32 mid[2];
    /* 0x18 */ u32 mode;
    /* 0x1C */ u8 unk1c[4];
    /* 0x20 */ f32 range[2];
} FadeParams;

extern s32 DAT_00433e70[2];
extern s32 DAT_00433e78[2];
extern FadeParams DAT_00433e80;
extern FadeParams DAT_00433ed0;
extern FadeParams DAT_00433f0c;
extern FadeParams DAT_00433f4c;
extern FadeParams DAT_00433f8c;
extern FadeParams DAT_00433fb4;
extern FadeParams DAT_00433fe8;
extern FadeParams DAT_00434028;
extern FadeParams DAT_00434068;
extern FadeParams DAT_004340a8;
extern FadeParams DAT_004340e8;
extern FadeParams DAT_00434128;

u32 packNibblesAndByte(u32 a, u32 b, u32 c);

/* Fills the fade parameter table: twelve records that all start from the unit square (0,0)-(1,1)
 * except the second, plus their packed mode words and range pairs. */
void FUN_003ef1e0(void)
{
    DAT_00433e70[0] = -1;
    DAT_00433e70[1] = -1;
    DAT_00433e78[0] = 0;
    DAT_00433e78[1] = 0;
    DAT_00433e80.start[0] = 0.0f;
    DAT_00433e80.start[1] = 0.0f;
    DAT_00433e80.end[0] = 1.0f;
    DAT_00433e80.end[1] = 1.0f;
    DAT_00433e80.mode = packNibblesAndByte(6, 1, 0);
    DAT_00433e80.range[0] = 0.0f;
    DAT_00433e80.range[1] = 0.002f;

    DAT_00433ed0.start[0] = 0.4140f;
    DAT_00433ed0.start[1] = 0.0f;
    DAT_00433ed0.end[0] = 0.0f;
    DAT_00433ed0.end[1] = 1.0f;
    DAT_00433ed0.mid[0] = 0.8280f;
    DAT_00433ed0.mid[1] = 1.0f;
    DAT_00433ed0.mode = packNibblesAndByte(6, 7, 0);
    DAT_00433ed0.range[0] = 0.0001f;
    DAT_00433ed0.range[1] = 0.0005f;

    DAT_00433f0c.start[0] = 0.0f;
    DAT_00433f0c.start[1] = 0.0f;
    DAT_00433f0c.end[0] = 1.0f;
    DAT_00433f0c.end[1] = 1.0f;
    DAT_00433f0c.mode = packNibblesAndByte(6, 1, 0);

    DAT_00433f4c.start[0] = 0.0f;
    DAT_00433f4c.start[1] = 0.0f;
    DAT_00433f4c.end[0] = 1.0f;
    DAT_00433f4c.end[1] = 1.0f;
    DAT_00433f4c.mode = packNibblesAndByte(6, 1, 0);
    DAT_00433f4c.range[0] = -0.07f;
    DAT_00433f4c.range[1] = 0.04f;

    DAT_00433f8c.start[0] = 0.0f;
    DAT_00433f8c.start[1] = 0.0f;
    DAT_00433f8c.end[0] = 1.0f;
    DAT_00433f8c.end[1] = 1.0f;
    DAT_00433f8c.mode = packNibblesAndByte(6, 1, 0);
    DAT_00433f8c.range[0] = 0.0f;
    DAT_00433f8c.range[1] = 0.001f;

    DAT_00433fb4.start[0] = 0.0f;
    DAT_00433fb4.start[1] = 0.0f;
    DAT_00433fb4.end[0] = 1.0f;
    DAT_00433fb4.end[1] = 1.0f;
    DAT_00433fb4.mode = packNibblesAndByte(6, 1, 0);
    DAT_00433fb4.range[0] = 0.0f;
    DAT_00433fb4.range[1] = 0.004f;

    DAT_00433fe8.start[0] = 0.0f;
    DAT_00433fe8.start[1] = 0.0f;
    DAT_00433fe8.end[0] = 1.0f;
    DAT_00433fe8.end[1] = 1.0f;
    DAT_00433fe8.mode = packNibblesAndByte(6, 7, 0);
    DAT_00433fe8.range[0] = 0.0f;
    DAT_00433fe8.range[1] = 0.0f;

    DAT_00434028.start[0] = 0.0f;
    DAT_00434028.start[1] = 0.0f;
    DAT_00434028.end[0] = 1.0f;
    DAT_00434028.end[1] = 1.0f;
    DAT_00434028.mode = packNibblesAndByte(6, 7, 0);
    DAT_00434028.range[0] = 0.0f;
    DAT_00434028.range[1] = 0.0f;

    DAT_00434068.start[0] = 0.0f;
    DAT_00434068.start[1] = 0.0f;
    DAT_00434068.end[0] = 1.0f;
    DAT_00434068.end[1] = 1.0f;
    DAT_00434068.mode = packNibblesAndByte(6, 1, 0);
    DAT_00434068.range[0] = 0.0f;
    DAT_00434068.range[1] = 0.0f;

    DAT_004340a8.start[0] = 0.0f;
    DAT_004340a8.start[1] = 0.0f;
    DAT_004340a8.end[0] = 1.0f;
    DAT_004340a8.end[1] = 1.0f;
    DAT_004340a8.mode = packNibblesAndByte(5, 0, 1);
    DAT_004340a8.range[0] = 0.0f;
    DAT_004340a8.range[1] = 0.0f;

    DAT_004340e8.start[0] = 0.0f;
    DAT_004340e8.start[1] = 0.0f;
    DAT_004340e8.end[0] = 1.0f;
    DAT_004340e8.end[1] = 1.0f;
    DAT_004340e8.mode = packNibblesAndByte(6, 7, 0);
    DAT_004340e8.range[0] = 0.0f;
    DAT_004340e8.range[1] = 0.0f;

    DAT_00434128.start[0] = 0.0f;
    DAT_00434128.start[1] = 0.0f;
    DAT_00434128.end[0] = 1.0f;
    DAT_00434128.end[1] = 1.0f;
    DAT_00434128.mode = packNibblesAndByte(6, 1, 0);
    DAT_00434128.range[0] = 0.0f;
    DAT_00434128.range[1] = 0.0f;
}

}
