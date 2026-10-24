/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecd54` (_code @ 0x2ecd54, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00109f4e(unsigned char [24]);
int destroyObj0055ae64(unsigned char [24]);
int FUN_002ecb04(unsigned int *, unsigned char [24]);

extern unsigned char DAT_00558c08; /* 0x558c08 */

/* Supplied declaration required: FUN_00109f4e. */
extern unsigned int *FUN_0011468c(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002e7168(int, unsigned int);
extern int _Znwj(unsigned int);
/* Supplied declaration required: destroyObj0055ae64. */
/* Supplied declaration required: FUN_002ecb04. */


unsigned int * FUN_002ecd54(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [24];
  
  puVar1 = (unsigned int *)FUN_0011468c(param_1,5,0x40);
  *puVar1 = (unsigned int)&DAT_00558c08;
  *(unsigned char *)((int)puVar1 + 0x22a) = 1;
  temp_v0 = _Znwj(0x30);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002e7168(temp_v0,0x20000000);
  }
  puVar1[0x8b] = temp_v1;
  FUN_00109f4e(temp_v2);
  FUN_002ecb04(puVar1,temp_v2);
  destroyObj0055ae64(temp_v2);
  return puVar1;
}

} /* extern "C" */
