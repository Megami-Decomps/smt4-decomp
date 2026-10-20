/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3f2c` (_code @ 0x2e3f2c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e40ec(int *, int, unsigned int);
int FUN_002e40f8(int);
int FUN_002e410c(int *, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e40ec. */
/* Supplied declaration required: FUN_002e40f8. */
/* Supplied declaration required: FUN_002e410c. */


int * FUN_002e3f2c(int *param_1,int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  
  temp_v0 = *param_2;
  if (*(int *)(temp_v0 - 0xc) != -1) {
    *param_1 = temp_v0;
    FUN_002e40f8(temp_v0 - 0xc);
  }
  else {
    temp_v1 = *(unsigned int *)(temp_v0 - 4);
    piVar2 = param_1;
    FUN_002e410c(param_1,temp_v1,temp_v1);
    *param_1 = (int)(piVar2 + 3);
    FUN_002e40ec(piVar2 + 3,*param_2,temp_v1);
  }
  return param_1;
}

} /* extern "C" */
