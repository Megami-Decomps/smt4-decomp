/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334ad0` (_code @ 0x334ad0, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_001834a4(...);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_0018408c(...);
int VectorSignedToFloat(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */


void FUN_00334ad0(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  unsigned int in_fpscr;
  unsigned char temp_v4 [36];
  
  efctSetSpeed();
  temp_v3 = FUN_001834a4(0x12,0x56e);
  FUN_001835b4(2,0x12,0x55a,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,0x97);
  FUN_001835b4(2,0x12,0x55b,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,0x97);
  FUN_001835b4(2,0x12,0x55c,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,0x97);
  FUN_001835b4(2,0x12,0x5bf,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,0x97);
  FUN_001835b4(2,0x12,0x5c0,*(short *)(temp_v3 + 8) + param_1,*(short *)(temp_v3 + 10) + param_2,0x97);
  FUN_00100388(temp_v4,"撂躂蒂＀");
  puVar5 = temp_v4;
  FUN_0018408c(puVar5,2);
  temp_v0 = *(short *)(temp_v3 + 8);
  temp_v1 = **(short **)(temp_v3 + 0xc);
  temp_v2 = *(short *)(temp_v3 + 10);
  temp_v3 = FUN_001834a4(0x12,0x561,(int)temp_v1);
  VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + temp_v2 + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_1 + (int)temp_v0 + ((int)temp_v1 - (int)puVar5) / 2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0xffffffff,temp_v4);
  efctSetSpeed();
  return;
}

} /* extern "C" */
