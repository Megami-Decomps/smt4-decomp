/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2b10` (_code @ 0x3c2b10, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002c0b1c. */
/* Supplied declaration required: FUN_002c1d3c. */


void FUN_003c2b10(unsigned char *param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  float temp_v3;
  
  temp_v0 = (int)(char)param_1[10];
  temp_v1 = 0;
  if (temp_v0 < 1) {
    temp_v0 = 1;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      if ((char)param_1[0xb] < temp_v0) {
        param_1[0xb] = param_1[0xb] + 1;
      }
      else {
        *param_1 = *param_1 & 0xfe;
      }
      if ((param_1[8] != 0) && (param_1[8] == 1)) {
        temp_v1 = -0x100;
      }
    }
  }
  else {
    if ((char)param_1[0xb] < '\x01') {
      *param_1 = *param_1 & 0xfe;
      return;
    }
    param_1[0xb] = param_1[0xb] - 1;
  }
  temp_v3 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorSignedToFloat((int)(char)param_1[0xb],(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002c1d3c(DAT_0044ea00,0);
  FUN_002c0b1c(temp_v1 + ((int)(temp_v2 * (255.0f / temp_v3)) & 0xffU));
  return;
}
