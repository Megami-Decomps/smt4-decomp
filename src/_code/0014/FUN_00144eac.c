/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00144eac` (_code @ 0x144eac, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004729b8; /* 0x4729b8 */
extern signed char DAT_004729b9; /* 0x4729b9 */
extern int DAT_004729bc; /* 0x4729bc */

/* Supplied declaration required: FUN_002bcf58. */


void FUN_00144eac(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  short *psVar3;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = DAT_004729bc;
  temp_v0 = '\0';
  if (DAT_004729b8 != '\0') {
    temp_v0 = DAT_004729b9;
  }
  if (DAT_004729b8 != '\0' && temp_v0 != '\0') {
    psVar3 = (short *)(DAT_004729bc + 0x4e00);
    *(unsigned short *)(DAT_004729bc + 0x4e02) = 0;
    *(unsigned int *)(temp_v2 + 0x4e2c) = 0;
    if (*psVar3 >= 0x40) {
      FUN_002bcf58(temp_v2,temp_v2 + 0x138,0x138);
      temp_v2 = 1;
      temp_v3 = 1;
      do {
        temp_v1 = DAT_004729bc + temp_v2 * 0x138;
        FUN_002bcf58(temp_v1,temp_v1 + 0x138,0x138);
        temp_v1 = DAT_004729bc + (temp_v2 + 1) * 0x138;
        FUN_002bcf58(temp_v1,temp_v1 + 0x138,0x138);
        temp_v3 = temp_v3 + 2;
        temp_v2 = temp_v2 + 2;
      } while (temp_v3 < 0x3f);
      *(unsigned short *)(DAT_004729bc + 0x4e00) = 0x3f;
    }
    temp_v2 = DAT_004729bc;
    psVar3 = (short *)(DAT_004729bc + 0x4e00);
    *(unsigned char *)(DAT_004729bc + *psVar3 * 0x138) = 0;
    *(unsigned char *)(temp_v2 + *psVar3 * 0x138 + 3) = 0xff;
  }
  return;
}
