/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016b8a8` (_code @ 0x16b8a8, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00198c38(unsigned int *, unsigned int *);
int FUN_00198e10(unsigned int *, unsigned int *);
int FUN_00199110(unsigned int *, unsigned int *, int);
int FUN_001994c4(unsigned int *, unsigned int *, int);
int FUN_001a7388(...);
int FUN_001a73fc(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp44; /* 0x44: local_44 */
} param_2_stack;

/* Supplied declaration required: FUN_00198c38. */
/* Supplied declaration required: FUN_00198e10. */
/* Supplied declaration required: FUN_00199110. */
/* Supplied declaration required: FUN_001994c4. */
/* Supplied declaration required: FUN_001a7388. */
/* Supplied declaration required: FUN_001a73fc. */


void FUN_0016b8a8(unsigned int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v0;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [20];
  int temp_v9;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int temp_v10;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  puVar5 = (unsigned int *)*param_1;
  puVar6 = (unsigned int *)param_1[1];
  if (param_2 != 0) {
    if (puVar5 != puVar6) {
      FUN_00199110(puVar5,puVar6,((int)puVar6 - (int)puVar5) / 0x30);
      if ((int)puVar6 - (int)puVar5 < 0x330) {
        FUN_00198c38(puVar5,puVar6);
        return;
      }
      FUN_00198c38(puVar5,puVar5 + 0xc0);
      for (puVar5 = puVar5 + 0xc0; puVar5 != puVar6; puVar5 = puVar5 + 0xc) {
        temp_v9 = *puVar5;
        uStack_40 = puVar5[1];
        uStack_3c = puVar5[2];
        uStack_38 = puVar5[3];
        uStack_34 = puVar5[4];
        uStack_30 = puVar5[5];
        uStack_2c = puVar5[6];
        uStack_28 = puVar5[7];
        temp_v10 = puVar5[8];
        uStack_20 = puVar5[9];
        uStack_1c = puVar5[10];
        uStack_18 = puVar5[0xb];
        temp_v0 = FUN_001a7388(temp_v8,&temp_v9);
        puVar3 = puVar5 + -0xc;
        puVar2 = puVar5;
        while (puVar1 = puVar3, temp_v0 != 0) {
          temp_v1 = puVar1[1];
          temp_v2 = puVar1[2];
          temp_v3 = puVar1[3];
          temp_v4 = puVar1[4];
          temp_v5 = puVar1[5];
          temp_v6 = puVar1[6];
          temp_v7 = puVar1[7];
          *puVar2 = *puVar1;
          puVar2[1] = temp_v1;
          puVar2[2] = temp_v2;
          puVar2[3] = temp_v3;
          puVar2[4] = temp_v4;
          puVar2[5] = temp_v5;
          puVar2[6] = temp_v6;
          puVar2[7] = temp_v7;
          temp_v1 = puVar1[9];
          temp_v2 = puVar1[10];
          temp_v3 = puVar1[0xb];
          puVar2[8] = puVar1[8];
          puVar2[9] = temp_v1;
          puVar2[10] = temp_v2;
          puVar2[0xb] = temp_v3;
          temp_v0 = FUN_001a7388(temp_v8,&temp_v9,puVar1 + -0xc);
          puVar3 = puVar1 + -0xc;
          puVar2 = puVar1;
        }
        *puVar2 = temp_v9;
        puVar2[1] = uStack_40;
        puVar2[2] = uStack_3c;
        puVar2[3] = uStack_38;
        puVar2[4] = uStack_34;
        puVar2[5] = uStack_30;
        puVar2[6] = uStack_2c;
        puVar2[7] = uStack_28;
        puVar2[8] = temp_v10;
        puVar2[9] = uStack_20;
        puVar2[10] = uStack_1c;
        puVar2[0xb] = uStack_18;
      }
    }
  }
  else if (puVar5 != puVar6) {
    FUN_001994c4(puVar5,puVar6,((int)puVar6 - (int)puVar5) / 0x30);
    if ((int)puVar6 - (int)puVar5 < 0x330) {
      FUN_00198e10(puVar5,puVar6);
      return;
    }
    FUN_00198e10(puVar5,puVar5 + 0xc0);
    puVar5 = puVar5 + 0xc0;
    if (puVar5 != puVar6) {
      do {
        temp_v9 = *puVar5;
        uStack_40 = puVar5[1];
        uStack_3c = puVar5[2];
        uStack_38 = puVar5[3];
        uStack_34 = puVar5[4];
        uStack_30 = puVar5[5];
        uStack_2c = puVar5[6];
        uStack_28 = puVar5[7];
        temp_v10 = puVar5[8];
        uStack_20 = puVar5[9];
        uStack_1c = puVar5[10];
        uStack_18 = puVar5[0xb];
        temp_v0 = FUN_001a73fc(temp_v8,&temp_v9);
        puVar3 = puVar5 + -0xc;
        puVar2 = puVar5;
        while (puVar1 = puVar3, temp_v0 != 0) {
          temp_v1 = puVar1[1];
          temp_v2 = puVar1[2];
          temp_v3 = puVar1[3];
          temp_v4 = puVar1[4];
          temp_v5 = puVar1[5];
          temp_v6 = puVar1[6];
          temp_v7 = puVar1[7];
          *puVar2 = *puVar1;
          puVar2[1] = temp_v1;
          puVar2[2] = temp_v2;
          puVar2[3] = temp_v3;
          puVar2[4] = temp_v4;
          puVar2[5] = temp_v5;
          puVar2[6] = temp_v6;
          puVar2[7] = temp_v7;
          temp_v1 = puVar1[9];
          temp_v2 = puVar1[10];
          temp_v3 = puVar1[0xb];
          puVar2[8] = puVar1[8];
          puVar2[9] = temp_v1;
          puVar2[10] = temp_v2;
          puVar2[0xb] = temp_v3;
          temp_v0 = FUN_001a73fc(temp_v8,&temp_v9,puVar1 + -0xc);
          puVar3 = puVar1 + -0xc;
          puVar2 = puVar1;
        }
        puVar5 = puVar5 + 0xc;
        *puVar2 = temp_v9;
        puVar2[1] = uStack_40;
        puVar2[2] = uStack_3c;
        puVar2[3] = uStack_38;
        puVar2[4] = uStack_34;
        puVar2[5] = uStack_30;
        puVar2[6] = uStack_2c;
        puVar2[7] = uStack_28;
        puVar2[8] = temp_v10;
        puVar2[9] = uStack_20;
        puVar2[10] = uStack_1c;
        puVar2[0xb] = uStack_18;
      } while (puVar5 != puVar6);
      return;
    }
  }
  return;
}

} /* extern "C" */
