/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270e34` (_code @ 0x270e34, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */
extern int DAT_00447e28; /* 0x447e28 */

/* Supplied declaration required: FUN_002897f0. */
/* Supplied declaration required: FUN_00289d74. */
/* Supplied declaration required: FUN_00289de4. */
extern int FUN_00289e54(int, unsigned int, unsigned int);
extern unsigned int FUN_00290d74(unsigned int, int);
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c5c04. */


unsigned int FUN_00270e34(void)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [132];
  
  temp_v0 = DAT_00447e28;
  FUN_002bff50();
  FUN_002be624(temp_v4,"event/e%03d/e%03d.bf",*(unsigned int *)(temp_v0 + 100),
               *(unsigned int *)(temp_v0 + 100));
  FUN_002be624(temp_v5,"event/e%03d/e%03d.mbm",*(unsigned int *)(temp_v0 + 100),
               *(unsigned int *)(temp_v0 + 100));
  temp_v1 = FUN_00289e54(DAT_00433158,*(unsigned int *)(temp_v0 + 100),0);
  if (temp_v1 != 0) {
    temp_v1 = DAT_00433158;
    FUN_00289de4(DAT_00433158,*(unsigned int *)(temp_v0 + 100),0);
    *(int *)(temp_v0 + 0x8c) = temp_v1;
    temp_v1 = DAT_00433158;
    FUN_00289d74(DAT_00433158,*(unsigned int *)(temp_v0 + 100),0);
    *(int *)(temp_v0 + 0x90) = temp_v1;
    if (*(int *)(temp_v0 + 0x8c) != 0) {
      if (temp_v1 != 0) goto LAB_00270f10;
      FUN_002c415c(*(int *)(temp_v0 + 0x8c));
      *(unsigned int *)(temp_v0 + 0x8c) = 0;
    }
    if (*(int *)(temp_v0 + 0x90) != 0) {
      FUN_002c415c();
      *(unsigned int *)(temp_v0 + 0x90) = 0;
    }
    return 0;
  }
  temp_v3 = FUN_002c5c04(temp_v4);
  *(unsigned int *)(temp_v0 + 0x8c) = temp_v3;
  temp_v1 = FUN_002c5c04(temp_v5);
  *(int *)(temp_v0 + 0x90) = temp_v1;
LAB_00270f10:
  temp_v2 = *(int *)(temp_v0 + 0x8c);
  FUN_00297060(temp_v2,temp_v1);
  *(int *)(temp_v0 + 0x94) = temp_v2;
  *(unsigned int *)(temp_v2 + 0x108) = 2;
  temp_v3 = *(unsigned int *)(temp_v0 + 100);
  FUN_002897f0(temp_v3,temp_v0 + 0x68);
  *(unsigned int *)(temp_v0 + 0x98) = temp_v3;
  temp_v3 = FUN_00290d74(*(unsigned int *)(temp_v0 + 0x8c),temp_v0 + 0x68);
  FUN_00296f4c(*(unsigned int *)(temp_v0 + 0x94),temp_v3);
  return 1;
}
