/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317af8` (_code @ 0x317af8, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00226c70(...);
int VectorSignedToFloat(int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern int DAT_005b4000; /* 0x5b4000 */
extern unsigned int DAT_005b4004; /* 0x5b4004 */
extern unsigned int DAT_005b4008; /* 0x5b4008 */
extern float DAT_005b4014; /* 0x5b4014 */
extern unsigned int DAT_0063ffd0; /* 0x63ffd0 */
extern unsigned int DAT_0063fff0; /* 0x63fff0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00226c70. */


unsigned int FUN_00317af8(float *param_1,float *param_2,unsigned int param_3)

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
  
  if (*(char *)(DAT_005b4000 + 0x18) == '\0') {
    temp_v1 = *(short *)(DAT_005b4000 + 0xc);
    temp_v0 = *(short *)(DAT_005b4000 + 0x12);
  }
  else if (*(char *)(DAT_005b4000 + 0x18) == '\x01') {
    temp_v1 = *(short *)(DAT_005b4000 + 0xe);
    temp_v0 = *(short *)(DAT_005b4000 + 0x14);
  }
  else {
    temp_v1 = *(short *)(DAT_005b4000 + 0x10);
    temp_v0 = *(short *)(DAT_005b4000 + 0x16);
  }
  temp_v2 = (float)VectorSignedToFloat((int)temp_v0 - (int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_3 < 2) && (param_3 <= DAT_005b4004)) {
    if (!((DAT_005b4008 & 1) == 0 && (DAT_005b4008 & 2) == 0)) {
      puVar2 = &DAT_0063fff0;
    }
    else {
      puVar2 = &DAT_0063ffd0 + param_3 * 4;
    }
    if (puVar2 != (unsigned int *)0x0) {
      temp_v3 = 0.0f;
      temp_v4 = (float)VectorSignedToFloat((int)*(short *)(puVar2 + 3),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
      temp_v5[0] = (float)VectorSignedToFloat((int)*(short *)((int)puVar2 + 0xe),
                                               (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = temp_v4 / temp_v2;
      temp_v5[0] = temp_v5[0] / temp_v2;
      if (DAT_005b4014 != 0.0f) {
        FUN_00226c70(&temp_v4);
        FUN_00226c70(temp_v5);
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

} /* extern "C" */
