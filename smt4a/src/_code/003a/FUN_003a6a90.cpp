/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6a90` (_code @ 0x3a6a90, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, unsigned int, int, int);
int FUN_001846d0(int, int);
int FUN_00184b80(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
extern unsigned int FUN_00203b08(void);


unsigned int FUN_003a6a90(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  
  temp_v1 = *(int *)(param_2 + 8);
  *(unsigned int *)(temp_v1 + 0x150) = 10;
  *(unsigned int *)(temp_v1 + 0x158) = 1;
  temp_v0 = FUN_00203b08();
  *(short *)(temp_v1 + 0x15c) = (short)temp_v0;
  *(short *)(temp_v1 + 0x15e) = (short)temp_v0;
  temp_v0 = VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v1 + 0x160) = temp_v0;
  *(unsigned char *)(temp_v1 + 0x154) = 1;
  FUN_0014e188(temp_v1 + 0xd30,8,0xffffffff,temp_v1 + 0x194,0xb);
  FUN_00184b80(temp_v1 + 0xd30,0x11);
  FUN_001846d0(temp_v1 + 0xd30,6);
  return 1;
}

} /* extern "C" */
