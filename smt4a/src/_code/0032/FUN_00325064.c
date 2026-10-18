/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325064` (_code @ 0x325064, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00162e8c. */
extern int FUN_001861ec(unsigned char);


unsigned char FUN_00325064(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_00162e8c();
  if (temp_v0 != 0) {
    puVar2 = (unsigned char *)FUN_00162e8c();
    if (puVar2 != (unsigned char *)0x0) {
      puVar2 = puVar2 + 0x1590;
    }
    temp_v0 = FUN_001861ec(*puVar2);
    if (temp_v0 != 0) {
      return *(short *)(temp_v0 + 6) != 0;
    }
  }
  return 0;
}
