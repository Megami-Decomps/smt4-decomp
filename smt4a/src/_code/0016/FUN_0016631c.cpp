/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016631c` (_code @ 0x16631c, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(int, unsigned int, int);
int FUN_001676b0(int, int, int, int);
int FUN_0018408c(int, int);
int FUN_00184ae0(int, unsigned char *, unsigned int);
int FUN_00185e84(int, int, int, int, int, int);
int FUN_00186008(int, int, int, unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_0052fa28; /* 0x52fa28 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001676b0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_00184ae0. */
/* Supplied declaration required: FUN_00185e84. */
/* Supplied declaration required: FUN_00186008. */


void FUN_0016631c(int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  
  temp_v0 = param_1 + 0x26c;
  FUN_0018408c(temp_v0,4);
  temp_v3 = 0;
  temp_v2 = 0;
  temp_v4 = 0;
  if (*(char *)(param_1 + 0x2b1) != '\0') {
    temp_v4 = -1 < *(int *)(param_1 + 0x2b4);
    if (temp_v4) {
      temp_v2 = FUN_001834a4(8,0x1a3);
      temp_v2 = **(short **)(temp_v2 + 0xc) + 0xc;
      goto LAB_0016637c;
    }
    temp_v3 = FUN_001834a4(8,0x19c);
    temp_v0 = temp_v0 + **(short **)(temp_v3 + 0xc);
    temp_v3 = 7;
    FUN_00184ae0(7,&DAT_0052fa28,*(unsigned int *)(param_1 + 0x2b4));
  }
  else {
LAB_0016637c:
    if (*(int *)(param_1 + 0x2b4) != 0) {
      temp_v3 = FUN_001834a4(8,0x19c);
      temp_v0 = temp_v0 + **(short **)(temp_v3 + 0xc);
      temp_v3 = 7;
      FUN_00184ae0(7,&DAT_0052fa28,*(unsigned int *)(param_1 + 0x2b4));
    }
  }
  temp_v3 = ((int)**(short **)(param_2 + 0xc) - (temp_v0 + temp_v3 + 0xd + temp_v2)) / 2;
  temp_v1 = FUN_001834a4(8,0x68);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v3 + 0xd + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(4,0xffffffff,param_1 + 0x26c);
  temp_v1 = FUN_001834a4(8,0x19d);
  FUN_00186008(temp_v3 + temp_v0 + 0xd + temp_v2,(int)*(short *)(temp_v1 + 10),0x79,
               *(unsigned int *)(param_1 + 0x2b4));
  FUN_00185e84((int)*(short *)(param_1 + 0x18),temp_v3 + temp_v2,8,0x79,0,0);
  if (!temp_v4) {
    return;
  }
  FUN_001676b0(4,temp_v3,8,0x79);
  return;
}

} /* extern "C" */
