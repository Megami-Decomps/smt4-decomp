/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00498494` (_code @ 0x498494, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ba3d0(unsigned short);
extern int FUN_0031d174(int);
extern int FUN_00498408(int, unsigned short);
extern unsigned int FUN_0049cad0(unsigned short *);
extern int FUN_0049cbac(unsigned short, unsigned int);
extern int FUN_004cfe4c(int);


void FUN_00498494(int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  
  temp_v3 = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 0x10) = temp_v3;
  temp_v0 = FUN_0031d174(param_1 + *(int *)(param_1 + 0xb40) * 0x74 + 0xb60);
  temp_v1 = *(int *)(param_1 + 0xb40);
  if (temp_v1 == 7 || temp_v1 == 8) {
    temp_v0 = temp_v0 + 1;
  }
  else {
    temp_v0 = temp_v0 + 2;
  }
  temp_v2 = FUN_004cfe4c(param_1 + temp_v1 * 0x74 + 0xb60);
  puVar5 = (unsigned short *)(param_1 + temp_v1 * 0x1002 + 0xf74 + temp_v2 * 4);
  if (*(int *)(param_1 + 0xb40) != 8) {
    temp_v3 = FUN_0049cad0(puVar5);
    temp_v1 = FUN_0049cbac(*puVar5,temp_v3);
  }
  else {
    temp_v1 = FUN_001ba3d0(*puVar5);
    if (temp_v1 < 0) {
      temp_v1 = 0;
    }
    else if (temp_v1 >= 100) {
      temp_v1 = 99;
    }
    temp_v2 = FUN_00498408(param_1,*puVar5);
    if (temp_v2 != 0) {
      temp_v1 = temp_v1 - 1;
    }
  }
  *(unsigned int *)(param_1 + 0xb48) = (unsigned int)(temp_v1 != 0);
  *(int *)(param_1 + 0xb4c) = temp_v1;
  *(unsigned int *)(param_1 + 0xb50) = 0;
  *(int *)(param_1 + 0xb54) = temp_v0;
  return;
}

} /* extern "C" */
