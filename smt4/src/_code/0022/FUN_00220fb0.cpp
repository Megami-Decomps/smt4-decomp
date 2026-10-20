/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220fb0` (_code @ 0x220fb0, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c0710(int *, unsigned int);
int FUN_002ac838(int, unsigned char [256], int);
int FUN_002bf694(unsigned char [256], unsigned int);
int FUN_002c3940(unsigned char [256], int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;

/* Supplied declaration required: FUN_001c0710. */
/* Supplied declaration required: FUN_002ac838. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c3940. */


void FUN_00220fb0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [256];
  unsigned int uStack_18;
  int temp_v1;
  unsigned int uStack_10;
  
  uStack_18 = param_1;
  temp_v1 = param_2;
  uStack_10 = param_3;
  FUN_002c3940(temp_v0,0x100);
  FUN_002bf694(temp_v0,param_1);
  FUN_002ac838(temp_v1,temp_v0,0x100);
  FUN_001c0710(&temp_v1,param_3);
  return;
}

} /* extern "C" */
