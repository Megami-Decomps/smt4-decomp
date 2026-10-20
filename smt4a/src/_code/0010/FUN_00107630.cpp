/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107630` (_code @ 0x107630, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001072cc(int *);
int FUN_002ef790(int);
int FUN_002ef8f8(int *, int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_001072cc. */
extern int FUN_002ef01c(int);
/* Supplied declaration required: FUN_002ef790. */
/* Supplied declaration required: FUN_002ef8f8. */


void FUN_00107630(int *param_1,int param_2)
{
  unsigned short temp_v0;
  int temp_v1;
  unsigned int mode;
  
  if ((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 4) {
    FUN_001072cc(param_1);
    return;
  }
  temp_v0 = *(unsigned short *)(param_2 + 0x120);
  temp_v1 = FUN_002ef01c(param_1[1]);
  if (*(unsigned int *)(temp_v1 + 0x68) > (unsigned int)temp_v0) {
    temp_v1 = FUN_002ef790(*(int *)(param_2 + 0x118));
    if (temp_v1 == 0) {
      FUN_002ef8f8(param_1,param_2);
      return;
    }
  }
  if (((*(unsigned short *)(param_2 + 0x3c) & 0xf) == 3) &&
     (temp_v1 = (**(romwright_code **)(*param_1 + 0x54))(param_1), temp_v1 == 3)) {
    (**(romwright_code **)(*param_1 + 0x58))(param_1,0);
  }
  mode = *(unsigned short *)(param_2 + 0x3c) & 0xf;
  if ((mode == 1 || mode == 0) &&
     (temp_v1 = (**(romwright_code **)(*param_1 + 0x54))(param_1), temp_v1 == 1)) {
    (**(romwright_code **)(*param_1 + 0x58))(param_1,0);
  }
  temp_v1 = FUN_002ef790(*(int *)(param_2 + 0x118));
  if (temp_v1 != 0) {
    param_1[0xaa] = param_1[0xaa] + 1;
    *(unsigned char *)((int)param_1 + 0x14a) = 0xc;
  }
  else {
    *(unsigned char *)((int)param_1 + 0x14a) = 0xd;
  }
  (**(romwright_code **)(*param_1 + 0x28))(param_1);
  temp_v1 = (**(romwright_code **)(*param_1 + 0x28))(param_1);
  if (temp_v1 == 0) {
    (**(romwright_code **)(*param_1 + 0x88))(param_1,7,0);
  }
}
} /* extern "C" */
