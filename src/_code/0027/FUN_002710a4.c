/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002710a4` (_code @ 0x2710a4, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */
extern int DAT_00447e28; /* 0x447e28 */

/* Supplied declaration required: FUN_00289a58. */
/* Supplied declaration required: FUN_00289fdc. */
/* Supplied declaration required: FUN_0028a04c. */
extern int FUN_0028a0bc(int, unsigned int, unsigned int);
extern unsigned int FUN_00291018(unsigned int, int);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c5e2c. */


unsigned int FUN_002710a4(void)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [132];
  
  temp_v0 = DAT_00447e28;
  FUN_002c0128();
  FUN_002be7fc(temp_v4,"event/e%03d/e%03d.bf",*(unsigned int *)(temp_v0 + 100),
               *(unsigned int *)(temp_v0 + 100));
  FUN_002be7fc(temp_v5,"event/e%03d/e%03d.mbm",*(unsigned int *)(temp_v0 + 100),
               *(unsigned int *)(temp_v0 + 100));
  temp_v1 = FUN_0028a0bc(DAT_00433158,*(unsigned int *)(temp_v0 + 100),0);
  if (temp_v1 != 0) {
    temp_v1 = DAT_00433158;
    FUN_0028a04c(DAT_00433158,*(unsigned int *)(temp_v0 + 100),0);
    *(int *)(temp_v0 + 0x8c) = temp_v1;
    temp_v1 = DAT_00433158;
    FUN_00289fdc(DAT_00433158,*(unsigned int *)(temp_v0 + 100),0);
    *(int *)(temp_v0 + 0x90) = temp_v1;
    if (*(int *)(temp_v0 + 0x8c) != 0) {
      if (temp_v1 != 0) goto LAB_00271180;
      FUN_002c4360(*(int *)(temp_v0 + 0x8c));
      *(unsigned int *)(temp_v0 + 0x8c) = 0;
    }
    if (*(int *)(temp_v0 + 0x90) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v0 + 0x90) = 0;
    }
    return 0;
  }
  temp_v3 = FUN_002c5e2c(temp_v4);
  *(unsigned int *)(temp_v0 + 0x8c) = temp_v3;
  temp_v1 = FUN_002c5e2c(temp_v5);
  *(int *)(temp_v0 + 0x90) = temp_v1;
LAB_00271180:
  temp_v2 = *(int *)(temp_v0 + 0x8c);
  FUN_002972f8(temp_v2,temp_v1);
  *(int *)(temp_v0 + 0x94) = temp_v2;
  *(unsigned int *)(temp_v2 + 0x108) = 2;
  temp_v3 = *(unsigned int *)(temp_v0 + 100);
  FUN_00289a58(temp_v3,temp_v0 + 0x68);
  *(unsigned int *)(temp_v0 + 0x98) = temp_v3;
  temp_v3 = FUN_00291018(*(unsigned int *)(temp_v0 + 0x8c),temp_v0 + 0x68);
  FUN_002971e4(*(unsigned int *)(temp_v0 + 0x94),temp_v3);
  return 1;
}
