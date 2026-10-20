/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044f42c` (_code @ 0x44f42c, 0x658 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00522f50(unsigned int *, unsigned int *);
int FUN_00523060(unsigned int *, unsigned int *);
int FUN_00523180(unsigned int *, unsigned int *, int);
int FUN_005235e4(unsigned int *, unsigned int *, int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: FUN_00522f50. */
/* Supplied declaration required: FUN_00523060. */
/* Supplied declaration required: FUN_00523180. */
/* Supplied declaration required: FUN_005235e4. */


void FUN_0044f42c(int param_1)

{
/* irregular: 3 unstructured edge(s); 1 goto(s); 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar12;
  unsigned int temp_v5;
  unsigned int *puVar14;
  unsigned int temp_v6;
  unsigned int *puVar16;
  unsigned int *puVar17;
  unsigned int temp_v7;
  int *piVar19;
  int temp_v8;
  unsigned int temp_v9;
  int *piVar22;
  int temp_v10;
  unsigned int *puVar24;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  
  puVar17 = *(unsigned int **)(param_1 + 0xc);
  puVar14 = *(unsigned int **)(param_1 + 0x10);
  if (puVar17 != puVar14) {
    temp_v0 = ((int)puVar14 - (int)puVar17) >> 4;
    FUN_00523180(puVar17,puVar14,temp_v0);
    if (temp_v0 >= 0x11) {
      FUN_00522f50(puVar17,puVar17 + 0x40);
      for (puVar17 = puVar17 + 0x40; puVar17 != puVar14; puVar17 = puVar17 + 4) {
        temp_v7 = puVar17[3];
        temp_v3 = puVar17[1];
        temp_v9 = puVar17[2];
        temp_v11 = *puVar17;
        puVar7 = puVar17;
        while( 1 ) {
          if ((unsigned int)puVar7[-3] <= temp_v3) break;
          *puVar7 = puVar7[-4];
          puVar7[1] = puVar7[-3];
          puVar7[2] = puVar7[-2];
          puVar7[3] = puVar7[-1];
          puVar7 = puVar7 + -4;
        }
        *puVar7 = temp_v11;
        puVar7[3] = temp_v7;
        puVar7[1] = temp_v3;
        puVar7[2] = temp_v9;
      }
    }
    else {
      FUN_00522f50(puVar17,puVar14);
    }
  }
  temp_v0 = 0;
  piVar22 = *(int **)(param_1 + 0x10);
  temp_v8 = 0;
  piVar1 = *(int **)(param_1 + 0xc);
  while (piVar1 != piVar22) {
    if (piVar1[1] != temp_v0) {
      temp_v10 = piVar1[3];
      temp_v8 = temp_v8 + 1;
      piVar19 = (int *)(param_1 + 0x18);
      piVar3 = (int *)(*(int *)(temp_v10 + 0x20) + 0x84);
      temp_v0 = *piVar3;
      temp_v12 = *(int *)(*(int *)(temp_v10 + 8) + 0x2c0);
      if (temp_v0 != 0) {
        temp_v0 = temp_v0 + (int)piVar3;
      }
      else {
        temp_v0 = 0;
      }
      temp_v4 = *(unsigned int *)(param_1 + 0x24);
      temp_v3 = temp_v4 & 0x3fffffff;
      if ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) >> 4 >= (int)temp_v3) {
        if (temp_v3 != 0) {
          temp_v3 = temp_v3 << 1;
        }
        else {
          temp_v3 = 1;
        }
        if (temp_v3 > (temp_v4 & 0x3fffffff)) {
          if ((*piVar19 == 0) || ((temp_v4 & 0xc0000000) != 0x40000000)) {
            temp_v0 = piVar1[1];
            *piVar1 = temp_v8;
            piVar1 = piVar1 + 4;
            continue;
          }
          puVar17 = (unsigned int *)
                    (**(romwright_code **)(*(int *)*piVar19 + 8))((int *)*piVar19,temp_v3 << 4,0x20);
          if (puVar17 == (unsigned int *)0x0) {
            temp_v0 = piVar1[1];
            *piVar1 = temp_v8;
            piVar1 = piVar1 + 4;
            continue;
          }
          puVar7 = *(unsigned int **)(param_1 + 0x1c);
          puVar12 = *(unsigned int **)(param_1 + 0x20);
          temp_v13 = 0;
          puVar14 = puVar17;
          if (puVar7 != puVar12) {
            do {
              if (puVar14 != (unsigned int *)0x0) {
                temp_v7 = puVar7[1];
                temp_v9 = puVar7[2];
                temp_v11 = puVar7[3];
                *puVar14 = *puVar7;
                puVar14[1] = temp_v7;
                puVar14[2] = temp_v9;
                puVar14[3] = temp_v11;
              }
              puVar7 = puVar7 + 4;
              puVar14 = puVar14 + 4;
            } while (puVar7 != puVar12);
            temp_v13 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) >> 4;
          }
          temp_v4 = *(unsigned int *)(param_1 + 0x1c);
          if (temp_v4 != 0) {
            temp_v5 = *(unsigned int *)(param_1 + 0x20);
            temp_v1 = temp_v13;
            if (temp_v4 < temp_v5) {
              temp_v1 = temp_v5 - temp_v4;
            }
            if (temp_v4 < temp_v5) {
              temp_v1 = temp_v1 << 0x1b;
            }
            if (temp_v4 < temp_v5) {
              temp_v1 = temp_v1 >> 0x1f;
            }
            else {
              temp_v1 = 0;
            }
            for (temp_v2 = temp_v1 + 1; temp_v2 < ((int)(temp_v5 - temp_v4) >> 4) + 1; temp_v2 = temp_v2 + 2) {
            }
            *(unsigned int *)(param_1 + 0x20) = temp_v4;
            (**(romwright_code **)(*(int *)*piVar19 + 0xc))((int *)*piVar19);
          }
          *(unsigned int **)(param_1 + 0x1c) = puVar17;
          *(unsigned int **)(param_1 + 0x20) = puVar17 + temp_v13 * 4;
          *(unsigned int *)(param_1 + 0x24) = (*(unsigned int *)(param_1 + 0x24) & 0xc0000000) | temp_v3;
        }
      }
      piVar3 = *(int **)(param_1 + 0x20);
      if (piVar3 != (int *)0x0) {
        *piVar3 = temp_v8;
        piVar3[1] = temp_v0;
        piVar3[2] = temp_v12;
        piVar3[3] = temp_v10;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0x10;
      temp_v0 = piVar1[1];
    }
    *piVar1 = temp_v8;
    piVar1 = piVar1 + 4;
  }
  puVar14 = *(unsigned int **)(param_1 + 0x20);
  puVar17 = *(unsigned int **)(param_1 + 0x1c);
  if (puVar17 != puVar14) {
    temp_v0 = ((int)puVar14 - (int)puVar17) >> 4;
    FUN_00523180(puVar17,puVar14,temp_v0);
    if (temp_v0 >= 0x11) {
      FUN_00522f50(puVar17,puVar17 + 0x40);
      for (puVar17 = puVar17 + 0x40; puVar17 != puVar14; puVar17 = puVar17 + 4) {
        temp_v3 = puVar17[1];
        temp_v9 = puVar17[2];
        temp_v11 = puVar17[3];
        temp_v7 = *puVar17;
        puVar7 = puVar17;
        while( 1 ) {
          if ((unsigned int)puVar7[-3] <= temp_v3) break;
          *puVar7 = puVar7[-4];
          puVar7[1] = puVar7[-3];
          puVar7[2] = puVar7[-2];
          puVar7[3] = puVar7[-1];
          puVar7 = puVar7 + -4;
        }
        *puVar7 = temp_v7;
        puVar7[1] = temp_v3;
        puVar7[2] = temp_v9;
        puVar7[3] = temp_v11;
      }
    }
    else {
      FUN_00522f50(puVar17,puVar14);
    }
  }
  temp_v1 = 0;
  temp_v0 = 0;
  temp_v3 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) >> 4;
  temp_v5 = 0;
  temp_v4 = temp_v1;
  if (temp_v3 != 0) {
    do {
      puVar17 = (unsigned int *)(*(int *)(param_1 + 0x1c) + temp_v5 * 0x10);
      if ((((puVar17[1] != temp_v0) || (temp_v4 = temp_v1, temp_v5 == temp_v3 - 1)) &&
          (temp_v4 = temp_v5, (int)(temp_v5 - temp_v1) >= 3)) &&
         (puVar14 = (unsigned int *)(*(int *)(param_1 + 0x1c) + temp_v1 * 0x10), puVar14 != puVar17)) {
        temp_v0 = ((int)puVar17 - (int)puVar14) >> 4;
        FUN_005235e4(puVar14,puVar17,temp_v0);
        if (temp_v0 >= 0x11) {
          FUN_00523060(puVar14,puVar14 + 0x40);
          for (puVar14 = puVar14 + 0x40; puVar14 != puVar17; puVar14 = puVar14 + 4) {
            temp_v7 = *puVar14;
            temp_v9 = puVar14[1];
            temp_v1 = puVar14[2];
            temp_v11 = puVar14[3];
            puVar7 = puVar14;
            while( 1 ) {
              if ((unsigned int)puVar7[-2] <= temp_v1) break;
              *puVar7 = puVar7[-4];
              puVar7[1] = puVar7[-3];
              puVar7[2] = puVar7[-2];
              puVar7[3] = puVar7[-1];
              puVar7 = puVar7 + -4;
            }
            *puVar7 = temp_v7;
            puVar7[1] = temp_v9;
            puVar7[2] = temp_v1;
            puVar7[3] = temp_v11;
          }
        }
        else {
          FUN_00523060(puVar14,puVar17);
        }
      }
      temp_v6 = temp_v5 + 1;
      temp_v0 = *(int *)(*(int *)(param_1 + 0x1c) + temp_v5 * 0x10 + 4);
      temp_v1 = temp_v4;
      temp_v5 = temp_v6;
    } while (temp_v6 < temp_v3);
  }
  puVar16 = *(unsigned int **)(param_1 + 0x20);
  puVar24 = *(unsigned int **)(param_1 + 0x1c);
  temp_v0 = 1;
  do {
    if (puVar24 == puVar16) {
      temp_v3 = *(unsigned int *)(param_1 + 0x10);
      temp_v1 = *(unsigned int *)(param_1 + 0xc);
      if (temp_v1 < temp_v3) {
        temp_v4 = temp_v3 - temp_v1;
      }
      if (temp_v1 < temp_v3) {
        temp_v4 = (temp_v4 & 0x1f) >> 4;
      }
      else {
        temp_v4 = 0;
      }
      temp_v8 = temp_v4 + 1;
      temp_v0 = (int)(temp_v3 - temp_v1) >> 4;
      if (temp_v8 < temp_v0 + 1) {
        do {
          temp_v8 = temp_v8 + 2;
        } while (temp_v8 < temp_v0 + 1);
      }
      temp_v3 = temp_v0 + 1;
      *(unsigned int *)(param_1 + 0x10) = temp_v1;
      temp_v4 = *(unsigned int *)(param_1 + 0x20);
      temp_v1 = *(unsigned int *)(param_1 + 0x1c);
      if (temp_v1 < temp_v4) {
        temp_v3 = temp_v4 - temp_v1;
      }
      if (temp_v1 < temp_v4) {
        temp_v3 = (temp_v3 & 0x1f) >> 4;
      }
      else {
        temp_v3 = 0;
      }
      temp_v8 = temp_v3 + 1;
      temp_v0 = (int)(temp_v4 - temp_v1) >> 4;
      if (temp_v8 < temp_v0 + 1) {
        do {
          temp_v8 = temp_v8 + 2;
        } while (temp_v8 < temp_v0 + 1);
      }
      *(unsigned int *)(param_1 + 0x20) = temp_v1;
      return;
    }
    puVar6 = *(unsigned int **)(param_1 + 0xc);
    temp_v4 = (*(int *)(param_1 + 0x10) - (int)puVar6) >> 4;
    puVar9 = puVar6;
    if (0 < (int)temp_v4) {
      temp_v3 = *puVar24;
      do {
        temp_v1 = (int)temp_v4 / 2;
        puVar9 = puVar6 + temp_v1 * 4;
        temp_v5 = *puVar9;
        if (temp_v3 < temp_v5) {
          temp_v4 = temp_v1;
        }
        if (temp_v3 <= temp_v5) {
          if (temp_v3 < temp_v5) goto LAB_0044f90c;
          temp_v8 = ((int)puVar9 - (int)puVar6) >> 4;
          puVar8 = puVar6;
          if (0 < temp_v8) {
            do {
              temp_v10 = temp_v8 / 2;
              temp_v12 = temp_v10 * 4;
              if (puVar8[temp_v12] < *puVar24) {
                temp_v10 = (temp_v8 - temp_v10) - 1;
                puVar8 = puVar8 + temp_v12 + 4;
              }
              temp_v8 = temp_v10;
            } while (0 < temp_v10);
          }
          puVar9 = puVar9 + 4;
          temp_v4 = (int)((int)puVar6 + (temp_v4 * 0x10 - (int)puVar9)) >> 4;
          puVar6 = puVar8;
          if (0 < (int)temp_v4) {
            temp_v3 = temp_v4;
            do {
              temp_v4 = (int)temp_v3 / 2;
              if (puVar9[temp_v4 * 4] <= *puVar24) {
                puVar9 = puVar9 + temp_v4 * 4 + 4;
                temp_v4 = (temp_v3 - temp_v4) - 1;
              }
              temp_v3 = temp_v4;
            } while (0 < (int)temp_v4);
          }
          break;
        }
        puVar6 = puVar9 + 4;
        temp_v4 = (temp_v4 - temp_v1) - 1;
LAB_0044f90c:
        puVar9 = puVar6;
      } while (0 < (int)temp_v4);
    }
    for (; puVar9 != puVar6; puVar6 = puVar6 + 4) {
      temp_v4 = *(unsigned int *)(puVar6[3] + 8);
      *(int *)(temp_v4 + 0x2d4) = temp_v0;
      temp_v0 = temp_v0 + 1;
    }
    puVar24 = puVar24 + 4;
  } while( 1 );
}

} /* extern "C" */
