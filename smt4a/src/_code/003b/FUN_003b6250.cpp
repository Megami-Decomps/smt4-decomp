/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6250` (_code @ 0x3b6250, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(int, unsigned int, int, int);
int efctSetSpeed(void);
int FUN_0035b540(int, int, int, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, unsigned int);
extern int FUN_0022e9b8(void);
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_0035b540. */


void FUN_003b6250(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_0022e9b8();
  temp_v2 = 0x9fe7ffff;
  efctSetSpeed();
  temp_v1 = FUN_00284140((int)*(short *)(temp_v0 + *(short *)(temp_v0 + 0x8e88) * 2 + 0x438));
  if ((temp_v1 == 1 || temp_v1 == 2) || temp_v1 == 6) {
    temp_v2 = 0xf5ff9fff;
  }
  temp_v1 = FUN_001834a4(0x1a,0x1af);
  FUN_0035b540(temp_v0,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
               (int)*(short *)(temp_v0 + 0x8e88));
  efctSetSpeed();
  temp_v0 = FUN_001834a4(0x1a,0x1a2);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v0 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,temp_v2,0x52f328,(int)*(short *)(temp_v0 + 10));
  return;
}

} /* extern "C" */
