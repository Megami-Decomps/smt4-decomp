/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027fbc8` (_code @ 0x27fbc8, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern int DAT_004650a0; /* 0x4650a0 */
extern unsigned int DAT_004650a4; /* 0x4650a4 */
extern unsigned int DAT_004650a8; /* 0x4650a8 */
extern float DAT_004650b4; /* 0x4650b4 */
extern unsigned int DAT_004e3c28; /* 0x4e3c28 */
extern unsigned int DAT_004e3c48; /* 0x4e3c48 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0019fe4c. */


unsigned int FUN_0027fbc8(float *param_1,float *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  short temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5 [3];
  
  if (*(char *)(DAT_004650a0 + 0x18) == '\0') {
    temp_v1 = *(short *)(DAT_004650a0 + 0xc);
    temp_v0 = *(short *)(DAT_004650a0 + 0x12);
  }
  else if (*(char *)(DAT_004650a0 + 0x18) == '\x01') {
    temp_v1 = *(short *)(DAT_004650a0 + 0xe);
    temp_v0 = *(short *)(DAT_004650a0 + 0x14);
  }
  else {
    temp_v1 = *(short *)(DAT_004650a0 + 0x10);
    temp_v0 = *(short *)(DAT_004650a0 + 0x16);
  }
  temp_v2 = (float)VectorSignedToFloat((int)temp_v0 - (int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_3 < 2) && (param_3 <= DAT_004650a4)) {
    if ((DAT_004650a8 & 1) != 0) {
      puVar2 = &DAT_004e3c48;
    }
    else {
      puVar2 = &DAT_004e3c28 + param_3 * 4;
    }
    if (puVar2 != (unsigned int *)0x0) {
      temp_v3 = 0.0f;
      temp_v4 = (float)VectorSignedToFloat((int)*(short *)(puVar2 + 3),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
      temp_v5[0] = (float)VectorSignedToFloat((int)*(short *)((int)puVar2 + 0xe),
                                               (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = temp_v4 / temp_v2;
      temp_v5[0] = temp_v5[0] / temp_v2;
      if (DAT_004650b4 != 0.0f) {
        FUN_0019fe4c(&temp_v4);
        FUN_0019fe4c(temp_v5);
        if ((temp_v4 == temp_v3) && (temp_v5[0] == temp_v3)) {
          return 0;
        }
      }
      if (param_1 != (float *)0x0) {
        *param_1 = temp_v4;
      }
      if (param_2 != (float *)0x0) {
        *param_2 = temp_v5[0];
      }
      return 1;
    }
  }
  return 0;
}
