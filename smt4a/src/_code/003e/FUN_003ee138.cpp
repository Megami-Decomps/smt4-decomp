/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ee138` (_code @ 0x3ee138, 0x5e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(...);
int FUN_003e9cec(...);
int FUN_004ca63c(...);
int rt_memcpy(...);
int rt_memcpy_w(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp438; /* 0x438: local_438 */
} param_1_stack;

extern int DAT_0057392c; /* 0x57392c */
extern int DAT_00573930; /* 0x573930 */
extern unsigned int DAT_00573934; /* 0x573934 */
extern int DAT_00573938; /* 0x573938 */
extern int DAT_0057393c; /* 0x57393c */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */

extern unsigned int FUN_001ab888(void);
extern unsigned int FUN_001bce18(void);
extern unsigned int FUN_00228ab0(int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003e9cec. */
/* Supplied declaration required: FUN_004ca63c. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003ee138(int param_1)

{
/* irregular: 5 goto(s); 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int *piVar9;
  unsigned int *puVar10;
  unsigned int temp_v8;
  int *piVar12;
  unsigned int temp_v9;
  int *piVar14;
  unsigned int *puVar15;
  short *psVar16;
  unsigned short temp_v10;
  unsigned char temp_v11 [676];
  int temp_v12;
  
  temp_v12 = param_1;
  if (DAT_00573938 != 0) {
    temp_v3 = FUN_001ab888();
    rt_memcpy_w(DAT_00573938,temp_v3,0x2d30);
  }
  if (DAT_0057393c != 0) {
    temp_v3 = FUN_001bce18();
    rt_memcpy(DAT_0057393c,temp_v3,0x10b8);
  }
  piVar14 = (int *)(temp_v12 + 0x4e48);
  piVar12 = (int *)(temp_v12 + 0x1ed4);
  piVar9 = (int *)(temp_v12 + 0x1ffc);
  if (*piVar14 != 0) {
    rt_memcpy_w(*piVar14,*piVar9,0x408);
    rt_memcpy_w(*piVar14 + 0x408,*piVar12,0x1d0);
    rt_memcpy_w(*piVar14 + 0x5d8,*piVar9 + 0x408,0x408);
    rt_memcpy_w(*piVar14 + 0x9e0,*piVar12 + 0x1d0,0x1d0);
    rt_memcpy_w(*piVar14 + 0xbb0,*piVar9 + 0x810,0x408);
    rt_memcpy_w(*piVar14 + 0xfb8,*piVar12 + 0x3a0,0x1d0);
    rt_memcpy_w(*piVar14 + 0x1188,*piVar9 + 0xc18,0x408);
    rt_memcpy_w(*piVar14 + 0x1590,*piVar12 + 0x570,0x1d0);
    rt_memcpy_w(*piVar14 + 0x2ec0,*piVar9 + 0xd9b0,0x408);
    rt_memcpy_w(*piVar14 + 13000,*piVar12 + 0x61e0,0x1d0);
  }
  if (DAT_0057392c != 0) {
    temp_v3 = FUN_001ab888();
    rt_memcpy_w(temp_v3,DAT_0057392c,0x2d30);
  }
  if (DAT_00573930 != 0) {
    temp_v3 = FUN_001bce18();
    rt_memcpy(temp_v3,DAT_00573930,0x10b8);
  }
  temp_v4 = *piVar14;
  if (temp_v4 != 0) {
    if ((*(unsigned int *)(temp_v4 + 0x3498) & 1) == 0) {
      temp_v4 = 0;
LAB_003ee410:
      sysMemClear(*piVar9 + temp_v4 * 0x408,0x408);
      puVar15 = (unsigned int *)(*piVar9 + temp_v4 * 0x408);
      *puVar15 = 0;
      puVar15[1] = 0;
      temp_v10 = (unsigned short)temp_v4;
      *(unsigned short *)(*piVar9 + temp_v4 * 0x408 + 0x6c) = 0;
      *(unsigned short *)(*piVar9 + temp_v4 * 0x408 + 0x6e) = temp_v10;
      *(unsigned int *)(*piVar9 + temp_v4 * 0x408 + 0x3f8) = 0;
      temp_v5 = 0;
      *(unsigned int *)(*piVar9 + temp_v4 * 0x408 + 0x3fc) = 0;
      temp_v6 = 0x32;
      *(unsigned int *)(*piVar9 + temp_v4 * 0x408 + 0x400) = 0;
      *(unsigned int *)(*piVar9 + temp_v4 * 0x408 + 0x404) = 0;
      puVar15 = (unsigned int *)(*piVar9 + temp_v4 * 0x408 + 0x3b4);
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xb] = 0;
      puVar15[0xc] = 0;
      puVar15[0xd] = 0;
      puVar15[0xe] = 0;
      puVar15[0xf] = 0;
LAB_003ee710:
      *(unsigned short *)(*piVar9 + temp_v4 * 0x408 + 8) = 0;
LAB_003ee510:
      temp_v6 = temp_v6 - 1;
      temp_v5 = temp_v5 + 1;
      if (temp_v6 == 0) {
        *(unsigned short *)(*piVar9 + temp_v4 * 0x408 + 0x16c) = 0xffff;
        sysMemClear(*piVar12 + temp_v4 * 0x1d0,0x1d0);
        *(unsigned short *)(*piVar12 + temp_v4 * 0x1d0 + 0x6a) = temp_v10;
        *(unsigned short *)(*piVar12 + temp_v4 * 0x1d0 + 0x68) = 0xffff;
        temp_v5 = temp_v4 * 0x1d0;
        *(unsigned int *)(*piVar12 + temp_v4 * 0x1d0 + 0x104) = 0xffffffff;
        temp_v6 = temp_v4 * 0x1d0;
        temp_v4 = temp_v4 + 1;
        *(unsigned int *)(*piVar12 + temp_v5 + 0x108) = 0xffffffff;
        *(unsigned int *)(*piVar12 + temp_v6 + 0xa8) = 0x96;
        if (temp_v4 >= 4) {
          FUN_003e9cec(temp_v12,temp_v11,DAT_00573934,1);
          FUN_004ca63c(temp_v12,temp_v11,0,0,0);
          temp_v4 = 0;
          do {
            if (-1 < *(char *)(DAT_0057392c + temp_v4 + 0x1ca0)) {
              temp_v3 = FUN_00228ab0(temp_v4);
              FUN_003e9cec(temp_v12,temp_v11,temp_v3,0);
              FUN_004ca63c(temp_v12,temp_v11,0,temp_v4 + 1,0);
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 3);
          *(unsigned int *)(*piVar14 + 0x3498) = *(unsigned int *)(*piVar14 + 0x3498) | 1;
          goto LAB_003ee650;
        }
        goto LAB_003ee410;
      }
      if (temp_v5 != 0) goto LAB_003ee500;
      goto LAB_003ee710;
    }
    rt_memcpy_w(*piVar9,temp_v4 + 0x1760,0x408);
    rt_memcpy_w(*piVar12,*piVar14 + 0x1b68,0x1d0);
    rt_memcpy_w(*piVar9 + 0x408,*piVar14 + 0x1d38,0x408);
    rt_memcpy_w(*piVar12 + 0x1d0,*piVar14 + 0x2140,0x1d0);
    rt_memcpy_w(*piVar9 + 0x810,*piVar14 + 0x2310,0x408);
    rt_memcpy_w(*piVar12 + 0x3a0,*piVar14 + 0x2718,0x1d0);
    rt_memcpy_w(*piVar9 + 0xc18,*piVar14 + 0x28e8,0x408);
    rt_memcpy_w(*piVar12 + 0x570,*piVar14 + 0x2cf0,0x1d0);
LAB_003ee650:
    *(unsigned char *)(temp_v12 + 0x4cd0) = 0;
  }
  temp_v4 = 0;
  psVar16 = (short *)(temp_v12 + 0x2000);
  *psVar16 = 0;
  temp_v2 = DAT_005739a4;
  temp_v1 = DAT_005739a0;
  temp_v0 = DAT_0057397c;
  temp_v7 = DAT_00573978;
  do {
    puVar10 = (unsigned int *)(*(int *)(temp_v12 + 0x1ffc) + temp_v4 * 0x408);
    temp_v9 = *puVar10;
    temp_v8 = puVar10[1];
    if (((temp_v8 & temp_v0) != 0 || (temp_v9 & temp_v7) != 0) &&
       ((temp_v8 & temp_v2) == 0 && (temp_v9 & temp_v1) == 0)) {
      *psVar16 = *psVar16 + 1;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 4);
  temp_v7 = DAT_00573ae8 | *(unsigned int *)(temp_v12 + 0x45a0);
  *(unsigned int *)(temp_v12 + 0x45a4) = *(unsigned int *)(temp_v12 + 0x45a4) | DAT_00573aec;
  *(unsigned int *)(temp_v12 + 0x45a0) = temp_v7;
  return;
LAB_003ee500:
  *(unsigned short *)(*piVar9 + temp_v4 * 0x408 + temp_v5 * 2 + 8) = 0xffff;
  goto LAB_003ee510;
}

} /* extern "C" */
