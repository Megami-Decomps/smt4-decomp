/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048b420` (_code @ 0x48b420, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0049277c. */
/* Supplied declaration required: FUN_0049359c. */
/* Supplied declaration required: FUN_004cfb64. */


void FUN_0048b420(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int in_fpscr;
  float temp_v2;
  int temp_v3;
  int temp_v4;
  int uStack_18;
  int temp_v5;
  float fStack_10;
  float temp_v6;
  
  temp_v0 = DAT_0059dbb4;
  if (param_2 != 0) {
    FUN_0049277c(0x13,0xfa4,&temp_v5,&temp_v3,&temp_v4,&uStack_18);
    FUN_0049359c(param_1 + 0x4d0,&fStack_10);
    temp_v2 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (int)(fStack_10 + temp_v2);
    temp_v2 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = (int)(temp_v6 + temp_v2);
    FUN_004cfb64(temp_v5,temp_v3,temp_v4,uStack_18);
  }
  else {
    piVar3 = (int *)(DAT_0059dbb4 + 0x1318);
    temp_v1 = piVar3[*piVar3 + 2];
    piVar3[*piVar3 + 2] = 0;
    if (*(char *)(temp_v0 + 0x1330) != '\0' || temp_v1 != 0) {
      (**(romwright_code **)(temp_v0 + 0x1334))();
      *(unsigned char *)(temp_v0 + 0x1330) = 0;
      return;
    }
  }
  return;
}
