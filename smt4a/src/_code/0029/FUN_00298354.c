/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298354` (_code @ 0x298354, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_0057113c; /* 0x57113c */

extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_004eb928. */
/* Supplied declaration required: FUN_004ec120. */


unsigned int FUN_00298354(void)

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
  
  temp_v3 = FUN_00164a9c();
  piVar3 = DAT_0057113c;
  temp_v3 = *(int *)(temp_v3 + 0xa4);
  temp_v1 = 1;
  puVar11 = (unsigned int *)(DAT_0057113c + temp_v3 * 0x495 + 1);
  temp_v4 = *(int *)(*DAT_0057113c + 0xa4) - 1;
  if (temp_v4 < 0) {
    temp_v4 = 0xb;
  }
  temp_v4 = FUN_00163e40(*(unsigned int *)(*DAT_0057113c + temp_v4 * 4 + 0xc));
  piVar8 = DAT_0057113c;
  if (temp_v4 == 0) {
    temp_v7 = 0xff;
  }
  else {
    temp_v7 = *(unsigned char *)(piVar3 + *(int *)(*piVar3 + 0xa4) * 0x495 + 2);
  }
  temp_v6 = *puVar11;
  if ((temp_v6 & 2) != 0) {
    temp_v2 = *(char *)((int)piVar3 + temp_v3 * 0x1254 + 9);
  }
  else {
    temp_v2 = (char)piVar3[temp_v3 * 0x495 + 2];
  }
  if ((temp_v2 == '\v') && (temp_v7 < 0x1e)) {
    temp_v1 = 0;
  }
  if (((temp_v6 & 0x40) == 0) && (temp_v1)) {
    if ((temp_v6 & 2) != 0) {
      if ((char)piVar3[temp_v3 * 0x495 + 2] == '&') {
        temp_v5 = 0xffffffff;
      }
      else {
        temp_v4 = *(int *)(*DAT_0057113c + 0xa4);
        *(unsigned char *)(DAT_0057113c + temp_v4 * 0x495 + 2) =
             *(unsigned char *)((int)piVar3 + temp_v3 * 0x1254 + 9);
        *(unsigned short *)((int)piVar8 + temp_v4 * 0x1254 + 10) = 0;
        *(unsigned char *)((int)piVar8 + temp_v4 * 0x1254 + 9) = 0;
        piVar8[temp_v4 * 0x495 + 3] = 0;
        FUN_004eb928();
        *puVar11 = *puVar11 & 0xfffffffd;
        temp_v5 = 0;
      }
      return temp_v5;
    }
    FUN_004ec120(DAT_0057113c,(int)(char)piVar3[temp_v3 * 0x495 + 2]);
    if (piVar8 != (int *)0x0) {
      *puVar11 = *puVar11 | 2;
    }
    temp_v0 = *(short *)((int)piVar3 + temp_v3 * 0x1254 + 10);
    if (temp_v0 != -1) {
      *(short *)((int)piVar3 + temp_v3 * 0x1254 + 10) = temp_v0 + 1;
    }
  }
  return 0;
}
