/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df754` (_code @ 0x2df754, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001568f8. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_00183bb0. */
extern int FUN_003ec620(int, unsigned int);
/* Supplied declaration required: FUN_0041a534. */
/* Supplied declaration required: FUN_0041a834. */


unsigned int FUN_002df754(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  
  temp_v0 = FUN_00164a9c();
  FUN_00183bb0();
  temp_v7 = 0.0f;
  temp_v10 = 2.0f;
  temp_v9 = 1.0f;
  temp_v3 = 4;
  temp_v8 = temp_v7;
  do {
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 == temp_v8) << 0x1e);
    if ((((romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) &&
         (temp_v4 = *(int *)(temp_v0 + 0x1ed4) + temp_v3 * 0x1d0, temp_v4 != 0)) &&
        (temp_v1 = *(unsigned int *)(temp_v4 + 0x50), (temp_v1 & 0x40001) != 0 && (temp_v1 & 2) != 0)) &&
       ((((temp_v1 & 0x4000) == 0 && ((*(unsigned short *)(temp_v4 + 0x60) & 0x800) != 0)) &&
        ((temp_v1 & 0x100000) == 0)))) {
      if ((temp_v1 & 0x200000) != 0) {
        temp_v11 = *(float *)(temp_v4 + 0x1b0);
        temp_v12 = *(float *)(temp_v4 + 0x1b4);
        VectorUnsignedToFloat(*(unsigned int *)(temp_v4 + 0x6c) & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v13 = temp_v8;
        FUN_0041a834(temp_v4 + 0x128,&temp_v11);
      }
      else {
        temp_v2 = temp_v0;
        FUN_001568f8(temp_v0,(int)*(short *)(temp_v4 + 0x6a));
        temp_v2 = FUN_003ec620(temp_v0,*(unsigned int *)(temp_v2 + 0xc));
        temp_v13 = *(float *)(temp_v4 + 0x14);
        temp_v1 = (unsigned int)*(unsigned short *)(*(int *)(temp_v2 + 0x10) + 0x26);
        temp_v5 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = (float)VectorSignedToFloat(0x8f - ((int)*(short *)(*(int *)(temp_v2 + 0x10) + 0x22) +
                                                  temp_v1),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v11 = *(float *)(temp_v4 + 0xc) + *(float *)(temp_v4 + 0x1b0);
        temp_v12 = *(float *)(temp_v4 + 0x10) +
                   temp_v6 * *(float *)(temp_v4 + 0x40) + temp_v5 * *(float *)(temp_v4 + 0x40) +
                   *(float *)(temp_v4 + 0x40) * temp_v10 + *(float *)(temp_v4 + 0x1b4);
        VectorUnsignedToFloat(*(unsigned int *)(temp_v4 + 0x6c) & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_0041a534(temp_v4 + 0x128,&temp_v11);
        if ((*(unsigned int *)(temp_v4 + 0x50) & 0x10) != 0) {
          temp_v7 = temp_v9;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x36);
  return 0;
}
