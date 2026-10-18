/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fccc4` (_code @ 0x3fccc4, 0x468 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: while (INT_SRIGHT). */
/* Supplied declaration required: FUN_003fccc4. */


/* WARNING: Removing unreachable block (ram,0x003fce4c) */
/* WARNING: Removing unreachable block (ram,0x003fce5c) */
/* WARNING: Removing unreachable block (ram,0x003fce98) */
/* WARNING: Removing unreachable block (ram,0x003fcea8) */
/* WARNING: Removing unreachable block (ram,0x003fceac) */
/* WARNING: Removing unreachable block (ram,0x003fcecc) */
/* WARNING: Removing unreachable block (ram,0x003fced4) */
/* WARNING: Removing unreachable block (ram,0x003fceec) */
/* WARNING: Removing unreachable block (ram,0x003fcef0) */
/* WARNING: Removing unreachable block (ram,0x003fcf04) */
/* WARNING: Removing unreachable block (ram,0x003fcf14) */
/* WARNING: Removing unreachable block (ram,0x003fcf3c) */
/* WARNING: Removing unreachable block (ram,0x003fcf50) */

void FUN_003fccc4(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *puVar11;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  
  if (((int)param_2 - (int)param_1) >> 4 < 0x11) {
    return;
  }
  do {
    if (param_3 == 0) {
      temp_v0 = ((int)param_2 - (int)param_1) >> 4;
      if (temp_v0 >= 2) {
        temp_v7 = (temp_v0 - 2) / 2;
        do {
          puVar11 = param_1 + temp_v7 * 4;
          temp_v6 = *puVar11;
          temp_v4 = puVar11[1];
          temp_v10 = puVar11[2];
          temp_v11 = puVar11[3];
          temp_v1 = temp_v7;
          while( 1 ) {
            temp_v2 = temp_v1 * 2;
            temp_v3 = temp_v2 + 2;
            if (temp_v0 <= temp_v3) break;
            if ((unsigned int)param_1[temp_v3 * 4 + 1] < (unsigned int)param_1[temp_v3 * 4 - 3]) {
              temp_v3 = temp_v2 + 1;
            }
            puVar11 = param_1 + temp_v3 * 4;
            temp_v12 = puVar11[1];
            temp_v13 = puVar11[2];
            temp_v14 = puVar11[3];
            puVar4 = param_1 + temp_v1 * 4;
            *puVar4 = *puVar11;
            puVar4[1] = temp_v12;
            puVar4[2] = temp_v13;
            puVar4[3] = temp_v14;
            temp_v1 = temp_v3;
          }
          if (temp_v3 == temp_v0) {
            puVar11 = param_1 + temp_v1 * 4;
            temp_v12 = param_1[temp_v3 * 4 - 3];
            temp_v13 = param_1[temp_v3 * 4 - 2];
            temp_v14 = param_1[temp_v3 * 4 - 1];
            temp_v1 = temp_v2 + 1;
            *puVar11 = param_1[temp_v3 * 4 - 4];
            puVar11[1] = temp_v12;
            puVar11[2] = temp_v13;
            puVar11[3] = temp_v14;
          }
          while (temp_v2 = (temp_v1 - 1) / 2, temp_v7 < temp_v1) {
            puVar11 = param_1 + temp_v2 * 4;
            temp_v5 = puVar11[1];
            if (temp_v4 <= temp_v5) break;
            puVar4 = param_1 + temp_v1 * 4;
            temp_v12 = puVar11[2];
            temp_v13 = puVar11[3];
            *puVar4 = *puVar11;
            puVar4[1] = temp_v5;
            puVar4[2] = temp_v12;
            puVar4[3] = temp_v13;
            temp_v1 = temp_v2;
          }
          puVar11 = param_1 + temp_v1 * 4;
          temp_v9 = temp_v7 != 0;
          *puVar11 = temp_v6;
          puVar11[1] = temp_v4;
          if (temp_v9) {
            temp_v7 = temp_v7 - 1;
          }
          puVar11[2] = temp_v10;
          puVar11[3] = temp_v11;
        } while (temp_v9);
      }
      do {
        if (temp_v0 < 2) {
          return;
        }
        if (param_1 != param_2) {
          temp_v6 = param_1[1];
          temp_v10 = param_1[2];
          temp_v11 = param_1[3];
          temp_v4 = param_2[-3];
          temp_v14 = param_2[-4];
          temp_v12 = param_2[-2];
          temp_v13 = param_2[-1];
          param_2[-4] = *param_1;
          param_2[-3] = temp_v6;
          param_2[-2] = temp_v10;
          param_2[-1] = temp_v11;
          temp_v7 = 0;
          temp_v0 = ((int)(param_2 + -4) - (int)param_1) >> 4;
          temp_v2 = 2;
          temp_v1 = temp_v7;
          if (temp_v0 >= 3) {
            do {
              temp_v7 = temp_v2;
              if ((unsigned int)param_1[temp_v2 * 4 + 1] < (unsigned int)param_1[temp_v2 * 4 - 3]) {
                temp_v7 = temp_v2 - 1;
              }
              puVar11 = param_1 + temp_v7 * 4;
              temp_v6 = puVar11[1];
              temp_v10 = puVar11[2];
              temp_v11 = puVar11[3];
              puVar4 = param_1 + temp_v1 * 4;
              temp_v2 = temp_v7 * 2 + 2;
              *puVar4 = *puVar11;
              puVar4[1] = temp_v6;
              puVar4[2] = temp_v10;
              puVar4[3] = temp_v11;
              temp_v1 = temp_v7;
            } while (temp_v2 < temp_v0);
          }
          if (temp_v2 == temp_v0) {
            puVar11 = param_1 + temp_v7 * 4;
            temp_v6 = param_1[temp_v2 * 4 - 3];
            temp_v10 = param_1[temp_v2 * 4 - 2];
            temp_v11 = param_1[temp_v2 * 4 - 1];
            *puVar11 = param_1[temp_v2 * 4 - 4];
            puVar11[1] = temp_v6;
            puVar11[2] = temp_v10;
            puVar11[3] = temp_v11;
            temp_v7 = temp_v2 - 1;
          }
          while (temp_v0 = (temp_v7 - 1) / 2, 0 < temp_v7) {
            puVar11 = param_1 + temp_v0 * 4;
            temp_v5 = puVar11[1];
            if (temp_v4 <= temp_v5) break;
            temp_v10 = puVar11[2];
            temp_v6 = puVar11[3];
            puVar4 = param_1 + temp_v7 * 4;
            *puVar4 = *puVar11;
            puVar4[3] = temp_v6;
            puVar4[1] = temp_v5;
            puVar4[2] = temp_v10;
            temp_v7 = temp_v0;
          }
          puVar11 = param_1 + temp_v7 * 4;
          *puVar11 = temp_v14;
          puVar11[1] = temp_v4;
          puVar11[2] = temp_v12;
          puVar11[3] = temp_v13;
        }
        param_2 = param_2 + -4;
        temp_v0 = ((int)param_2 - (int)param_1) >> 4;
      } while( 1 );
    }
    temp_v5 = param_1[1];
    temp_v8 = param_1[((((int)param_2 - (int)param_1) >> 4) / 2) * 4 + 1];
    temp_v4 = param_2[-3];
    puVar4 = param_2;
    puVar11 = param_1;
    if (temp_v5 < temp_v8) {
      if (temp_v8 < temp_v4) {
        temp_v4 = temp_v8;
      }
      else if (temp_v4 <= temp_v5) {
        temp_v4 = temp_v5;
      }
    }
    else if (temp_v4 > temp_v5) {
      temp_v4 = temp_v5;
    }
    else if (temp_v8 >= temp_v4) {
      temp_v4 = temp_v8;
    }
    while( 1 ) {
      temp_v5 = puVar11[1];
      while (temp_v5 < temp_v4) {
        temp_v5 = puVar11[5];
        puVar11 = puVar11 + 4;
      }
      do {
        puVar5 = puVar4;
        puVar4 = puVar5 + -4;
        temp_v5 = puVar5[-3];
      } while (temp_v4 < temp_v5);
      if (puVar4 <= puVar11) break;
      temp_v10 = puVar11[1];
      temp_v11 = puVar11[2];
      temp_v12 = puVar11[3];
      temp_v13 = puVar5[-2];
      temp_v14 = puVar5[-1];
      temp_v6 = *puVar11;
      *puVar11 = *puVar4;
      puVar11[1] = temp_v5;
      puVar11[2] = temp_v13;
      puVar11[3] = temp_v14;
      *puVar4 = temp_v6;
      puVar5[-3] = temp_v10;
      puVar5[-2] = temp_v11;
      puVar5[-1] = temp_v12;
      puVar11 = puVar11 + 4;
    }
    FUN_003fccc4(puVar11,param_2,param_3);
    param_3 = param_3 / 2;
    param_2 = puVar11;
    if (((int)puVar11 - (int)param_1) >> 4 < 0x11) {
      return;
    }
  } while( 1 );
}
