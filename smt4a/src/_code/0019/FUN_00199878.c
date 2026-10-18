/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00199878` (_code @ 0x199878, 0x4e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp84; /* 0x84: local_84 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: while (INT_SRIGHT). */
/* Supplied declaration required: FUN_00199878. */


/* WARNING: Removing unreachable block (ram,0x00199a20) */
/* WARNING: Removing unreachable block (ram,0x00199a28) */
/* WARNING: Removing unreachable block (ram,0x00199a3c) */
/* WARNING: Removing unreachable block (ram,0x00199a7c) */
/* WARNING: Removing unreachable block (ram,0x00199a9c) */
/* WARNING: Removing unreachable block (ram,0x00199aa0) */
/* WARNING: Removing unreachable block (ram,0x00199ac0) */
/* WARNING: Removing unreachable block (ram,0x00199ac8) */
/* WARNING: Removing unreachable block (ram,0x00199ae0) */
/* WARNING: Removing unreachable block (ram,0x00199ae4) */
/* WARNING: Removing unreachable block (ram,0x00199af8) */
/* WARNING: Removing unreachable block (ram,0x00199b10) */
/* WARNING: Removing unreachable block (ram,0x00199b30) */
/* WARNING: Removing unreachable block (ram,0x00199b40) */

void FUN_00199878(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar10;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  
  if (((int)param_2 - (int)param_1) >> 4 < 0x11) {
    return;
  }
  do {
    if (param_3 == 0) {
      temp_v0 = ((int)param_2 - (int)param_1) >> 4;
      if (temp_v0 >= 2) {
        temp_v8 = (temp_v0 - 2) / 2;
        do {
          puVar3 = param_1 + temp_v8 * 4;
          temp_v2 = *puVar3;
          temp_v5 = puVar3[1];
          temp_v6 = puVar3[2];
          temp_v7 = puVar3[3];
          temp_v1 = temp_v8;
          while( 1 ) {
            temp_v4 = temp_v1 * 2;
            temp_v3 = temp_v4 + 2;
            if (temp_v0 <= temp_v3) break;
            puVar3 = param_1 + temp_v3 * 4;
            if (puVar3[1] <= puVar3[-3] && (unsigned int)(puVar3[-4] <= *puVar3) <= puVar3[1] - puVar3[-3])
            {
              temp_v3 = temp_v4 + 1;
            }
            puVar3 = param_1 + temp_v3 * 4;
            temp_v9 = puVar3[1];
            temp_v11 = puVar3[2];
            temp_v10 = puVar3[3];
            puVar10 = param_1 + temp_v1 * 4;
            *puVar10 = *puVar3;
            puVar10[1] = temp_v9;
            puVar10[2] = temp_v11;
            puVar10[3] = temp_v10;
            temp_v1 = temp_v3;
          }
          if (temp_v3 == temp_v0) {
            puVar3 = param_1 + temp_v1 * 4;
            temp_v9 = param_1[temp_v3 * 4 - 3];
            temp_v11 = param_1[temp_v3 * 4 - 2];
            temp_v10 = param_1[temp_v3 * 4 - 1];
            temp_v1 = temp_v4 + 1;
            *puVar3 = param_1[temp_v3 * 4 - 4];
            puVar3[1] = temp_v9;
            puVar3[2] = temp_v11;
            puVar3[3] = temp_v10;
          }
          while ((temp_v4 = (temp_v1 - 1) / 2, temp_v8 < temp_v1 &&
                 (puVar3 = param_1 + temp_v4 * 4,
                 puVar3[1] <= temp_v5 && (unsigned int)(temp_v2 <= *puVar3) <= puVar3[1] - temp_v5))) {
            temp_v9 = puVar3[1];
            temp_v11 = puVar3[2];
            temp_v10 = puVar3[3];
            puVar10 = param_1 + temp_v1 * 4;
            *puVar10 = *puVar3;
            puVar10[1] = temp_v9;
            puVar10[2] = temp_v11;
            puVar10[3] = temp_v10;
            temp_v1 = temp_v4;
          }
          puVar3 = param_1 + temp_v1 * 4;
          temp_v12 = temp_v8 != 0;
          *puVar3 = temp_v2;
          puVar3[1] = temp_v5;
          if (temp_v12) {
            temp_v8 = temp_v8 - 1;
          }
          puVar3[2] = temp_v6;
          puVar3[3] = temp_v7;
        } while (temp_v12);
      }
      do {
        if (temp_v0 < 2) {
          return;
        }
        if (param_1 != param_2) {
          temp_v5 = param_2[-4];
          temp_v6 = param_2[-3];
          temp_v2 = param_1[1];
          temp_v7 = param_1[2];
          temp_v9 = param_1[3];
          temp_v11 = param_2[-2];
          temp_v10 = param_2[-1];
          param_2[-4] = *param_1;
          param_2[-3] = temp_v2;
          param_2[-2] = temp_v7;
          param_2[-1] = temp_v9;
          temp_v8 = 0;
          temp_v0 = ((int)(param_2 + -4) - (int)param_1) >> 4;
          temp_v4 = 2;
          temp_v1 = temp_v8;
          if (temp_v0 >= 3) {
            do {
              puVar3 = param_1 + temp_v4 * 4;
              temp_v8 = temp_v4;
              if (puVar3[1] <= puVar3[-3] && (unsigned int)(puVar3[-4] <= *puVar3) <= puVar3[1] - puVar3[-3]
                 ) {
                temp_v8 = temp_v4 - 1;
              }
              puVar3 = param_1 + temp_v8 * 4;
              temp_v2 = puVar3[1];
              temp_v7 = puVar3[2];
              temp_v9 = puVar3[3];
              puVar10 = param_1 + temp_v1 * 4;
              temp_v4 = temp_v8 * 2 + 2;
              *puVar10 = *puVar3;
              puVar10[1] = temp_v2;
              puVar10[2] = temp_v7;
              puVar10[3] = temp_v9;
              temp_v1 = temp_v8;
            } while (temp_v4 < temp_v0);
          }
          if (temp_v4 == temp_v0) {
            puVar3 = param_1 + temp_v8 * 4;
            temp_v2 = param_1[temp_v4 * 4 - 3];
            temp_v7 = param_1[temp_v4 * 4 - 2];
            temp_v9 = param_1[temp_v4 * 4 - 1];
            temp_v8 = temp_v4 - 1;
            *puVar3 = param_1[temp_v4 * 4 - 4];
            puVar3[1] = temp_v2;
            puVar3[2] = temp_v7;
            puVar3[3] = temp_v9;
          }
          while (temp_v0 = (temp_v8 - 1) / 2, 0 < temp_v8) {
            puVar3 = param_1 + temp_v0 * 4;
            temp_v2 = puVar3[1];
            if (temp_v6 < temp_v2 || temp_v2 - temp_v6 < (unsigned int)(temp_v5 <= *puVar3)) break;
            temp_v9 = puVar3[2];
            temp_v7 = puVar3[3];
            puVar10 = param_1 + temp_v8 * 4;
            *puVar10 = *puVar3;
            puVar10[3] = temp_v7;
            puVar10[1] = temp_v2;
            puVar10[2] = temp_v9;
            temp_v8 = temp_v0;
          }
          puVar3 = param_1 + temp_v8 * 4;
          *puVar3 = temp_v5;
          puVar3[1] = temp_v6;
          puVar3[2] = temp_v11;
          puVar3[3] = temp_v10;
        }
        param_2 = param_2 + -4;
        temp_v0 = ((int)param_2 - (int)param_1) >> 4;
      } while( 1 );
    }
    temp_v6 = *param_1;
    temp_v11 = param_1[1];
    temp_v9 = param_2[-4];
    puVar3 = param_1 + ((((int)param_2 - (int)param_1) >> 4) / 2) * 4;
    temp_v5 = *puVar3;
    temp_v2 = puVar3[1];
    temp_v7 = param_2[-3];
    if (!(temp_v2 < temp_v11 || temp_v11 - temp_v2 < (unsigned int)(temp_v5 <= temp_v6))) {
      puVar10 = puVar3;
      if ((temp_v7 < temp_v2 || temp_v2 - temp_v7 < (unsigned int)(temp_v9 <= temp_v5)) &&
         (puVar10 = param_1, temp_v11 <= temp_v7 && (unsigned int)(temp_v9 <= temp_v6) <= temp_v11 - temp_v7)) {
        puVar10 = param_2 + -4;
      }
    }
    else {
      puVar10 = param_1;
      if ((temp_v7 < temp_v11 || temp_v11 - temp_v7 < (unsigned int)(temp_v9 <= temp_v6)) &&
         (puVar10 = puVar3, temp_v2 <= temp_v7 && (unsigned int)(temp_v9 <= temp_v5) <= temp_v2 - temp_v7)) {
        puVar10 = param_2 + -4;
      }
    }
    temp_v2 = puVar10[1];
    temp_v5 = *puVar10;
    puVar3 = param_2;
    puVar10 = param_1;
    while( 1 ) {
      while( 1 ) {
        temp_v6 = *puVar10;
        temp_v7 = puVar10[1];
        if (temp_v2 < temp_v7 || temp_v7 - temp_v2 < (unsigned int)(temp_v5 <= temp_v6)) break;
        puVar10 = puVar10 + 4;
      }
      do {
        puVar4 = puVar3;
        puVar3 = puVar4 + -4;
      } while (temp_v2 <= puVar4[-3] && (unsigned int)(*puVar3 <= temp_v5) <= temp_v2 - puVar4[-3]);
      if (puVar3 <= puVar10) break;
      temp_v9 = puVar4[-3];
      temp_v11 = puVar4[-2];
      temp_v10 = puVar4[-1];
      temp_v13 = puVar10[2];
      temp_v14 = puVar10[3];
      *puVar10 = *puVar3;
      puVar10[1] = temp_v9;
      puVar10[2] = temp_v11;
      puVar10[3] = temp_v10;
      *puVar3 = temp_v6;
      puVar4[-3] = temp_v7;
      puVar4[-2] = temp_v13;
      puVar4[-1] = temp_v14;
      puVar10 = puVar10 + 4;
    }
    param_3 = param_3 / 2;
    FUN_00199878(puVar10,param_2,param_3);
    param_2 = puVar10;
    if (((int)puVar10 - (int)param_1) >> 4 < 0x11) {
      return;
    }
  } while( 1 );
}
