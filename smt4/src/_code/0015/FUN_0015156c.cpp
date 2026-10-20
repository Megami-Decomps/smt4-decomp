/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015156c` (_code @ 0x15156c, 0x5f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char DAT_00421004; /* 0x421004 */
extern unsigned char DAT_0042138c; /* 0x42138c */
extern unsigned char DAT_0042165c; /* 0x42165c */

extern int *FUN_002c2ff0(void);


int * FUN_0015156c(int param_1)

{
/* irregular: 2 goto(s) */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v2;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned long long temp_v6;
  int *temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  
  temp_v4 = *(unsigned int *)(*(int *)(param_1 + 0x2c) + 0x228);
  piVar1 = (int *)FUN_002c2ff0();
  piVar2 = (int *)(**(romwright_code **)(*piVar1 + 8))(piVar1,0x44,4);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[3] = 2;
    *piVar2 = (int)&DAT_00421004;
    piVar2[1] = (int)piVar1;
    piVar2[2] = 0;
    temp_v3 = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[7] = 0;
    *piVar2 = (int)&DAT_0042138c;
    piVar2[8] = 0;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    *(unsigned char *)(piVar2 + 0x10) = 0;
    *(unsigned char *)((int)piVar2 + 0x41) = 0;
    *(unsigned char *)((int)piVar2 + 0x42) = 1;
    *piVar2 = (int)&DAT_0042165c;
    temp_v0 = (**(romwright_code **)(*(int *)piVar2[1] + 8))((int *)piVar2[1],0xc,4);
    if (temp_v0 == 0) {
      temp_v3 = -0x80000000;
    }
    if (-1 < temp_v3) {
      piVar1 = piVar2 + 4;
      temp_v10 = 3;
      temp_v7 = (int *)piVar2[1];
      temp_v8 = temp_v0;
      if ((int **)piVar1 != &temp_v7) {
        temp_v8 = piVar2[5];
        temp_v10 = piVar2[7];
        temp_v7 = (int *)*piVar1;
        piVar2[6] = temp_v0;
        piVar2[7] = 3;
        *piVar1 = piVar2[1];
        piVar2[5] = temp_v0;
      }
      temp_v9 = temp_v8;
      temp_v0 = 0;
      if (temp_v7 != (int *)0x0) {
        temp_v0 = temp_v8;
      }
      if (temp_v7 != (int *)0x0 && temp_v0 != 0) {
        (**(romwright_code **)(*temp_v7 + 0xc))(temp_v7,temp_v8);
      }
    }
    if ((-1 < temp_v3) &&
       (temp_v0 = (**(romwright_code **)(*(int *)piVar2[1] + 8))((int *)piVar2[1],0xc,4), temp_v0 != 0)) {
      piVar1 = piVar2 + 8;
      temp_v10 = 3;
      temp_v7 = (int *)piVar2[1];
      temp_v8 = temp_v0;
      if ((int **)piVar1 != &temp_v7) {
        temp_v8 = piVar2[9];
        temp_v10 = piVar2[0xb];
        temp_v7 = (int *)*piVar1;
        *piVar1 = piVar2[1];
        piVar2[9] = temp_v0;
        piVar2[10] = temp_v0;
        piVar2[0xb] = 3;
      }
      temp_v9 = temp_v8;
      temp_v0 = 0;
      if (temp_v7 != (int *)0x0) {
        temp_v0 = temp_v8;
      }
      if (temp_v7 != (int *)0x0 && temp_v0 != 0) {
        (**(romwright_code **)(*temp_v7 + 0xc))(temp_v7,temp_v8);
      }
      temp_v6 = 0x3f80000000000000;
      temp_v0 = 0;
      temp_v5 = 0x3f800000;
      while( 1 ) {
        puVar6 = (unsigned int *)piVar2[10];
        temp_v0 = temp_v0 + 1;
        piVar2[10] = (int)(puVar6 + 1);
        if (puVar6 != (unsigned int *)0x0) {
          *puVar6 = temp_v5;
        }
        if (temp_v0 >= 3) break;
        temp_v5 = 0x3f800000;
        if (temp_v0 != 0) {
          temp_v5 = 0;
        }
      }
      temp_v0 = (**(romwright_code **)(*(int *)piVar2[1] + 8))((int *)piVar2[1],0xc,4);
      if (temp_v0 == 0) {
        temp_v3 = -0x80000000;
      }
      if (-1 < temp_v3) {
        piVar1 = piVar2 + 0xc;
        temp_v10 = 3;
        temp_v7 = (int *)piVar2[1];
        temp_v8 = temp_v0;
        if ((int **)piVar1 != &temp_v7) {
          temp_v8 = piVar2[0xd];
          temp_v10 = piVar2[0xf];
          temp_v7 = (int *)*piVar1;
          *piVar1 = piVar2[1];
          piVar2[0xd] = temp_v0;
          piVar2[0xe] = temp_v0;
          piVar2[0xf] = 3;
        }
        temp_v9 = temp_v8;
        temp_v0 = 0;
        if (temp_v7 != (int *)0x0) {
          temp_v0 = temp_v8;
        }
        if (temp_v7 != (int *)0x0 && temp_v0 != 0) {
          (**(romwright_code **)(*temp_v7 + 0xc))(temp_v7,temp_v8);
        }
        temp_v0 = 0;
        do {
          temp_v5 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
          while( 1 ) {
            puVar6 = (unsigned int *)piVar2[0xe];
            temp_v0 = temp_v0 + 1;
            piVar2[0xe] = (int)(puVar6 + 1);
            if (puVar6 != (unsigned int *)0x0) {
              *puVar6 = temp_v5;
            }
            if (temp_v0 >= 3) {
              *(unsigned char *)(piVar2 + 0x10) = 0;
              goto LAB_00151948;
            }
            if (temp_v0 == 0) break;
            temp_v5 = (unsigned int)temp_v6;
          }
        } while( 1 );
      }
    }
  }
LAB_00151948:
  (**(romwright_code **)(*piVar2 + 0xc))(piVar2,temp_v4);
  temp_v2 = piVar2[7];
  temp_v1 = temp_v2 & 0x3fffffff;
  if ((int)temp_v1 <= (piVar2[6] - piVar2[5]) >> 2) {
    if (temp_v1 != 0) {
      temp_v1 = temp_v1 << 1;
    }
    else {
      temp_v1 = 1;
    }
    if ((temp_v2 & 0x3fffffff) < temp_v1) {
      if ((piVar2[4] == 0) || ((temp_v2 & 0xc0000000) != 0x40000000)) goto LAB_00151a58;
      puVar5 = (unsigned int *)(**(romwright_code **)(*(int *)piVar2[4] + 8))((int *)piVar2[4],temp_v1 << 2,0x20);
      temp_v0 = 0;
      puVar6 = (unsigned int *)piVar2[5];
      puVar9 = (unsigned int *)piVar2[6];
      puVar8 = puVar5;
      if (puVar6 != puVar9) {
        do {
          if (puVar8 != (unsigned int *)0x0) {
            *puVar8 = *puVar6;
          }
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar6 != puVar9);
        temp_v0 = (piVar2[6] - piVar2[5]) >> 2;
      }
      if (piVar2[5] != 0) {
        (**(romwright_code **)(*(int *)piVar2[4] + 0xc))();
      }
      piVar2[6] = (int)(puVar5 + temp_v0);
      piVar2[5] = (int)puVar5;
      piVar2[7] = (piVar2[7] & 0xc0000000U) | temp_v1;
    }
  }
  if ((unsigned int *)piVar2[6] != (unsigned int *)0x0) {
    *(unsigned int *)piVar2[6] = 0;
  }
  piVar2[6] = piVar2[6] + 4;
LAB_00151a58:
  temp_v2 = piVar2[7];
  temp_v1 = temp_v2 & 0x3fffffff;
  if ((int)temp_v1 <= (piVar2[6] - piVar2[5]) >> 2) {
    if (temp_v1 != 0) {
      temp_v1 = temp_v1 << 1;
    }
    else {
      temp_v1 = 1;
    }
    if ((temp_v2 & 0x3fffffff) < temp_v1) {
      if (piVar2[4] == 0) {
        return piVar2;
      }
      if ((temp_v2 & 0xc0000000) != 0x40000000) {
        return piVar2;
      }
      puVar5 = (unsigned int *)(**(romwright_code **)(*(int *)piVar2[4] + 8))((int *)piVar2[4],temp_v1 << 2,0x20);
      temp_v0 = 0;
      puVar6 = (unsigned int *)piVar2[5];
      puVar9 = (unsigned int *)piVar2[6];
      puVar8 = puVar5;
      if (puVar6 != puVar9) {
        do {
          if (puVar8 != (unsigned int *)0x0) {
            *puVar8 = *puVar6;
          }
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar6 != puVar9);
        temp_v0 = (piVar2[6] - piVar2[5]) >> 2;
      }
      if (piVar2[5] != 0) {
        (**(romwright_code **)(*(int *)piVar2[4] + 0xc))();
      }
      piVar2[6] = (int)(puVar5 + temp_v0);
      piVar2[5] = (int)puVar5;
      piVar2[7] = (piVar2[7] & 0xc0000000U) | temp_v1;
    }
  }
  if ((unsigned int *)piVar2[6] != (unsigned int *)0x0) {
    *(unsigned int *)piVar2[6] = 0;
  }
  piVar2[6] = piVar2[6] + 4;
  return piVar2;
}

} /* extern "C" */
