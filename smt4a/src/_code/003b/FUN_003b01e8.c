/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b01e8` (_code @ 0x3b01e8, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570280; /* 0x570280 */
extern unsigned int *DAT_0057f244; /* 0x57f244 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00471340. */


void FUN_003b01e8(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  puVar1 = DAT_0057f244;
  temp_v1 = 0;
  if (*(short *)(DAT_0057f244 + 0x4a) != 0) {
    do {
      FUN_001641c4();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x4a));
  }
  temp_v1 = 0;
  do {
    FUN_00237210(puVar1[temp_v1 + 0x19b]);
    temp_v2 = temp_v1 + 1;
    puVar1[temp_v1 + 0x19b] = 0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 6);
  temp_v3 = 0;
  do {
    if (*(char *)((int)puVar1 + temp_v3 + 0x18) != '\0') {
      if ((temp_v3 & 0xff) == 0) {
        temp_v0 = 1;
      }
      else if ((temp_v3 & 0xff) == 1) {
        temp_v0 = 0xf;
      }
      else {
        temp_v0 = 0xffffffff;
      }
      FUN_002e132c(temp_v0);
      *(unsigned char *)((int)puVar1 + temp_v3 + 0x18) = 0;
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 2);
  temp_v1 = 0;
  do {
    FUN_0019a7f4(0x32,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  FUN_002e132c(0x32);
  if (puVar1[2] != 0) {
    FUN_0019a5a0();
    puVar1[2] = 0;
  }
  if (puVar1[3] != 0) {
    FUN_0019a5a0();
    puVar1[3] = 0;
  }
  FUN_00471340(DAT_00570280);
  FUN_001631d0(*puVar1,0);
  if (DAT_0057f244 != (unsigned int *)0x0) {
    FUN_002e3328();
    DAT_0057f244 = (unsigned int *)0x0;
  }
  return;
}
