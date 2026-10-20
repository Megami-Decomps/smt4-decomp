/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cbb4` (_code @ 0x31cbb4, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282924(unsigned int *, unsigned int);
int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int *FUN_002939f4(void);
extern unsigned int FUN_00296cc8(void);


unsigned int FUN_0031cbb4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_00296cc8();
  puVar2 = (unsigned int *)FUN_002939f4();
  FUN_00282924(puVar2,temp_v0);
  if (puVar2 != (unsigned int *)0x0) {
    FUN_0028dcb0((*puVar2 & 0x10000) != 0);
  }
  else {
    FUN_0028dcb0(0);
  }
  return 1;
}

} /* extern "C" */
