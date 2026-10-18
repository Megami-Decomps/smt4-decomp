/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb2c8` (_code @ 0x3eb2c8, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003eb2c8(unsigned int *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  long long temp_v1;
  long long temp_v2;
  long long temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int unaff_r4;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  
  if (0xfeffffff < param_2 * 2) {
    *param_1 = 0xffffffff;
    return;
  }
  temp_v5 = (param_2 << 8) | 0x80000000;
  temp_v8 = ((param_2 & 0x7fffffff) >> 0x17) - 0x78;
  temp_v7 = temp_v8 & 0x1f;
  temp_v0 = (int)temp_v8 >> 5;
  temp_v9 = 0x20 - temp_v7;
  temp_v4 = temp_v0 * 4;
  temp_v1 = (unsigned long long)temp_v5 *
          (unsigned long long)
          ((*(int *)(temp_v0 * 4 + 0x420634) << temp_v7) |
          (*(unsigned int *)(temp_v4 + 0x420638) >> (temp_v9 & 0xff)));
  temp_v6 = (unsigned int)temp_v1;
  temp_v2 = (unsigned long long)temp_v5 *
          (unsigned long long)
          ((*(unsigned int *)(temp_v4 + 0x420638) << temp_v7) | (*(unsigned int *)(temp_v4 + 0x42063c) >> (temp_v9 & 0xff))
          );
  temp_v8 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
  temp_v5 = (unsigned int)((unsigned long long)temp_v5 *
                 (unsigned long long)
                 ((*(unsigned int *)(temp_v4 + 0x42063c) << temp_v7) |
                 (*(unsigned int *)(temp_v4 + 0x420640) >> (temp_v9 & 0xff))) >> 0x20);
  temp_v3 = temp_v2 + romwright_piece_4_4(temp_v6,temp_v5);
  temp_v7 = (unsigned int)((unsigned long long)temp_v3 >> 0x20);
  temp_v4 = (int)((unsigned long long)temp_v1 >> 0x20) +
          (unsigned int)(romwright_carry_4(temp_v8,temp_v6) || romwright_carry_4(temp_v8 + temp_v6,(unsigned int)romwright_carry_4(temp_v5,(unsigned int)temp_v2)));
  VectorUnsignedToFloat((int)temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (temp_v4 + 0x20U) >> 6;
  temp_v10 = (param_2 & 0x80000000) == 0;
  *param_1 = temp_v5;
  VectorSignedToFloat((temp_v4 * 0x4000000) | ((temp_v7 >> 0x13) << 0xd),(unsigned char)(in_fpscr >> 0x16) & 3);
  if (temp_v10) {
    temp_v5 = unaff_r4;
  }
  VectorUnsignedToFloat(temp_v7 * 0x2000,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (!temp_v10) {
    *param_1 = 0x10000000 - temp_v5;
    return;
  }
  return;
}
