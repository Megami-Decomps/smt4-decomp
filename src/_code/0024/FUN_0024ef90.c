/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024ef90` (_code @ 0x24ef90, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00155b74. */
extern int FUN_002c08f0(void);


void FUN_0024ef90(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  FUN_00155b74();
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x60) = 0;
  *(unsigned int *)(temp_v0 + 100) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = *(unsigned int *)(temp_v0 + 0x28);
  *(unsigned int *)(temp_v0 + 100) = *(unsigned int *)(temp_v0 + 0x30);
  *(unsigned int *)(temp_v0 + 0x60) = *(unsigned int *)(temp_v0 + 0x2c);
  return;
}
