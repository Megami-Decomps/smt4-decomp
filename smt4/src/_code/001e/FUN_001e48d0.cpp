/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e48d0` (_code @ 0x1e48d0, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d2140(void);
int FUN_003d28d0(int *, int);

extern unsigned char g_btlAction; /* 0x434278 */

extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: FUN_003d2140. */
/* Supplied declaration required: FUN_003d28d0. */


unsigned int FUN_001e48d0(void)

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
  
  temp_v3 = jobGetWork();
  piVar3 = (*(int * *)((unsigned char *)&g_btlAction + 0x4));
  temp_v3 = *(int *)(temp_v3 + 0x84);
  temp_v1 = 1;
  puVar11 = (unsigned int *)((*(int * *)((unsigned char *)&g_btlAction + 0x4)) + temp_v3 * 0x3c7 + 1);
  temp_v4 = *(int *)(*(*(int * *)((unsigned char *)&g_btlAction + 0x4)) + 0x84) - 1;
  if (temp_v4 < 0) {
    temp_v4 = 3;
  }
  temp_v4 = jobIsValid(*(unsigned int *)(*(*(int * *)((unsigned char *)&g_btlAction + 0x4)) + temp_v4 * 4 + 0xc));
  piVar8 = (*(int * *)((unsigned char *)&g_btlAction + 0x4));
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
        temp_v4 = *(int *)(*(*(int * *)((unsigned char *)&g_btlAction + 0x4)) + 0x84);
        *(unsigned char *)((*(int * *)((unsigned char *)&g_btlAction + 0x4)) + temp_v4 * 0x3c7 + 2) =
             *(unsigned char *)((int)piVar3 + temp_v3 * 0xf1c + 9);
        *(unsigned short *)((int)piVar8 + temp_v4 * 0xf1c + 10) = 0;
        *(unsigned char *)((int)piVar8 + temp_v4 * 0xf1c + 9) = 0;
        piVar8[temp_v4 * 0x3c7 + 3] = 0;
        FUN_003d2140();
        *puVar11 = *puVar11 & 0xfffffffd;
        temp_v5 = 0;
      }
      return temp_v5;
    }
    FUN_003d28d0((*(int * *)((unsigned char *)&g_btlAction + 0x4)),(int)(char)piVar3[temp_v3 * 0x3c7 + 2]);
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

} /* extern "C" */
