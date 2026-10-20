/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a538` (_code @ 0x38a538, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);
int FUN_0019a7f4(unsigned int, unsigned int);
int FUN_002e132c(int);

extern int DAT_0057f3c4; /* 0x57f3c4 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_002e132c. */
extern int FUN_00341940(unsigned int);


void FUN_0038a538(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  puVar3 = *(unsigned int **)(param_1 * 4 + 0x57f3c8);
  if ((unsigned int)puVar3[9] < 4) {
    temp_v0 = puVar3[9] * 0x10;
    if (*(int *)(temp_v0 + 0x57f444) != 0) {
      *(int *)(temp_v0 + 0x57f444) = *(int *)(temp_v0 + 0x57f444) - 1;
    }
    else {
      temp_v1 = FUN_0018206c(*(unsigned int *)(temp_v0 + 0x57f43c),*(unsigned int *)(temp_v0 + 0x57f440));
      if (temp_v1 != 0) {
        FUN_0019a7f4(*(unsigned int *)(temp_v0 + 0x57f43c),*(unsigned int *)(temp_v0 + 0x57f440));
      }
    }
    if (DAT_0057f3c4 >= 1) {
      DAT_0057f3c4 = DAT_0057f3c4 - 1;
    }
    else {
      temp_v0 = FUN_00341940(0x35);
      if (temp_v0 != 0) {
        FUN_002e132c(0x35);
        DAT_0057f3c4 = 0;
      }
    }
  }
  FUN_001631d0(*puVar3,0);
  FUN_0019a5a0(puVar3);
  *(unsigned int *)(param_1 * 4 + 0x57f3c8) = 0;
  return;
}

} /* extern "C" */
