/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e47dc` (_code @ 0x1e47dc, 0x140 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_0043427c; /* 0x43427c */

extern int FUN_002bf41c(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_003d236c. */
/* Supplied declaration required: FUN_003d2afc. */


unsigned int FUN_001e47dc(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int *piVar3;
  char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar8;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned int *puVar11;
  
  temp_v3 = FUN_002c0ac8();
  piVar3 = DAT_0043427c;
  temp_v3 = *(int *)(temp_v3 + 0x84);
  temp_v1 = 1;
  puVar11 = (unsigned int *)(DAT_0043427c + temp_v3 * 0x3c7 + 1);
  temp_v4 = *(int *)(*DAT_0043427c + 0x84) - 1;
  if (temp_v4 < 0) {
    temp_v4 = 3;
  }
  temp_v4 = FUN_002bf41c(*(unsigned int *)(*DAT_0043427c + temp_v4 * 4 + 0xc));
  piVar8 = DAT_0043427c;
  if (temp_v4 == 0) {
    temp_v7 = 0xff;
  }
  else {
    temp_v7 = *(unsigned char *)(piVar3 + *(int *)(*piVar3 + 0x84) * 0x3c7 + 2);
  }
  temp_v6 = *puVar11;
  if ((temp_v6 & 2) != 0) {
    temp_v2 = *(char *)((int)piVar3 + temp_v3 * 0xf1c + 9);
  }
  else {
    temp_v2 = (char)piVar3[temp_v3 * 0x3c7 + 2];
  }
  if ((temp_v2 == '\v') && (temp_v7 < 0x1c)) {
    temp_v1 = 0;
  }
  if (((temp_v6 & 0x40) == 0) && (temp_v1)) {
    if ((temp_v6 & 2) != 0) {
      if ((char)piVar3[temp_v3 * 0x3c7 + 2] == '#') {
        temp_v5 = 0xffffffff;
      }
      else {
        temp_v4 = *(int *)(*DAT_0043427c + 0x84);
        *(unsigned char *)(DAT_0043427c + temp_v4 * 0x3c7 + 2) =
             *(unsigned char *)((int)piVar3 + temp_v3 * 0xf1c + 9);
        *(unsigned short *)((int)piVar8 + temp_v4 * 0xf1c + 10) = 0;
        *(unsigned char *)((int)piVar8 + temp_v4 * 0xf1c + 9) = 0;
        piVar8[temp_v4 * 0x3c7 + 3] = 0;
        FUN_003d236c();
        *puVar11 = *puVar11 & 0xfffffffd;
        temp_v5 = 0;
      }
      return temp_v5;
    }
    FUN_003d2afc(DAT_0043427c,(int)(char)piVar3[temp_v3 * 0x3c7 + 2]);
    if (piVar8 != (int *)0x0) {
      *puVar11 = *puVar11 | 2;
    }
    temp_v0 = *(short *)((int)piVar3 + temp_v3 * 0xf1c + 10);
    if (temp_v0 != -1) {
      *(short *)((int)piVar3 + temp_v3 * 0xf1c + 10) = temp_v0 + 1;
    }
  }
  return 0;
}
