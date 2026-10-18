/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab944` (_code @ 0x1ab944, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002857f4. */
/* Supplied declaration required: FUN_002aec80. */
/* Supplied declaration required: FUN_002ba46c. */


unsigned int FUN_001ab944(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  
  temp_v3 = *param_1;
  temp_v6 = 0.33f;
  FUN_002ba46c(DAT_0044ea00);
  FUN_002aec80(2,2,(unsigned int)*(unsigned short *)(temp_v3 + 0x102) * 1000,(int)temp_v6 - 0x38,0xfffffff8,1);
  temp_v4 = 0;
  if (temp_v4 < *(int *)(temp_v3 + 0xe4)) {
    do {
      temp_v2 = 0;
      do {
        temp_v0 = (int)*(short *)(temp_v3 + temp_v4 * 0x10 + temp_v2 * 2 + 100);
        if (-1 < temp_v0) {
          temp_v1 = *(int *)(temp_v3 + 0xf0);
          temp_v5 = temp_v1 != 4;
          if (!temp_v5) {
            temp_v1 = *(int *)(temp_v3 + 0xfc);
          }
          if ((temp_v5 || temp_v1 != temp_v4) || (*(int *)(temp_v3 + 0xec) < 3)) {
            FUN_002857f4(*(unsigned int *)(temp_v3 + temp_v0 * 4 + 4),0);
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 8);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(temp_v3 + 0xe4));
  }
  return 0;
}
