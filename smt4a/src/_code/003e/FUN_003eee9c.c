/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eee9c` (_code @ 0x3eee9c, 0x338 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0057392c; /* 0x57392c */
extern int DAT_00573930; /* 0x573930 */
extern int DAT_00573938; /* 0x573938 */
extern int DAT_0057393c; /* 0x57393c */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */
extern unsigned int DAT_00573af8; /* 0x573af8 */
extern unsigned int DAT_00573afc; /* 0x573afc */

extern unsigned int FUN_001ab888(void);
extern unsigned int FUN_001bce18(void);
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003eee9c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  short *psVar8;
  unsigned int *puVar9;
  unsigned int temp_v7;
  int temp_v8;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  unsigned int *puVar15;
  
  if (DAT_0057392c != 0) {
    temp_v2 = FUN_001ab888();
    rt_memcpy_w(DAT_0057392c,temp_v2,0x2d30);
  }
  if (DAT_00573930 != 0) {
    temp_v2 = FUN_001bce18();
    rt_memcpy(DAT_00573930,temp_v2,0x10b8);
  }
  piVar12 = (int *)(param_1 + 0x4e48);
  piVar14 = (int *)(param_1 + 0x1ed4);
  piVar13 = (int *)(param_1 + 0x1ffc);
  if (*piVar12 != 0) {
    rt_memcpy_w(*piVar12 + 0x1760,*piVar13,0x408);
    rt_memcpy_w(*piVar12 + 0x1b68,*piVar14,0x1d0);
    rt_memcpy_w(*piVar12 + 0x1d38,*piVar13 + 0x408,0x408);
    rt_memcpy_w(*piVar12 + 0x2140,*piVar14 + 0x1d0,0x1d0);
    rt_memcpy_w(*piVar12 + 0x2310,*piVar13 + 0x810,0x408);
    rt_memcpy_w(*piVar12 + 0x2718,*piVar14 + 0x3a0,0x1d0);
    rt_memcpy_w(*piVar12 + 0x28e8,*piVar13 + 0xc18,0x408);
    rt_memcpy_w(*piVar12 + 0x2cf0,*piVar14 + 0x570,0x1d0);
  }
  if (DAT_00573938 != 0) {
    temp_v2 = FUN_001ab888();
    rt_memcpy_w(temp_v2,DAT_00573938,0x2d30);
  }
  if (DAT_0057393c != 0) {
    temp_v2 = FUN_001bce18();
    rt_memcpy(temp_v2,DAT_0057393c,0x10b8);
  }
  puVar15 = (unsigned int *)(param_1 + 0x45a0);
  if (*piVar12 != 0) {
    temp_v8 = 0;
    do {
      rt_memcpy_w(*piVar13 + temp_v8 * 0x408,*piVar12 + temp_v8 * 0x5d8,0x408);
      rt_memcpy_w(*piVar14 + temp_v8 * 0x1d0,*piVar12 + temp_v8 * 0x5d8 + 0x408,0x1d0);
      if (((*puVar15 & DAT_00573af8) != 0 || (DAT_00573afc & *(unsigned int *)(param_1 + 0x45a4)) != 0) &&
         (temp_v4 = *piVar13 + temp_v8 * 0x408 + 0x164, temp_v4 != 0)) {
        *(unsigned short *)(temp_v4 + 0x1ce) = 0;
        *(unsigned short *)(temp_v4 + 0x1d0) = 0;
        *(unsigned short *)(temp_v4 + 0x1d2) = 0;
        *(unsigned short *)(temp_v4 + 0x1d4) = 0;
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 4);
    temp_v3 = *(unsigned int *)(*piVar13 + 0xd9b0);
    temp_v6 = *(unsigned int *)(*piVar13 + 0xd9b4);
    if (((DAT_00573978 & temp_v3) != 0 || (DAT_0057397c & temp_v6) != 0) &&
       ((temp_v3 & DAT_005739a0) == 0 && (temp_v6 & DAT_005739a4) == 0)) {
      *(unsigned char *)(param_1 + 0x4cd0) = 1;
    }
  }
  temp_v8 = 0;
  psVar8 = (short *)(param_1 + 0x2000);
  *psVar8 = 0;
  temp_v1 = DAT_005739a4;
  temp_v0 = DAT_005739a0;
  temp_v6 = DAT_0057397c;
  temp_v3 = DAT_00573978;
  do {
    puVar9 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v8 * 0x408);
    temp_v5 = *puVar9;
    temp_v7 = puVar9[1];
    if (((temp_v7 & temp_v6) != 0 || (temp_v5 & temp_v3) != 0) &&
       ((temp_v5 & temp_v0) == 0 && (temp_v7 & temp_v1) == 0)) {
      *psVar8 = *psVar8 + 1;
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 4);
  temp_v3 = ~DAT_00573aec;
  *puVar15 = *puVar15 & ~DAT_00573ae8;
  *(unsigned int *)(param_1 + 0x45a4) = *(unsigned int *)(param_1 + 0x45a4) & temp_v3;
  return;
}
