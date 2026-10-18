/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118b64` (_code @ 0x118b64, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b7a10. */
/* Supplied declaration required: FUN_002c1d3c. */


void FUN_00118b64(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v5 = 0;
  if (param_2 != 0) {
    temp_v7 = 0.003921569f;
    temp_v8 = 1.0f;
    do {
      temp_v4 = *(unsigned int *)(param_1 + temp_v5 * 0x14 + 0x10);
      temp_v3 = 0;
      temp_v9 = temp_v8;
      temp_v10 = temp_v8;
      temp_v11 = temp_v8;
      temp_v12 = temp_v8;
      do {
        temp_v6 = (float)VectorUnsignedToFloat(temp_v4 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = temp_v6 * temp_v7;
        temp_v0 = temp_v10;
        temp_v1 = temp_v11;
        temp_v2 = temp_v6;
        if ((((temp_v3 != 0) && (temp_v1 = temp_v6, temp_v2 = temp_v12, temp_v3 != 1)) &&
            (temp_v0 = temp_v6, temp_v1 = temp_v11, temp_v3 != 2)) && (temp_v0 = temp_v10, temp_v3 == 3)) {
          temp_v9 = temp_v6;
        }
        temp_v12 = temp_v2;
        temp_v11 = temp_v1;
        temp_v10 = temp_v0;
        temp_v3 = temp_v3 + 1;
        temp_v4 = temp_v4 >> 8;
      } while (temp_v3 < 4);
      FUN_002c1d3c(DAT_0044ea00,0);
      in_fpscr = in_fpscr & 0xfffffff;
      FUN_002b7a10(&temp_v9);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < param_2);
  }
  return;
}
