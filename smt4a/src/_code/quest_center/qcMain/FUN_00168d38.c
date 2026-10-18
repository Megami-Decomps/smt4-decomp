/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00168d38` (_code @ 0x168d38, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00588c30; /* 0x588c30 */

extern int FUN_00184e20(unsigned int);
extern int FUN_00191848(unsigned int);
extern int FUN_0019196c(int, unsigned int);
/* Supplied declaration required: FUN_001919a4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */


unsigned int FUN_00168d38(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar2 = DAT_00588c30;
  if (DAT_00588c30 != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*DAT_00588c30);
    puVar3 = DAT_00588c30;
    if ((temp_v0 == 0) && (*(char *)(puVar2 + 6) != '\0')) {
      if (DAT_00588c30 != (unsigned int *)0x0) {
        piVar1 = (int *)(DAT_00588c30 + 7);
        *(unsigned char *)(DAT_00588c30 + 6) = 1;
        if (*piVar1 != 0) {
          FUN_001919a4();
          FUN_002e3328(puVar3[7]);
          puVar3[7] = 0;
        }
        FUN_0019a5a0(DAT_00588c30);
        DAT_00588c30 = (unsigned int *)0x0;
      }
    }
    else if (DAT_00588c30 != (unsigned int *)0x0) {
      temp_v1 = 0;
      if (((DAT_00588c30[7] != 0) &&
          (temp_v0 = FUN_0019196c(DAT_00588c30[7],param_1), temp_v1 = 0, temp_v0 != 0)) &&
         (temp_v0 = FUN_00191848(puVar3[7]), temp_v1 = 0, temp_v0 != 0)) {
        temp_v1 = 1;
      }
      return temp_v1;
    }
  }
  return 0;
}
