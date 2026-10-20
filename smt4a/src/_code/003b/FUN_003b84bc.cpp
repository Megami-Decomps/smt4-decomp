/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b84bc` (_code @ 0x3b84bc, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005702c0; /* 0x5702c0 */
extern unsigned int DAT_005702c4; /* 0x5702c4 */
extern unsigned int DAT_005702c8; /* 0x5702c8 */
extern unsigned int DAT_005702cc; /* 0x5702cc */
extern unsigned int DAT_005702d0; /* 0x5702d0 */
extern unsigned int DAT_005702d4; /* 0x5702d4 */

extern int FUN_004ee568(unsigned int);


unsigned int FUN_003b84bc(unsigned int *param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  temp_v1 = FUN_004ee568(*param_1);
  temp_v0 = DAT_005702d0;
  puVar4 = *(unsigned int **)(temp_v1 + 0x20);
  temp_v2 = DAT_005702c0 | *puVar4 | DAT_005702c8;
  puVar4[1] = puVar4[1] | DAT_005702c4 | DAT_005702cc | DAT_005702d4;
  *puVar4 = temp_v2 | temp_v0;
  return 1;
}

} /* extern "C" */
