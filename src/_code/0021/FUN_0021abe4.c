/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021abe4` (_code @ 0x21abe4, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0024fab8. */
/* Supplied declaration required: FUN_0024fd10. */
/* Supplied declaration required: FUN_00269404. */
/* Supplied declaration required: FUN_00269594. */


unsigned int * FUN_0021abe4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  
  puVar3 = *(unsigned int **)(*(int *)(param_1 + 0x30) + 0x24);
  puVar1 = puVar3;
  FUN_0024fd10();
  FUN_0024fab8(puVar1,**(unsigned short **)(param_1 + 0x30),param_1 + 0xc);
  temp_v0 = (unsigned int)**(unsigned short **)(param_1 + 0x30);
  if (puVar1[0xc] != 0) {
    FUN_00269594();
  }
  FUN_00269404(temp_v0,*puVar1,puVar3);
  puVar1[0xc] = temp_v0;
  return puVar1;
}
