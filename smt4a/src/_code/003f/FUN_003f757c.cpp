/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f757c` (_code @ 0x3f757c, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(int, unsigned int, int, int);
int FUN_001677c0(void);
int FUN_0018408c(int, int);
int FUN_001879d0(unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of param_9: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_9_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_003f757c(unsigned int param_1,int param_2,int param_3,int param_4,int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8,int param_9)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  
  temp_v1 = 0;
  FUN_001677c0();
  temp_v0 = FUN_001834a4(0x31,param_6);
  if (param_9 != 0) {
    temp_v1 = param_5;
    FUN_0018408c(param_5,3);
    temp_v1 = (**(short **)(temp_v0 + 0xc) - temp_v1) / 2;
  }
  temp_v2 = 0.26f;
  FUN_001879d0(DAT_0059dbb4);
  temp_v1 = *(short *)(temp_v0 + 8) + param_2 + (int)temp_v2 + temp_v1;
  VectorSignedToFloat(0xfb - param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v0 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,0xffffffff,param_5,temp_v1);
  FUN_001677c0();
  return;
}

} /* extern "C" */
