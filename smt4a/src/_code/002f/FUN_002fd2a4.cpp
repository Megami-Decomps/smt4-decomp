/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd2a4` (_code @ 0x2fd2a4, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_00559ee4; /* 0x559ee4 */
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */

/* Supplied declaration required: asdOperatorDeleteArray. */
extern int onlineStringDestroy(int);
extern int FUN_003106d0(unsigned int *);


int FUN_002fd2a4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  *param_1 = (unsigned int)&DAT_00559ee4;
  puVar3 = (unsigned int *)param_1[0x2c];
  for (puVar2 = (unsigned int *)param_1[0x2b]; puVar2 != puVar3; puVar2 = puVar2 + 10) {
    (**(romwright_code **)*puVar2)(puVar2);
  }
  asdOperatorDeleteArray(param_1[0x2b]);
  puVar3 = (unsigned int *)param_1[0x29];
  for (puVar2 = (unsigned int *)param_1[0x28]; puVar2 != puVar3; puVar2 = puVar2 + 2) {
    (**(romwright_code **)*puVar2)(puVar2);
  }
  asdOperatorDeleteArray(param_1[0x28]);
  param_1[0x16] = (unsigned int)&DAT_0055a4c0;
  asdOperatorDeleteArray(param_1[0x18]);
  param_1[0x11] = (unsigned int)&DAT_0055a4c0;
  asdOperatorDeleteArray(param_1[0x13]);
  temp_v0 = FUN_003106d0(param_1 + 9);
  temp_v0 = onlineStringDestroy(temp_v0 - 0xc);
  return temp_v0 - 0x18;
}

} /* extern "C" */
