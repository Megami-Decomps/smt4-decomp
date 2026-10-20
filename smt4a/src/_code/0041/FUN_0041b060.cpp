/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041b060` (_code @ 0x41b060, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int FUN_001677c0(void);
int FUN_001835b4(...);
int FUN_0018408c(int, int);
int FUN_0041af74(...);
int VectorSignedToFloat(int, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_0041af74. */


void FUN_0041b060(int param_1,int *param_2,int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  
  FUN_001677c0();
  FUN_001835b4(2,0x2b,0x8c,*param_2,param_2[1],2);
  FUN_001835b4(2,0x2b,0x8d,*param_2,param_2[1],7);
  temp_v2 = 0;
  do {
    FUN_001835b4(2,0x2b,temp_v2 + 0x8e,*param_2,param_2[1],0xc);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  temp_v2 = 0;
  do {
    FUN_001835b4(2,0x2b,temp_v2 + 0x92,*param_2,param_2[1],0x11);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  temp_v0 = FUN_001834a4(0x2b,0x8a);
  temp_v2 = param_3;
  FUN_0018408c(param_3,4);
  temp_v1 = *param_2 + (int)*(short *)(temp_v0 + 8);
  VectorSignedToFloat((**(short **)(temp_v0 + 0xc) - temp_v2) / 2 + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v0 + 10) + param_2[1],(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(4,0x646464ff,param_3,temp_v1);
  FUN_001835b4(2,0x2b,0x96,*param_2,param_2[1],2);
  FUN_001835b4(2,0x2b,*(unsigned int *)(param_1 + 0x40),*param_2,param_2[1],2);
  FUN_0041af74(param_1,param_4,param_2,0x646464ff);
  FUN_001677c0();
  return;
}

} /* extern "C" */
