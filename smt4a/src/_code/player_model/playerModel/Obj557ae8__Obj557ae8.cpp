/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj557ae8C1Ev` (_code @ 0x3e5d10, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_002f5020(unsigned int *, unsigned char *, int, int);

extern unsigned char LAB_003e55d4; /* 0x3e55d4 */
extern unsigned char LAB_003e5dac; /* 0x3e5dac */
extern unsigned char DAT_00557af0; /* 0x557af0 */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_002f5020. */
extern unsigned int modelListInit(void);


unsigned int * _ZN9Obj557ae8C1Ev(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  puVar1 = param_1 + 7;
  *param_1 = (unsigned int)&DAT_00557af0;
  FUN_002f5020(puVar1,&LAB_003e55d4,0x5c,3);
  puVar1[-6] = 0;
  puVar1[-5] = 0;
  puVar1[-1] = 1;
  temp_v0 = 0x20;
  FUN_00178b04(0x20,&LAB_003e5dac,0x18);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = modelListInit();
  }
  puVar1[-5] = temp_v1;
  temp_v0 = 0;
  do {
    temp_v2 = 0x20;
    FUN_00178b04(0x20,&LAB_003e5dac,0x1b);
    temp_v1 = 0;
    if (temp_v2 != 0) {
      temp_v1 = modelListInit();
    }
    temp_v2 = temp_v0 + 1;
    (puVar1 + -7)[temp_v0 * 0x17 + 9] = temp_v1;
    temp_v0 = temp_v2;
  } while (temp_v2 < 3);
  return puVar1 + -7;
}

} /* extern "C" */
