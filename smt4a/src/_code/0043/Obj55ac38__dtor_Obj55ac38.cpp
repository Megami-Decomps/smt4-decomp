/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj55ac38D1Ev` (_code @ 0x43378c, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */
extern unsigned char DAT_0055ac40; /* 0x55ac40 */

/* Supplied declaration required: asdOperatorDeleteArray. */
extern int onlineStringDestroy(int);
extern int FUN_003106d0(unsigned int *);


int _ZN9Obj55ac38D1Ev(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  *param_1 = (unsigned int)&DAT_0055ac40;
  puVar3 = (unsigned int *)param_1[0x25];
  for (puVar2 = (unsigned int *)param_1[0x24]; puVar2 != puVar3; puVar2 = puVar2 + 2) {
    (**(romwright_code **)*puVar2)(puVar2);
  }
  asdOperatorDeleteArray(param_1[0x24]);
  puVar3 = (unsigned int *)param_1[0x1f];
  for (puVar2 = (unsigned int *)param_1[0x1e]; puVar2 != puVar3; puVar2 = puVar2 + 10) {
    (**(romwright_code **)*puVar2)(puVar2);
  }
  asdOperatorDeleteArray(param_1[0x1e]);
  puVar3 = (unsigned int *)param_1[0x1c];
  for (puVar2 = (unsigned int *)param_1[0x1b]; puVar2 != puVar3; puVar2 = puVar2 + 2) {
    (**(romwright_code **)*puVar2)(puVar2);
  }
  asdOperatorDeleteArray(param_1[0x1b]);
  param_1[0x13] = (unsigned int)&DAT_0055a4c0;
  asdOperatorDeleteArray(param_1[0x15]);
  param_1[0xe] = (unsigned int)&DAT_0055a4c0;
  asdOperatorDeleteArray(param_1[0x10]);
  temp_v0 = FUN_003106d0(param_1 + 6);
  temp_v0 = onlineStringDestroy(temp_v0 - 0xc);
  return temp_v0 - 0xc;
}

} /* extern "C" */
