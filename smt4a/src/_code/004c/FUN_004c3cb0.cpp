/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c3cb0` (_code @ 0x4c3cb0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e8bb0(unsigned char [2], unsigned int, unsigned int);
int FUN_003f0e20(unsigned int, unsigned int);

/* stack frame of param_3: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp44; /* 0x44: local_44 */
    unsigned short sp46; /* 0x46: local_46 */
} param_3_stack;

extern unsigned int btlGetMainState(void);
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */


void FUN_004c3cb0(unsigned int param_1,unsigned int *param_2,int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [2];
  unsigned short temp_v3;
  short temp_v4;
  
  temp_v0 = btlGetMainState();
  FUN_003f0e20(temp_v0,param_1);
  temp_v1 = btlGetMainState();
  FUN_003e8bb0(temp_v2,temp_v1,temp_v0);
  *param_2 = (unsigned int)temp_v3;
  *param_3 = (int)temp_v4;
  return;
}

} /* extern "C" */
