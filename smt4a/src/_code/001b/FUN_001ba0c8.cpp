/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ba0c8` (_code @ 0x1ba0c8, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a364(unsigned int *, int, int);
int FUN_002e3140(void);
int nnnstdMemCpy(int *, unsigned int, int);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0019a364. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: nnnstdMemCpy. */


int * FUN_001ba0c8(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  int uStack_20;
  
  puVar3 = (unsigned int *)&uStack_20;
  software_interrupt(0x24);
  uStack_20 = param_4;
  if (param_1[0x1148] < 0) {
    FUN_002e3140();
  }
  temp_v0 = param_1[1];
  if (*param_1 == temp_v0) {
    piVar4 = param_1 + temp_v0 * 0x2e + 3;
    nnnstdMemCpy(piVar4,param_2,0xb8);
    temp_v0 = param_1[1];
    temp_v1 = temp_v0 + 1;
    param_1[1] = temp_v1;
    param_1[2] = temp_v0;
    if (temp_v1 >= 0x60) {
      param_1[1] = 0;
    }
  }
  else {
    temp_v1 = param_1[2];
    piVar4 = param_1 + temp_v0 * 0x2e + 3;
    nnnstdMemCpy(piVar4,param_2,0xb8);
    param_1[2] = param_1[1];
    temp_v0 = param_1[1] + 1;
    param_1[1] = temp_v0;
    if (temp_v0 >= 0x60) {
      param_1[1] = 0;
    }
    param_1[temp_v1 * 0x2e + 0x2f] = (int)piVar4;
  }
  FUN_0019a364(puVar3,param_1[0x1148],1);
  if ((int)puVar3 < 0) {
    FUN_002e3140();
  }
  return piVar4;
}

} /* extern "C" */
