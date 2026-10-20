/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035efe0` (_code @ 0x35efe0, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(...);

extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_0035efe0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_004ee568(DAT_0057113c);
  puVar3 = *(unsigned int **)(temp_v1 + 0x20);
  temp_v2 = puVar3[temp_v0 + 0xed];
  temp_v0 = FUN_004ee568(DAT_0057113c);
  if (((DAT_005702a0 & *puVar3) != 0 || (puVar3[1] & DAT_005702a4) != 0) &&
     (*(short *)(*(int *)(temp_v0 + 0x28) + 2) == 0x3b7)) {
    FUN_003283ac(0);
    return 1;
  }
  FUN_003283ac(temp_v2);
  return 1;
}

} /* extern "C" */
