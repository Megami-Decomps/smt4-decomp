/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d25a0` (_code @ 0x1d25a0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN18WindowStatusResultC1Ej(void);

/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
extern unsigned int *_ZN18WindowStatusResultC1Ev(unsigned char *);


unsigned int * FUN_001d25a0(unsigned char *param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1 [2];
  
  puVar2 = temp_v1;
  *param_1 = param_2;
  puVar1 = (unsigned int *)_ZN18WindowStatusResultC1Ev(param_1 + 4);
  puVar1[2] = 0;
  puVar1[3] = 0;
  _ZN18WindowStatusResultC1Ej();
  temp_v0 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v0;
  return puVar1 + -1;
}

} /* extern "C" */
