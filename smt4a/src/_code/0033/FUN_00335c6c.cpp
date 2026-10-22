/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335c6c` (_code @ 0x335c6c, 0x734 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdDeallocateArrayStorage(int, int, int);
int dataTable8FindRecord(void);
int dataTable04FindById(void);
int sysMemClear(int [21], int);

extern unsigned int g_btlCandidateMasks; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern unsigned short *FUN_001006c2(int, unsigned int);
/* Supplied declaration required: asdDeallocateArrayStorage. */
extern int btlGetMainState(void);
/* Supplied declaration required: dataTable8FindRecord. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: sysMemClear. */
extern int flagValueIsPositive(int);


void FUN_00335c6c(void)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned short *puVar7;
  int temp_v6;
  int temp_v7;
  unsigned short *puVar10;
  unsigned short *puVar11;
  unsigned int temp_v8;
  unsigned short *puVar13;
  int temp_v9;
  unsigned short *puVar15;
  unsigned short *puVar16;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int *puVar19;
  unsigned int temp_v12;
  unsigned short *puVar21;
  int *piVar22;
  unsigned short *puVar23;
  int *piVar24;
  unsigned char temp_v13;
  int aiStack_78 [21];
  
  temp_v6 = btlGetMainState();
  piVar22 = (int *)(temp_v6 + 0x4e58);
  temp_v9 = *(int *)(temp_v6 + 0x4e5c);
  if (*piVar22 != temp_v9) {
    temp_v9 = temp_v9 - ((temp_v9 - *piVar22) & 0xfffffffeU);
    *(int *)(temp_v6 + 0x4e5c) = temp_v9;
  }
  if (*piVar22 != temp_v9) {
    *(unsigned int *)(temp_v6 + 0x4e5c) = temp_v9 - ((temp_v9 - *piVar22) & 0xfffffffeU);
  }
  temp_v9 = 1;
  do {
    temp_v7 = flagValueIsPositive(temp_v9);
    if (temp_v7 != 0) {
      temp_v1 = (unsigned short)temp_v9;
      puVar10 = *(unsigned short **)(temp_v6 + 0x4e5c);
      if (puVar10 != *(unsigned short **)(temp_v6 + 0x4e60)) {
        *(unsigned short **)(temp_v6 + 0x4e5c) = puVar10 + 1;
        if (puVar10 != (unsigned short *)0x0) {
          *puVar10 = temp_v1;
        }
      }
      else {
        temp_v8 = ((int)puVar10 - *piVar22) >> 1;
        if (temp_v8 < (unsigned int)(((int)*(unsigned short **)(temp_v6 + 0x4e60) - *piVar22) >> 1)) {
          *(unsigned short **)(temp_v6 + 0x4e5c) = puVar10 + 1;
          if (puVar10 != (unsigned short *)0x0) {
            *puVar10 = puVar10[-1];
          }
          puVar15 = puVar10 + -1;
          temp_v7 = (int)puVar15 - (int)puVar10;
          if (0 < temp_v7 >> 1) {
            puVar16 = puVar10;
            if (temp_v7 * 0x40000000 < 0) {
              puVar15 = puVar10 + -2;
              puVar16 = puVar10 + -1;
              *puVar16 = *puVar15;
            }
            for (temp_v7 = temp_v7 >> 2; temp_v7 != 0; temp_v7 = temp_v7 - 1) {
              puVar16[-1] = puVar15[-1];
              puVar15 = puVar15 + -2;
              puVar16 = puVar16 + -2;
              *puVar16 = *puVar15;
            }
          }
          *puVar10 = temp_v1;
        }
        else {
          temp_v11 = temp_v8 + (temp_v8 >> 1) + (temp_v8 >> 3);
          if (temp_v11 < temp_v8 + 0x20) {
            temp_v11 = temp_v8 + 0x20;
          }
          puVar11 = (unsigned short *)FUN_001006c2(temp_v11 << 1,0);
          puVar16 = puVar11;
          for (puVar15 = (unsigned short *)*piVar22; puVar15 != puVar10; puVar15 = puVar15 + 1) {
            if (puVar16 != (unsigned short *)0x0) {
              *puVar16 = *puVar15;
            }
            puVar16 = puVar16 + 1;
          }
          puVar15 = (unsigned short *)((((int)puVar10 - *piVar22) & 0xfffffffeU) + (int)puVar11);
          if (puVar15 != (unsigned short *)0x0) {
            *puVar15 = temp_v1;
          }
          puVar16 = *(unsigned short **)(temp_v6 + 0x4e5c);
          puVar15 = (unsigned short *)((((int)puVar10 - *piVar22) & 0xfffffffeU) + (int)puVar11);
          for (; puVar10 != puVar16; puVar10 = puVar10 + 1) {
            puVar15 = puVar15 + 1;
            if (puVar15 != (unsigned short *)0x0) {
              *puVar15 = *puVar10;
            }
          }
          temp_v7 = *piVar22;
          temp_v10 = *(int *)(temp_v6 + 0x4e5c);
          asdDeallocateArrayStorage(temp_v7,(*(int *)(temp_v6 + 0x4e60) - temp_v7) >> 1,0);
          *(unsigned short **)(temp_v6 + 0x4e60) = puVar11 + temp_v11;
          *(unsigned short **)(temp_v6 + 0x4e5c) = puVar11 + ((temp_v10 - temp_v7) >> 1) + 1;
          *piVar22 = (int)puVar11;
        }
      }
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x3c);
  temp_v9 = 0x79f;
  do {
    temp_v7 = flagValueIsPositive(temp_v9);
    if (temp_v7 != 0) {
      puVar10 = *(unsigned short **)(temp_v6 + 0x4e5c);
      temp_v1 = (unsigned short)temp_v9;
      if (puVar10 != *(unsigned short **)(temp_v6 + 0x4e60)) {
        *(unsigned short **)(temp_v6 + 0x4e5c) = puVar10 + 1;
        if (puVar10 != (unsigned short *)0x0) {
          *puVar10 = temp_v1;
        }
      }
      else {
        temp_v8 = ((int)puVar10 - *piVar22) >> 1;
        if (temp_v8 < (unsigned int)(((int)*(unsigned short **)(temp_v6 + 0x4e60) - *piVar22) >> 1)) {
          *(unsigned short **)(temp_v6 + 0x4e5c) = puVar10 + 1;
          if (puVar10 != (unsigned short *)0x0) {
            *puVar10 = puVar10[-1];
          }
          puVar15 = puVar10 + -1;
          temp_v7 = (int)puVar15 - (int)puVar10;
          if (0 < temp_v7 >> 1) {
            puVar16 = puVar10;
            if (temp_v7 * 0x40000000 < 0) {
              puVar15 = puVar10 + -2;
              puVar16 = puVar10 + -1;
              *puVar16 = *puVar15;
            }
            for (temp_v7 = temp_v7 >> 2; temp_v7 != 0; temp_v7 = temp_v7 - 1) {
              puVar16[-1] = puVar15[-1];
              puVar15 = puVar15 + -2;
              puVar16 = puVar16 + -2;
              *puVar16 = *puVar15;
            }
          }
          *puVar10 = temp_v1;
        }
        else {
          temp_v11 = temp_v8 + (temp_v8 >> 1) + (temp_v8 >> 3);
          if (temp_v11 < temp_v8 + 0x20) {
            temp_v11 = temp_v8 + 0x20;
          }
          puVar11 = (unsigned short *)FUN_001006c2(temp_v11 << 1,0);
          puVar16 = puVar11;
          for (puVar15 = (unsigned short *)*piVar22; puVar15 != puVar10; puVar15 = puVar15 + 1) {
            if (puVar16 != (unsigned short *)0x0) {
              *puVar16 = *puVar15;
            }
            puVar16 = puVar16 + 1;
          }
          puVar15 = (unsigned short *)((((int)puVar10 - *piVar22) & 0xfffffffeU) + (int)puVar11);
          if (puVar15 != (unsigned short *)0x0) {
            *puVar15 = temp_v1;
          }
          puVar16 = *(unsigned short **)(temp_v6 + 0x4e5c);
          puVar15 = (unsigned short *)((((int)puVar10 - *piVar22) & 0xfffffffeU) + (int)puVar11);
          for (; puVar10 != puVar16; puVar10 = puVar10 + 1) {
            puVar15 = puVar15 + 1;
            if (puVar15 != (unsigned short *)0x0) {
              *puVar15 = *puVar10;
            }
          }
          temp_v7 = *piVar22;
          temp_v10 = *(int *)(temp_v6 + 0x4e5c);
          asdDeallocateArrayStorage(temp_v7,(*(int *)(temp_v6 + 0x4e60) - temp_v7) >> 1,0);
          *(unsigned short **)(temp_v6 + 0x4e60) = puVar11 + temp_v11;
          *(unsigned short **)(temp_v6 + 0x4e5c) = puVar11 + ((temp_v10 - temp_v7) >> 1) + 1;
          *piVar22 = (int)puVar11;
        }
      }
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x7df);
  piVar24 = (int *)(temp_v6 + 0x4e5c);
  if (*piVar22 != *piVar24) {
    temp_v2 = 0;
    temp_v3 = 0;
    temp_v4 = 0;
    temp_v9 = 0;
    do {
      temp_v7 = btlGetMainState();
      puVar19 = (unsigned int *)(*(int *)(temp_v7 + 0x1ffc) + temp_v9 * 0x408);
      temp_v8 = *puVar19;
      temp_v11 = puVar19[1];
      if ((((DAT_005702a0 & temp_v8) != 0 || (DAT_005702a4 & temp_v11) != 0) &&
          ((g_btlCandidateMasks & temp_v8) != 0 || (DAT_0057028c & temp_v11) != 0)) &&
         ((temp_v8 & DAT_005702b0) == 0 && (temp_v11 & DAT_005702b4) == 0)) {
        if (0 < (int)puVar19[0x31]) {
          temp_v2 = 1;
        }
        if (0 < (int)puVar19[0x32]) {
          temp_v3 = 1;
        }
        if (0 < (int)puVar19[0x33]) {
          temp_v4 = 1;
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x6d);
    puVar23 = (unsigned short *)*piVar22;
    if ((unsigned short *)*piVar24 != puVar23) {
      do {
        temp_v8 = (unsigned int)*puVar23;
        temp_v5 = 0;
        dataTable8FindRecord();
        temp_v8 = (unsigned int)*(unsigned short *)(temp_v8 + 0x32);
        dataTable04FindById();
        if ((temp_v2 && temp_v8 != 0) && (*(char *)(temp_v8 + 0x23) == '\0')) {
          temp_v5 = 1;
        }
        if ((temp_v3 && temp_v8 != 0) &&
           (temp_v11 = *(unsigned int *)(temp_v8 + 0x28), (temp_v11 & 0xffff) >> 0xb != 0x14)) {
          if (*(char *)(temp_v8 + 0x23) != '\x01') {
            if (*(char *)(temp_v8 + 0x23) == '\x02') {
              temp_v12 = 6;
              temp_v13 = (temp_v11 & 0xffff) >> 0xb != 6;
              if (temp_v13) {
                temp_v12 = 7;
              }
              if (temp_v13 && temp_v12 != (temp_v11 & 0xffff) >> 0xb) {
                temp_v5 = 1;
              }
            }
          }
          else {
            temp_v5 = 1;
          }
        }
        if (temp_v4 && temp_v8 != 0) {
          temp_v11 = 6;
          temp_v13 = (*(unsigned int *)(temp_v8 + 0x28) & 0xffff) >> 0xb != 6;
          if (temp_v13) {
            temp_v11 = 7;
          }
          if (temp_v13 && temp_v11 != (*(unsigned int *)(temp_v8 + 0x28) & 0xffff) >> 0xb) goto LAB_00336174;
LAB_00336180:
          puVar21 = *(unsigned short **)(temp_v6 + 0x4e5c);
          if ((unsigned short *)*piVar22 != puVar21) {
            puVar13 = puVar23 + 1;
            puVar7 = puVar23;
            if (puVar21 != puVar13) {
              for (; puVar13 != puVar21; puVar13 = puVar13 + 1) {
                *puVar7 = *puVar13;
                puVar7 = puVar7 + 1;
              }
            }
            *(int *)(temp_v6 + 0x4e5c) = *(int *)(temp_v6 + 0x4e5c) - 2;
          }
        }
        else {
LAB_00336174:
          if (temp_v5) goto LAB_00336180;
          puVar23 = puVar23 + 1;
        }
      } while ((unsigned short *)*piVar24 != puVar23);
    }
    if (*piVar22 != *piVar24) {
      sysMemClear(aiStack_78,0x54);
      temp_v9 = 0;
      do {
        temp_v7 = btlGetMainState();
        puVar19 = (unsigned int *)(*(int *)(temp_v7 + 0x1ffc) + temp_v9 * 0x408);
        temp_v8 = *puVar19;
        temp_v11 = puVar19[1];
        if ((((DAT_005702a0 & temp_v8) != 0 || (DAT_005702a4 & temp_v11) != 0) &&
            ((g_btlCandidateMasks & temp_v8) != 0 || (DAT_0057028c & temp_v11) != 0)) &&
           ((temp_v8 & DAT_005702b0) == 0 && (temp_v11 & DAT_005702b4) == 0)) {
          temp_v7 = 0;
          do {
            if (temp_v7 == 0x14) break;
            temp_v0 = *(unsigned short *)((int)puVar19 + temp_v7 * 2 + 0x2b6);
            if ((temp_v0 >> 10 == 1 || temp_v0 >> 10 == 4) || (temp_v0 >> 10 == 3 || temp_v0 >> 10 == 5)) {
              aiStack_78[temp_v7] = aiStack_78[temp_v7] + 1;
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 0x15);
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < 0x6d);
      puVar23 = (unsigned short *)*piVar22;
      if ((unsigned short *)*piVar24 != puVar23) {
        do {
          temp_v8 = (unsigned int)*puVar23;
          dataTable8FindRecord();
          temp_v8 = (unsigned int)*(unsigned short *)(temp_v8 + 0x32);
          dataTable04FindById();
          if (temp_v8 != 0) {
            temp_v11 = *(unsigned int *)(temp_v8 + 0x28);
            temp_v8 = (temp_v11 & 0xffff) >> 0xb;
            if ((temp_v11 & 0x1ff) >> 5 == 1 || (temp_v11 & 0x1ff) >> 5 == 6) {
              if (aiStack_78[temp_v8] < 1) {
                puVar23 = puVar23 + 1;
                continue;
              }
            }
            else if (((temp_v11 & 0x1e0) != 0) ||
                    (temp_v9 = btlGetMainState(), (int)*(short *)(temp_v9 + 0x2002) != aiStack_78[temp_v8]
                    )) {
              puVar23 = puVar23 + 1;
              continue;
            }
            puVar21 = *(unsigned short **)(temp_v6 + 0x4e5c);
            if ((unsigned short *)*piVar22 != puVar21) {
              puVar13 = puVar23 + 1;
              puVar7 = puVar23;
              if (puVar21 != puVar13) {
                for (; puVar13 != puVar21; puVar13 = puVar13 + 1) {
                  *puVar7 = *puVar13;
                  puVar7 = puVar7 + 1;
                }
              }
              *(int *)(temp_v6 + 0x4e5c) = *(int *)(temp_v6 + 0x4e5c) - 2;
            }
          }
          else {
            puVar23 = puVar23 + 1;
          }
        } while ((unsigned short *)*piVar24 != puVar23);
      }
    }
  }
  return;
}

} /* extern "C" */
