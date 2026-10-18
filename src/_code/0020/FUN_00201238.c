/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201238` (_code @ 0x201238, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00152af8. */
extern int FUN_00289640(void);
extern unsigned int FUN_00296f60(void);
extern int FUN_002bf41c(unsigned int);
extern int FUN_002c0ac8(unsigned int);


unsigned int FUN_00201238(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00289640();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002bf41c(temp_v0);
    if (temp_v1 == 0) {
      return 1;
    }
  }
  else {
    temp_v1 = FUN_002bf41c(temp_v0);
    if (temp_v1 == 0) {
      return 1;
    }
    temp_v1 = FUN_002c0ac8(temp_v0);
    if (*(int *)(temp_v1 + 0x18) != 0) {
      FUN_00152af8();
    }
    *(unsigned int *)(temp_v1 + 8) = 3;
    *(unsigned int *)(temp_v1 + 0xc) = 0;
  }
  return 0;
}
