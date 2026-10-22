/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj55aad4D1Ev` (_code @ 0x4336b4, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(...);

typedef int romwright_code(...);
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */
extern unsigned char DAT_0055aadc; /* 0x55aadc */

/* Supplied declaration required: asdOperatorDeleteArray. */
extern int _ZN9Obj55aff4D1Ev(int);
extern int _ZN9Obj55b104D1Ev(int);
extern int _ZN9Obj55ac68D1Ev(unsigned int *);


int _ZN9Obj55aad4D1Ev(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  *param_1 = (unsigned int)&DAT_0055aadc;
  temp_v0 = _ZN9Obj55ac68D1Ev(param_1 + 0x22);
  puVar3 = *(unsigned int **)(temp_v0 - 0x1c);
  for (puVar2 = *(unsigned int **)(temp_v0 - 0x20); puVar2 != puVar3; puVar2 = puVar2 + 2) {
    (**(romwright_code **)*puVar2)(puVar2);
  }
  asdOperatorDeleteArray(*(int *)(temp_v0 - 0x20));
  temp_v0 = _ZN9Obj55b104D1Ev(temp_v0 - 0x40);
  *(unsigned char **)(temp_v0 - 0x18) = &DAT_0055a4c0;
  asdOperatorDeleteArray(*(unsigned int *)(temp_v0 - 0x10));
  *(unsigned char **)(temp_v0 - 0x2c) = &DAT_0055a4c0;
  asdOperatorDeleteArray(*(unsigned int *)(temp_v0 - 0x24));
  temp_v0 = _ZN9Obj55aff4D1Ev(temp_v0 - 0x34);
  return temp_v0 - 0x14;
}

} /* extern "C" */
