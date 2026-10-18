/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003573a4` (_code @ 0x3573a4, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

extern unsigned char LAB_0013b628; /* 0x13b628 */
extern int FUN_00357628(); /* 0x357628 */

/* Supplied declaration required: FUN_0015f808. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c5d5c. */


void FUN_003573a4(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puStack_44;
  unsigned int temp_v2;
  unsigned char temp_v3 [4];
  
  if ((int)param_3 < 0xb) {
    FUN_002c5d5c(&temp_v2,&LAB_0013b628,4);
    if ((int)param_3 < 1) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = param_3 & 1;
      if (temp_v0 == 1) {
        temp_v2 = *(unsigned int *)*param_2;
      }
    }
    for (; (int)temp_v0 < (int)param_3; temp_v0 = temp_v0 + 2) {
      *(unsigned int *)(temp_v3 + (temp_v0 * 4 - 4)) = *(unsigned int *)param_2[temp_v0];
      *(unsigned int *)(temp_v3 + temp_v0 * 4) = *(unsigned int *)param_2[temp_v0 + 1];
    }
    temp_v1 = param_5;
    puStack_44 = (unsigned int *)param_6;
    FUN_002c40f8(param_1,&temp_v2,param_3,param_4);
    return;
  }
  temp_v3[0] = (unsigned char)param_4;
  temp_v1 = param_1;
  puStack_44 = param_2;
  temp_v2 = param_3;
  FUN_0015f808(&temp_v1,param_3,FUN_00357628);
  return;
}
