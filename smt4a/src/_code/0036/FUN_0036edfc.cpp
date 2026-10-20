/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036edfc` (_code @ 0x36edfc, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int FUN_001677c0(void);
int FUN_001835b4(int, int, int, int, int, int);
int VectorSignedToFloat(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */


void FUN_0036edfc(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  
  FUN_001677c0();
  temp_v0 = FUN_001834a4(0x1a,0x18d);
  FUN_001835b4(2,0x1a,0x16f,*(short *)(temp_v0 + 8) + param_1,*(short *)(temp_v0 + 10) + param_2,0x65);
  FUN_001835b4(2,0x1a,0x170,*(short *)(temp_v0 + 8) + param_1,*(short *)(temp_v0 + 10) + param_2,0x65);
  FUN_001835b4(2,0x1a,0x26f,*(short *)(temp_v0 + 8) + param_1,*(short *)(temp_v0 + 10) + param_2,0x65);
  FUN_001835b4(2,0x1a,0x270,*(short *)(temp_v0 + 8) + param_1,*(short *)(temp_v0 + 10) + param_2,0x65);
  FUN_001835b4(2,0x1a,0x171,*(short *)(temp_v0 + 8) + param_1,*(short *)(temp_v0 + 10) + param_2,0x65);
  temp_v1 = FUN_001834a4(0x1a,0x178);
  VectorSignedToFloat((int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + param_1,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0xffffffff,0x52f328,(int)*(short *)(temp_v0 + 8));
  return;
}

} /* extern "C" */
