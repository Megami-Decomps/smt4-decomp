/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00523180` (_code @ 0x523180, 0x464 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00523180. */


/* WARNING: Removing unreachable block (ram,0x00523308) */
/* WARNING: Removing unreachable block (ram,0x00523318) */
/* WARNING: Removing unreachable block (ram,0x00523354) */
/* WARNING: Removing unreachable block (ram,0x00523364) */
/* WARNING: Removing unreachable block (ram,0x00523368) */
/* WARNING: Removing unreachable block (ram,0x00523388) */
/* WARNING: Removing unreachable block (ram,0x00523390) */
/* WARNING: Removing unreachable block (ram,0x005233a8) */
/* WARNING: Removing unreachable block (ram,0x005233ac) */
/* WARNING: Removing unreachable block (ram,0x005233c0) */
/* WARNING: Removing unreachable block (ram,0x005233d0) */
/* WARNING: Removing unreachable block (ram,0x005233f8) */
/* WARNING: Removing unreachable block (ram,0x0052340c) */

void FUN_00523180(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *puVar11;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  
  if (((int)param_2 - (int)param_1) >> 4 >= 0x11) {
    while (param_3 != 0) {
      temp_v3 = param_1[1];
      temp_v9 = param_1[((((int)param_2 - (int)param_1) >> 4) / 2) * 4 + 1];
      temp_v5 = param_2[-3];
      temp_v8 = temp_v3;
      if (temp_v3 < temp_v9) {
        temp_v8 = temp_v9;
        temp_v9 = temp_v3;
      }
      puVar3 = param_2;
      puVar11 = param_1;
      if ((temp_v5 <= temp_v8) && (temp_v8 = temp_v9, temp_v9 < temp_v5)) {
        temp_v8 = temp_v5;
      }
      while( 1 ) {
        temp_v9 = puVar11[1];
        while (temp_v9 < temp_v8) {
          temp_v9 = puVar11[5];
          puVar11 = puVar11 + 4;
        }
        do {
          puVar4 = puVar3;
          puVar3 = puVar4 + -4;
          temp_v9 = puVar4[-3];
        } while (temp_v8 < temp_v9);
        if (puVar3 <= puVar11) break;
        temp_v6 = *puVar11;
        temp_v10 = puVar11[1];
        temp_v11 = puVar11[2];
        temp_v14 = puVar4[-2];
        temp_v15 = puVar4[-1];
        temp_v13 = puVar11[3];
        *puVar11 = *puVar3;
        puVar11[1] = temp_v9;
        puVar11[2] = temp_v14;
        puVar11[3] = temp_v15;
        *puVar3 = temp_v6;
        puVar4[-3] = temp_v10;
        puVar4[-2] = temp_v11;
        puVar4[-1] = temp_v13;
        puVar11 = puVar11 + 4;
      }
      param_3 = param_3 / 2;
      FUN_00523180(puVar11,param_2,param_3);
      param_2 = puVar11;
      if (((int)puVar11 - (int)param_1) >> 4 < 0x11) {
        return;
      }
    }
    temp_v0 = ((int)param_2 - (int)param_1) >> 4;
    if (temp_v0 >= 2) {
      temp_v7 = (temp_v0 - 2) / 2;
      do {
        puVar11 = param_1 + temp_v7 * 4;
        temp_v6 = *puVar11;
        temp_v8 = puVar11[1];
        temp_v10 = puVar11[2];
        temp_v11 = puVar11[3];
        temp_v1 = temp_v7;
        while( 1 ) {
          temp_v4 = temp_v1 * 2;
          temp_v2 = temp_v4 + 2;
          if (temp_v0 <= temp_v2) break;
          if ((unsigned int)param_1[temp_v2 * 4 + 1] < (unsigned int)param_1[temp_v2 * 4 - 3]) {
            temp_v2 = temp_v4 + 1;
          }
          puVar11 = param_1 + temp_v2 * 4;
          temp_v13 = puVar11[1];
          temp_v14 = puVar11[2];
          temp_v15 = puVar11[3];
          puVar3 = param_1 + temp_v1 * 4;
          *puVar3 = *puVar11;
          puVar3[1] = temp_v13;
          puVar3[2] = temp_v14;
          puVar3[3] = temp_v15;
          temp_v1 = temp_v2;
        }
        if (temp_v2 == temp_v0) {
          puVar11 = param_1 + temp_v1 * 4;
          temp_v13 = param_1[temp_v2 * 4 - 3];
          temp_v14 = param_1[temp_v2 * 4 - 2];
          temp_v15 = param_1[temp_v2 * 4 - 1];
          temp_v1 = temp_v4 + 1;
          *puVar11 = param_1[temp_v2 * 4 - 4];
          puVar11[1] = temp_v13;
          puVar11[2] = temp_v14;
          puVar11[3] = temp_v15;
        }
        while (temp_v4 = (temp_v1 - 1) / 2, temp_v7 < temp_v1) {
          puVar11 = param_1 + temp_v4 * 4;
          temp_v9 = puVar11[1];
          if (temp_v8 <= temp_v9) break;
          puVar3 = param_1 + temp_v1 * 4;
          temp_v13 = puVar11[2];
          temp_v14 = puVar11[3];
          *puVar3 = *puVar11;
          puVar3[1] = temp_v9;
          puVar3[2] = temp_v13;
          puVar3[3] = temp_v14;
          temp_v1 = temp_v4;
        }
        puVar11 = param_1 + temp_v1 * 4;
        temp_v12 = temp_v7 != 0;
        *puVar11 = temp_v6;
        puVar11[1] = temp_v8;
        if (temp_v12) {
          temp_v7 = temp_v7 - 1;
        }
        puVar11[2] = temp_v10;
        puVar11[3] = temp_v11;
      } while (temp_v12);
    }
    while (temp_v0 >= 2) {
      if (param_1 != param_2) {
        temp_v6 = param_1[1];
        temp_v10 = param_1[2];
        temp_v11 = param_1[3];
        temp_v8 = param_2[-3];
        temp_v14 = param_2[-4];
        temp_v13 = param_2[-2];
        temp_v15 = param_2[-1];
        param_2[-4] = *param_1;
        param_2[-3] = temp_v6;
        param_2[-2] = temp_v10;
        param_2[-1] = temp_v11;
        temp_v7 = 0;
        temp_v0 = ((int)(param_2 + -4) - (int)param_1) >> 4;
        temp_v4 = 2;
        temp_v1 = temp_v7;
        if (temp_v0 >= 3) {
          do {
            temp_v7 = temp_v4;
            if ((unsigned int)param_1[temp_v4 * 4 + 1] < (unsigned int)param_1[temp_v4 * 4 - 3]) {
              temp_v7 = temp_v4 - 1;
            }
            puVar11 = param_1 + temp_v7 * 4;
            temp_v6 = puVar11[1];
            temp_v10 = puVar11[2];
            temp_v11 = puVar11[3];
            puVar3 = param_1 + temp_v1 * 4;
            temp_v4 = temp_v7 * 2 + 2;
            *puVar3 = *puVar11;
            puVar3[1] = temp_v6;
            puVar3[2] = temp_v10;
            puVar3[3] = temp_v11;
            temp_v1 = temp_v7;
          } while (temp_v4 < temp_v0);
        }
        if (temp_v4 == temp_v0) {
          puVar11 = param_1 + temp_v7 * 4;
          temp_v6 = param_1[temp_v4 * 4 - 3];
          temp_v10 = param_1[temp_v4 * 4 - 2];
          temp_v11 = param_1[temp_v4 * 4 - 1];
          *puVar11 = param_1[temp_v4 * 4 - 4];
          puVar11[1] = temp_v6;
          puVar11[2] = temp_v10;
          puVar11[3] = temp_v11;
          temp_v7 = temp_v4 - 1;
        }
        while (temp_v0 = (temp_v7 - 1) / 2, 0 < temp_v7) {
          puVar11 = param_1 + temp_v0 * 4;
          temp_v9 = puVar11[1];
          if (temp_v8 <= temp_v9) break;
          temp_v6 = *puVar11;
          temp_v10 = puVar11[2];
          puVar3 = param_1 + temp_v7 * 4;
          puVar3[3] = puVar11[3];
          *puVar3 = temp_v6;
          puVar3[1] = temp_v9;
          puVar3[2] = temp_v10;
          temp_v7 = temp_v0;
        }
        puVar11 = param_1 + temp_v7 * 4;
        *puVar11 = temp_v14;
        puVar11[1] = temp_v8;
        puVar11[2] = temp_v13;
        puVar11[3] = temp_v15;
      }
      param_2 = param_2 + -4;
      temp_v0 = ((int)param_2 - (int)param_1) >> 4;
    }
  }
  return;
}
