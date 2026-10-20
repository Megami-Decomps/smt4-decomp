/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300224` (_code @ 0x300224, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00255180(unsigned int, int, int);
int FUN_00282924(unsigned int *, unsigned int);
int FUN_00296cc8(int);

/* Supplied declaration required: FUN_00255180. */
/* Supplied declaration required: FUN_00282924. */
extern unsigned int *FUN_002939f4(void);
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_00300224(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  puVar3 = (unsigned int *)FUN_002939f4();
  FUN_00282924(puVar3,temp_v0);
  if (puVar3 != (unsigned int *)0x0) {
    if (temp_v1 != 1) {
      if (temp_v1 == 2) {
        *puVar3 = *puVar3 | 0x40000;
        FUN_00255180(temp_v0,0x15,2);
      }
    }
    else {
      *puVar3 = *puVar3 | 0x20000;
      FUN_00255180(temp_v0,0x15,1);
    }
  }
  return 1;
}

} /* extern "C" */
