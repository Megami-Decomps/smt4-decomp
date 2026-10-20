/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f214` (_code @ 0x30f214, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f7140(void);
int FUN_0021a37c(int, unsigned int *);
int FUN_002493a4(int, int, unsigned int);
int FUN_002de424(int, unsigned int *);
int FUN_002e7bb8(int, unsigned int *);
int FUN_003026b0(int, unsigned int *);
int FUN_003026d8(int, unsigned int *);
int FUN_0030ee9c(int, unsigned int *);
int FUN_0031d0bc(int, unsigned int);

/* Supplied declaration required: FUN_001f7140. */
/* Supplied declaration required: FUN_0021a37c. */
/* Supplied declaration required: FUN_002493a4. */
/* Supplied declaration required: FUN_002de424. */
/* Supplied declaration required: FUN_002e7bb8. */
/* Supplied declaration required: FUN_003026b0. */
/* Supplied declaration required: FUN_003026d8. */
/* Supplied declaration required: FUN_0030ee9c. */
/* Supplied declaration required: FUN_0031d0bc. */


void FUN_0030f214(int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  
  if (param_1[0xb] == 0) {
    temp_v0 = *param_1;
    FUN_001f7140();
    param_1[0xb] = temp_v0;
    *(int *)(temp_v0 + 0x4c) = param_1[0xc];
  }
  switch(param_2) {
  case 1:
    FUN_002493a4(param_1[0xb],*param_1,param_2);
    FUN_003026d8(param_1[0xb],param_3);
    break;
  case 2:
    FUN_002493a4(param_1[0xb],*param_1,param_2);
    FUN_003026b0(param_1[0xb],param_3);
    break;
  case 4:
    FUN_002493a4(param_1[0xb],*param_1,param_2);
    FUN_0031d0bc(param_1[0xb],*param_3);
    break;
  case 5:
    FUN_0021a37c(param_1[0xb],param_3);
    break;
  case 6:
    FUN_002e7bb8(param_1[0xb],param_3);
    break;
  case 7:
    FUN_002493a4(param_1[0xb],*param_1,param_2);
    FUN_002de424(param_1[0xb],param_3);
    break;
  case 9:
    FUN_002493a4(param_1[0xb],*param_1,param_2);
    FUN_0030ee9c(param_1[0xb],param_3);
  }
  *(short *)(param_1[0xb] + 0xc) = (short)param_2;
  return;
}

} /* extern "C" */
