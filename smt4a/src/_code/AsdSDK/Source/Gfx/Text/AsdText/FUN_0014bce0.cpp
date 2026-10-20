/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014bce0` (_code @ 0x14bce0, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163318(int, unsigned int);
int FUN_002e6dd0(int, int);

extern unsigned char DAT_005b3d54; /* 0x5b3d54 */

/* Supplied declaration required: FUN_00163318. */
/* Supplied declaration required: FUN_002e6dd0. */


int FUN_0014bce0(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0xbc;
  FUN_00163318(0xbc,param_1);
  *(unsigned int *)(temp_v0 + 0x34) = 0x402;
  *(unsigned char *)(temp_v0 + 0xac) = 0;
  *(unsigned int *)(temp_v0 + 0x50) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0xb0) = 0;
  *(unsigned int *)(temp_v0 + 0x9c) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x38) = (*(unsigned int *)((unsigned char *)&DAT_005b3d54 + 0x8)) & 0xffffff00;
  FUN_002e6dd0(temp_v0 + 0xb4,8);
  return temp_v0;
}

} /* extern "C" */
