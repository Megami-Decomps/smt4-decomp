/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037398c` (_code @ 0x37398c, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable8FindRecord(void);
int dataTable04FindById(void);

extern int btlGetMainState(void);
/* Supplied declaration required: dataTable8FindRecord. */
/* Supplied declaration required: dataTable04FindById. */
extern int scrGetArg(unsigned int);


unsigned int FUN_0037398c(void)

{
/* irregular: 3 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar6;
  unsigned short *puVar7;
  unsigned short *puVar8;
  unsigned short *puVar9;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  if (temp_v0 != 0) {
    puVar9 = *(unsigned short **)(temp_v2 + 0x4e58);
    if (*(unsigned short **)(temp_v2 + 0x4e5c) != puVar9) {
      do {
        temp_v3 = (unsigned int)*puVar9;
        dataTable8FindRecord();
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x32);
        dataTable04FindById();
        if (temp_v4 != 0) {
          if (temp_v1 == 0) {
            if ((*(unsigned int *)(temp_v4 + 0x28) & 0x1e0) == 0) goto LAB_00373a68;
            puVar9 = puVar9 + 1;
            continue;
          }
          if ((temp_v1 != 1) ||
             ((*(unsigned int *)(temp_v4 + 0x28) & 0x1ff) >> 5 != 1 &&
              (*(unsigned int *)(temp_v4 + 0x28) & 0x1ff) >> 5 != 6)) {
            puVar9 = puVar9 + 1;
            continue;
          }
LAB_00373a68:
          puVar6 = *(unsigned short **)(temp_v2 + 0x4e5c);
          if (*(unsigned short **)(temp_v2 + 0x4e58) != puVar6) {
            puVar7 = puVar9 + 1;
            if ((puVar6 != puVar7) && (temp_v0 = (int)puVar6 - (int)puVar7, 0 < temp_v0 >> 1)) {
              puVar6 = puVar9;
              puVar8 = puVar9 + -1;
              if (temp_v0 * 0x40000000 < 0) {
                *puVar9 = *puVar7;
                puVar6 = puVar7;
                puVar8 = puVar9;
              }
              for (temp_v0 = temp_v0 >> 2; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
                puVar8[1] = puVar6[1];
                puVar6 = puVar6 + 2;
                puVar8 = puVar8 + 2;
                *puVar8 = *puVar6;
              }
            }
            *(int *)(temp_v2 + 0x4e5c) = *(int *)(temp_v2 + 0x4e5c) - 2;
          }
        }
        else {
          if (temp_v1 != 0) {
            if ((temp_v1 == 1) && ((*(unsigned char *)(temp_v3 + 0x3a) & 0x80) != 0)) goto LAB_00373a68;
          }
          else if ((*(unsigned char *)(temp_v3 + 0x3a) & 0x80) == 0) goto LAB_00373a68;
          puVar9 = puVar9 + 1;
        }
      } while (*(unsigned short **)(temp_v2 + 0x4e5c) != puVar9);
    }
  }
  return 1;
}

} /* extern "C" */
