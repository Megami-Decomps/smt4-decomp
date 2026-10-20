/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc83c` (_code @ 0x3bc83c, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int dataTable04FindById(void);
int scrGetArg(int);
int sysMemClear(int [21], int);

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: sysMemClear. */


unsigned int FUN_003bc83c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned short *puVar7;
  unsigned int temp_v6;
  int *piVar9;
  unsigned short *puVar10;
  unsigned short *puVar11;
  int temp_v7;
  unsigned int *puVar13;
  unsigned short *puVar14;
  int *piVar15;
  int *piVar16;
  int aiStack_70 [21];
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  sysMemClear(aiStack_70,0x54);
  temp_v3 = btlGetMainState();
  if (temp_v1 != 0) {
    piVar15 = (int *)(temp_v3 + 0x4e58);
    piVar16 = (int *)(temp_v3 + 0x4e5c);
    if (*piVar15 != *piVar16) {
      temp_v1 = 0;
      do {
        temp_v4 = btlGetMainState();
        puVar13 = (unsigned int *)(*(int *)(temp_v4 + 0x1ffc) + temp_v1 * 0x408);
        temp_v5 = *puVar13;
        temp_v6 = puVar13[1];
        if ((((DAT_005702a0 & temp_v5) != 0 || (DAT_005702a4 & temp_v6) != 0) &&
            ((DAT_00570288 & temp_v5) != 0 || (DAT_0057028c & temp_v6) != 0)) &&
           ((temp_v5 & DAT_005702b0) == 0 && (temp_v6 & DAT_005702b4) == 0)) {
          temp_v4 = 0;
          temp_v7 = 0x15;
          piVar9 = aiStack_70;
          do {
            temp_v0 = temp_v4 * 2;
            temp_v4 = temp_v4 + 1;
            if (temp_v2 == *(unsigned short *)((int)puVar13 + temp_v0 + 0x2b6) >> 10) {
              *piVar9 = 1;
            }
            temp_v7 = temp_v7 - 1;
            piVar9 = piVar9 + 1;
          } while (temp_v7 != 0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x6d);
      puVar14 = (unsigned short *)*piVar15;
      if ((unsigned short *)*piVar16 != puVar14) {
        do {
          temp_v2 = (unsigned int)*puVar14;
          FUN_00192550();
          temp_v2 = (unsigned int)*(unsigned short *)(temp_v2 + 0x32);
          dataTable04FindById();
          if ((temp_v2 != 0) &&
             (*(int *)((int)aiStack_70 + ((*(unsigned int *)(temp_v2 + 0x28) & 0xf800) >> 9)) >= 1)) {
            puVar14 = puVar14 + 1;
          }
          else {
            puVar7 = *(unsigned short **)(temp_v3 + 0x4e5c);
            if ((unsigned short *)*piVar15 != puVar7) {
              puVar10 = puVar14 + 1;
              if ((puVar7 != puVar10) && (temp_v1 = (int)puVar7 - (int)puVar10, 0 < temp_v1 >> 1)) {
                puVar7 = puVar14;
                puVar11 = puVar14 + -1;
                if (temp_v1 * 0x40000000 < 0) {
                  *puVar14 = *puVar10;
                  puVar7 = puVar10;
                  puVar11 = puVar14;
                }
                for (temp_v1 = temp_v1 >> 2; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
                  puVar11[1] = puVar7[1];
                  puVar7 = puVar7 + 2;
                  puVar11 = puVar11 + 2;
                  *puVar11 = *puVar7;
                }
              }
              *(int *)(temp_v3 + 0x4e5c) = *(int *)(temp_v3 + 0x4e5c) - 2;
            }
          }
        } while ((unsigned short *)*piVar16 != puVar14);
      }
    }
  }
  return 1;
}

} /* extern "C" */
