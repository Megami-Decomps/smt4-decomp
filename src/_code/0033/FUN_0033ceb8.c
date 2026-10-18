/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033ceb8` (_code @ 0x33ceb8, 0x274 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0024807c. */
/* Supplied declaration required: FUN_002b7978. */
/* Supplied declaration required: FUN_002bc2c4. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c1d3c. */
/* Supplied declaration required: FUN_0033c960. */


void FUN_0033ceb8(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  
  if (*(int *)(param_1 + 0x390) != 4) {
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v6 = 0.0f;
    temp_v10 = 0;
    temp_v11 = *(float *)(param_1 + 0x398) * 0.25f * (1.0f - *(float *)(param_1 + 0x394) * 0.25f) * 0.5f
    ;
    FUN_002c1d3c(DAT_0044ea00,0);
    FUN_002b7978(&temp_v8);
    FUN_002bc2c4();
    FUN_002bf710();
    temp_v7 = (int)(temp_v6 + (4.0f - *(float *)(param_1 + 0x39c)) * 20.0f);
    FUN_002bf460(2,0x14,0x54,0,temp_v7,0x23);
    FUN_002bf460(2,0x14,0x55,0,temp_v7,0x23);
    FUN_0024807c();
    temp_v5 = 0;
    temp_v7 = temp_v1;
    if (0 < *(int *)(param_1 + 0x2f4)) {
      do {
        temp_v4 = param_1 + temp_v5 * 0x54;
        if (*(char *)(temp_v4 + 0x40) != '\0') {
          temp_v0 = *(int *)(param_1 + 0x2f8);
          if (temp_v0 != 0) {
            temp_v7 = *(int *)(param_1 + 0x2fc);
          }
          if (!(temp_v0 == 0 || temp_v7 == 0)) {
            if (*(int *)(temp_v4 + 0x44) != 1) {
              VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            else {
              VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
          }
          else if (*(int *)(temp_v4 + 0x44) != 1) {
            VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(*(unsigned int *)(param_1 + 0x2fc),(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          else {
            VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          FUN_0033c960(param_1,0x24);
          temp_v7 = temp_v2;
        }
        else {
          FUN_0033c960(param_1,0x24);
          temp_v7 = temp_v3;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < *(int *)(param_1 + 0x2f4));
    }
  }
  return;
}
