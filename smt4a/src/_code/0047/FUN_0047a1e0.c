/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047a1e0` (_code @ 0x47a1e0, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_00164a9c(void);
extern int FUN_00167458(unsigned int *, unsigned int);
extern unsigned int FUN_0019d890(unsigned int, unsigned int);
extern int FUN_004cf8dc(unsigned int *, unsigned int);


unsigned int FUN_0047a1e0(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  
  puVar1 = (unsigned int *)FUN_00164a9c();
  puVar4 = puVar1 + 0x5e9;
  temp_v0 = *puVar4;
  if (temp_v0 != 0) {
    if (temp_v0 == 1) {
      return 0;
    }
    if (temp_v0 == 2) {
      temp_v1 = FUN_004cf8dc(puVar1 + 0x5ec,1);
      if (temp_v1 == 0) {
        return 0;
      }
      *puVar4 = 3;
      return 0;
    }
    if (temp_v0 != 3) {
      return 0;
    }
    temp_v0 = *puVar1 & 0xffffcfff;
  }
  else {
    temp_v1 = FUN_00167458(puVar1 + 0x5f4,0);
    if (temp_v1 == 0) {
      return 0;
    }
    *puVar4 = 1;
    *puVar1 = *puVar1 | 0x2000;
    temp_v0 = FUN_0019d890(0x2f,0x45);
    puVar1 = puVar1 + 0x5eb;
  }
  *puVar1 = temp_v0;
  return 0;
}
