/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c81c8` (_code @ 0x3c81c8, 0x194 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024ef48(int);
int FUN_00263630(int, unsigned int);
int FUN_002759bc(void);
int FUN_00280ac0(int);
int FUN_00340350(int);
int FUN_0034043c(int);
int FUN_003404a0(int);
int FUN_00340504(int);
int FUN_003c7cf0(int, unsigned int, unsigned int);
int FUN_003c8058(int);

extern int DAT_004398d4; /* 0x4398d4 */

/* Supplied declaration required: FUN_0024ef48. */
extern unsigned long long FUN_0025bb34(unsigned int, char *);
/* Supplied declaration required: FUN_00263630. */
/* Supplied declaration required: FUN_002759bc. */
/* Supplied declaration required: FUN_00280ac0. */
/* Supplied declaration required: FUN_00340350. */
/* Supplied declaration required: FUN_0034043c. */
/* Supplied declaration required: FUN_003404a0. */
/* Supplied declaration required: FUN_00340504. */
extern int FUN_00340558(int);
/* Supplied declaration required: FUN_003c7cf0. */
/* Supplied declaration required: FUN_003c8058. */


unsigned int FUN_003c81c8(int param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_004398d4 == 0) {
    return 0;
  }
  switch(*(unsigned int *)(param_1 + 0x80)) {
  case 1:
    FUN_00280ac0(0);
    FUN_003c8058(param_1);
    temp_v1 = 2;
    *(unsigned int *)(param_1 + 0x80) = temp_v1;
    break;
  case 2:
    if ((*(short *)(param_1 + 0xb4) == 0) || (temp_v0 = FUN_00340558(param_1), temp_v0 == 0)) break;
    FUN_003404a0(param_1);
    FUN_00340504(param_1);
    temp_v2 = FUN_0025bb34(0,"Light_EFT");
    temp_v1 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
    temp_v0 = (int)temp_v2;
    if (-1 < temp_v0) {
      temp_v1 = 0;
    }
    *(short *)(param_1 + 0x8c) = (short)temp_v2;
    if (-1 < temp_v0) {
      FUN_00263630(temp_v0,temp_v1);
    }
    FUN_003c7cf0(param_1,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
    temp_v1 = 4;
    *(unsigned int *)(param_1 + 0x80) = temp_v1;
    break;
  case 3:
    if (*(int *)(param_1 + 0xa0) != 0) {
      *(unsigned int *)(param_1 + 0xa0) = 0;
    }
    FUN_002759bc();
    FUN_0024ef48(param_1);
    *(unsigned int *)(param_1 + 0x80) = 0;
    break;
  case 4:
    FUN_003404a0(param_1);
    FUN_00340504(param_1);
    FUN_00340350(param_1);
    FUN_0034043c(param_1);
  }
  if (*(short *)(param_1 + 0x9c) != -1) {
    *(short *)(param_1 + 0x9c) = *(short *)(param_1 + 0x9c) + 1;
  }
  return 0;
}

} /* extern "C" */
