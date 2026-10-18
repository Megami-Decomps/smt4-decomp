/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030afd4` (_code @ 0x30afd4, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_002b9364. */


unsigned int FUN_0030afd4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v0 = FUN_00293c98();
    puVar2 = (unsigned int *)(*(int *)(temp_v0 + 0x1fc0) + temp_v2 * 0x288);
    temp_v1 = *puVar2;
    if (((temp_v1 & 0x10) != 0 && (temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0)) {
      temp_v1 = (unsigned int)*(unsigned short *)((int)puVar2 + 0xce);
      FUN_002b9364();
      if (*(char *)(temp_v1 + 5) == '\x01') {
        FUN_0028df54(1);
        return 1;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  FUN_0028df54(0);
  return 1;
}
