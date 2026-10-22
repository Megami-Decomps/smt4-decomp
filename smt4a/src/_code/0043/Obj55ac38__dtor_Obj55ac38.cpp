/* NON_MATCHING: Retail instruction scheduling/register allocation differs (60 retail versus 60 compiled rows). */
#include "classes/Obj55ac38.h"
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */
extern unsigned char DAT_0055ac40; /* 0x55ac40 */

/* Supplied declaration required: asdOperatorDeleteArray. */
extern int _ZN9Obj55aff4D1Ev(int);
extern int _ZN9Obj55b104D1Ev(unsigned int *);


} /* extern "C" */

Obj55ac38::~Obj55ac38()

{
    unsigned int *param_1 = (unsigned int *)this;
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
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
  temp_v0 = _ZN9Obj55b104D1Ev(param_1 + 6);
  temp_v0 = _ZN9Obj55aff4D1Ev(temp_v0 - 0xc);
  return;
}

