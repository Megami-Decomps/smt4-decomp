/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00198e10` (_code @ 0x198e10, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a73fc(...);

/* Supplied declaration required: FUN_001a73fc. */


void FUN_00198e10(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [4];
  unsigned char temp_v10 [28];
  int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 0xc, puVar2 != param_2) {
      uStack_50 = *puVar2;
      uStack_4c = puVar2[1];
      uStack_48 = puVar2[2];
      uStack_44 = puVar2[3];
      uStack_40 = puVar2[4];
      uStack_3c = puVar2[5];
      uStack_38 = puVar2[6];
      uStack_34 = puVar2[7];
      uStack_30 = puVar2[8];
      uStack_2c = puVar2[9];
      uStack_28 = puVar2[10];
      uStack_24 = puVar2[0xb];
      temp_v1 = FUN_001a73fc(temp_v9,&uStack_50,param_1);
      if (temp_v1 != 0) {
        if ((int)puVar2 - (int)param_1 >= 0x30) {
          temp_v0 = ((int)puVar2 - (int)param_1) / 0x30;
          puVar4 = puVar2 + 0xc;
          puVar5 = puVar2;
          if ((temp_v0 & 1) != 0) {
            puVar5 = puVar2 + -0xc;
            *puVar2 = *puVar5;
            puVar2[1] = puVar2[-0xb];
            puVar2[2] = puVar2[-10];
            puVar2[3] = puVar2[-9];
            puVar2[4] = puVar2[-8];
            puVar2[5] = puVar2[-7];
            puVar2[6] = puVar2[-6];
            puVar2[7] = puVar2[-5];
            puVar2[8] = puVar2[-4];
            puVar2[9] = puVar2[-3];
            puVar2[10] = puVar2[-2];
            puVar2[0xb] = puVar2[-1];
            puVar4 = puVar2;
          }
          for (temp_v1 = (int)temp_v0 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
            temp_v2 = puVar5[-0xb];
            temp_v3 = puVar5[-10];
            temp_v4 = puVar5[-9];
            temp_v5 = puVar5[-8];
            temp_v6 = puVar5[-7];
            temp_v7 = puVar5[-6];
            temp_v8 = puVar5[-5];
            puVar4[-0xc] = puVar5[-0xc];
            puVar4[-0xb] = temp_v2;
            puVar4[-10] = temp_v3;
            puVar4[-9] = temp_v4;
            puVar4[-8] = temp_v5;
            puVar4[-7] = temp_v6;
            puVar4[-6] = temp_v7;
            puVar4[-5] = temp_v8;
            temp_v2 = puVar5[-3];
            temp_v3 = puVar5[-2];
            temp_v4 = puVar5[-1];
            puVar4[-4] = puVar5[-4];
            puVar4[-3] = temp_v2;
            puVar4[-2] = temp_v3;
            puVar4[-1] = temp_v4;
            temp_v2 = puVar5[-0x17];
            temp_v3 = puVar5[-0x16];
            temp_v4 = puVar5[-0x15];
            temp_v5 = puVar5[-0x14];
            temp_v6 = puVar5[-0x13];
            temp_v7 = puVar5[-0x12];
            temp_v8 = puVar5[-0x11];
            puVar4[-0x18] = puVar5[-0x18];
            puVar4[-0x17] = temp_v2;
            puVar4[-0x16] = temp_v3;
            puVar4[-0x15] = temp_v4;
            puVar4[-0x14] = temp_v5;
            puVar4[-0x13] = temp_v6;
            puVar4[-0x12] = temp_v7;
            puVar4[-0x11] = temp_v8;
            temp_v2 = puVar5[-0xf];
            temp_v3 = puVar5[-0xe];
            temp_v4 = puVar5[-0xd];
            puVar4[-0x10] = puVar5[-0x10];
            puVar4[-0xf] = temp_v2;
            puVar4[-0xe] = temp_v3;
            puVar4[-0xd] = temp_v4;
            puVar4 = puVar4 + -0x18;
            puVar5 = puVar5 + -0x18;
          }
        }
        *param_1 = uStack_50;
        param_1[1] = uStack_4c;
        param_1[2] = uStack_48;
        param_1[3] = uStack_44;
        param_1[4] = uStack_40;
        param_1[5] = uStack_3c;
        param_1[6] = uStack_38;
        param_1[7] = uStack_34;
        param_1[8] = uStack_30;
        param_1[9] = uStack_2c;
        param_1[10] = uStack_28;
        param_1[0xb] = uStack_24;
      }
      else {
        uStack_84 = uStack_50;
        uStack_80 = uStack_4c;
        uStack_7c = uStack_48;
        uStack_78 = uStack_44;
        uStack_74 = uStack_40;
        uStack_70 = uStack_3c;
        uStack_6c = uStack_38;
        uStack_68 = uStack_34;
        uStack_64 = uStack_30;
        uStack_60 = uStack_2c;
        uStack_5c = uStack_28;
        uStack_58 = uStack_24;
        temp_v1 = FUN_001a73fc(temp_v10,&uStack_84);
        puVar4 = puVar2;
        while (temp_v1 != 0) {
          *puVar4 = puVar4[-0xc];
          puVar4[1] = puVar4[-0xb];
          puVar4[2] = puVar4[-10];
          puVar4[3] = puVar4[-9];
          puVar4[4] = puVar4[-8];
          puVar4[5] = puVar4[-7];
          puVar4[6] = puVar4[-6];
          puVar4[7] = puVar4[-5];
          puVar4[8] = puVar4[-4];
          puVar4[9] = puVar4[-3];
          puVar4[10] = puVar4[-2];
          puVar4[0xb] = puVar4[-1];
          temp_v1 = FUN_001a73fc(temp_v10,&uStack_84);
          puVar4 = puVar4 + -0xc;
        }
        *puVar4 = uStack_84;
        puVar4[1] = uStack_80;
        puVar4[2] = uStack_7c;
        puVar4[3] = uStack_78;
        puVar4[4] = uStack_74;
        puVar4[5] = uStack_70;
        puVar4[6] = uStack_6c;
        puVar4[7] = uStack_68;
        puVar4[8] = uStack_64;
        puVar4[9] = uStack_60;
        puVar4[10] = uStack_5c;
        puVar4[0xb] = uStack_58;
      }
    }
    return;
  }
  return;
}

} /* extern "C" */
