/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00232554` (_code @ 0x232554, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

void gxSetClippedBottomScreenScissor(int, int, int, int);
int FUN_00231434(int, int, int *, int *, int *, int *);
int pairCopy(int, float *);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00231434. */
/* Supplied declaration required: pairCopy. */


void FUN_00232554(int param_1,int param_2)

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
  
  temp_v0 = g_titleScene;
  if (param_2 != 0) {
    FUN_00231434(0x1c,0xfa4,&temp_v5,&temp_v3,&temp_v4,&uStack_18);
    pairCopy(param_1 + 0x164,&fStack_10);
    temp_v2 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (int)(fStack_10 + temp_v2);
    temp_v2 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = (int)(temp_v6 + temp_v2);
    gxSetClippedBottomScreenScissor(temp_v5,temp_v3,temp_v4,uStack_18);
  }
  else {
    piVar3 = (int *)(g_titleScene + 0x130c);
    temp_v1 = piVar3[*piVar3 + 2];
    piVar3[*piVar3 + 2] = 0;
    if (*(char *)(temp_v0 + 0x1324) != '\0' || temp_v1 != 0) {
      (**(romwright_code **)(temp_v0 + 0x1328))();
      *(unsigned char *)(temp_v0 + 0x1324) = 0;
      return;
    }
  }
  return;
}

} /* extern "C" */
