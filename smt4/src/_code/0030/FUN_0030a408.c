/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a408` (_code @ 0x30a408, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00296cc8(unsigned int);
extern int FUN_002bf244(unsigned int);
extern int FUN_002c08f0(unsigned int);
extern int aeabi_idivmod(unsigned int, unsigned int);


unsigned int FUN_0030a408(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_002bf244(temp_v0);
  if (temp_v2 != 0) {
    temp_v2 = FUN_002c08f0(temp_v0);
    temp_v3 = aeabi_idivmod(*(unsigned int *)(temp_v2 + 0x10),temp_v1);
    *(int *)(temp_v2 + 0x60) = -temp_v3;
  }
  return 1;
}
