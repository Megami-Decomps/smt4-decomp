/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e9f74` (_code @ 0x4e9f74, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571190; /* 0x571190 */
extern unsigned int DAT_00571194; /* 0x571194 */

extern int FUN_004ee568(void);


void FUN_004e9f74(int *param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int *puVar12;
  unsigned int *puVar13;
  
  temp_v7 = FUN_004ee568();
  temp_v6 = DAT_00571194;
  temp_v5 = DAT_00571190;
  temp_v4 = DAT_0057117c;
  temp_v3 = DAT_00571178;
  temp_v2 = DAT_00571174;
  temp_v1 = DAT_00571170;
  temp_v0 = DAT_0057114c;
  temp_v9 = DAT_00571148;
  if (param_3 == 2) {
    temp_v10 = 0;
    temp_v8 = 0x6d;
    puVar12 = *(unsigned int **)(*param_1 + 0x1ffc);
    do {
      if (((puVar12[1] & temp_v0) != 0 || (*puVar12 & temp_v9) != 0) &&
         ((*puVar12 & temp_v3) == 0 && (puVar12[1] & temp_v4) == 0)) {
        *(unsigned char *)(temp_v7 + temp_v10 + 0x38) = 1;
      }
      temp_v8 = temp_v8 - 1;
      puVar12 = puVar12 + 0x102;
      temp_v10 = temp_v10 + 1;
    } while (temp_v8 != 0);
    return;
  }
  if (param_2 == 1) {
    temp_v8 = 0;
    temp_v10 = 0x32;
    puVar12 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + 0x1020);
    do {
      temp_v9 = *puVar12;
      puVar13 = puVar12 + 1;
      puVar12 = puVar12 + 0x102;
      if ((temp_v9 & temp_v5) != 0 || (*puVar13 & temp_v6) != 0) {
        *(unsigned char *)(temp_v7 + temp_v8 + 0x3c) = 1;
      }
      temp_v8 = temp_v8 + 1;
      temp_v10 = temp_v10 - 1;
    } while (temp_v10 != 0);
    return;
  }
  puVar12 = *(unsigned int **)(*param_1 + 0x1ffc);
  temp_v8 = 0;
  temp_v10 = 0x6d;
  do {
    if (((puVar12[1] & temp_v6) != 0 || (*puVar12 & temp_v5) != 0) &&
       ((*puVar12 & temp_v1) == 0 && (puVar12[1] & temp_v2) == 0)) {
      *(unsigned char *)(temp_v7 + temp_v8 + 0x38) = 1;
    }
    temp_v10 = temp_v10 - 1;
    puVar12 = puVar12 + 0x102;
    temp_v8 = temp_v8 + 1;
  } while (temp_v10 != 0);
  return;
}

} /* extern "C" */
