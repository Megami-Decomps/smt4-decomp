/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043222c` (_code @ 0x43222c, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001242e2(int);
int FUN_001244fc(...);
int FUN_005022b0(int, unsigned int, int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(double, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern romwright_code *DAT_00594ab4; /* 0x594ab4 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_00123bd2(int);
/* Supplied declaration required: FUN_001242e2. */
extern int FUN_001242f0(unsigned int);
/* Supplied declaration required: FUN_001244fc. */
extern int FUN_002ef01c(unsigned int);
/* Supplied declaration required: FUN_005022b0. */


unsigned int FUN_0043222c(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  float temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  
  temp_v0 = FUN_002ef01c(*(unsigned int *)(param_1 + 4));
  if (DAT_00594ab4 != (romwright_code *)0x0) {
    temp_v1 = FUN_001244fc();
    temp_v2 = FUN_001242e2(param_1 + 0xc4);
                    /* WARNING: Could not recover jumptable at 0x0043227c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    temp_v3 = (*DAT_00594ab4)(temp_v2,temp_v1);
    return temp_v3;
  }
  temp_v4 = FUN_001242f0(param_2);
  if (temp_v4 != 0) {
    temp_v4 = FUN_001242e2(param_1 + 0xc4);
  }
  else {
    temp_v4 = FUN_00123bd2(temp_v0);
  }
  temp_v5 = FUN_001244fc(param_2);
  temp_v6 = (float)(temp_v5 * temp_v4);
  temp_v7 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_001244fc(param_2);
  FUN_005022b0(param_1,temp_v1,temp_v0);
  temp_v3 = VectorFloatToUnsigned(temp_v7 * temp_v6,3);
  if (*(unsigned int *)(temp_v0 + 0x98) < temp_v3) {
    temp_v3 = *(unsigned int *)(temp_v0 + 0x98);
  }
  return temp_v3;
}

} /* extern "C" */
