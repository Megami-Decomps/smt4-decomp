/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001994c4` (_code @ 0x1994c4, 0x3b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_4_stack;

/* Supplied declaration required: FUN_001994c4. */
/* Supplied declaration required: FUN_001a73fc. */
/* Supplied declaration required: FUN_001ab67c. */


/* WARNING: Removing unreachable block (ram,0x001995c4) */
/* WARNING: Removing unreachable block (ram,0x001995d0) */
/* WARNING: Removing unreachable block (ram,0x001995ec) */
/* WARNING: Removing unreachable block (ram,0x00199624) */

void FUN_001994c4(unsigned int *param_1,unsigned int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 goto(s); 7 native warning(s); review required */
  unsigned long long temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int temp_v20;
  unsigned int uStack_94;
  unsigned int uStack_90;
  int temp_v21;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int temp_v22;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int temp_v23;
  unsigned int uStack_58;
  unsigned int temp_v24;
  unsigned int uStack_50;
  unsigned char temp_v25 [28];
  unsigned int *puStack_30;
  unsigned int *puStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  
  temp_v1 = (int)param_2 - (int)param_1;
  uStack_24 = param_4;
  iStack_28 = param_3;
  puStack_2c = param_2;
  puStack_30 = param_1;
  do {
    if (temp_v1 < 0x330) {
      return;
    }
    if (param_3 == 0) {
      temp_v1 = (int)param_2 - (int)param_1;
      if (temp_v1 >= 0x60) {
        temp_v3 = (temp_v1 / 0x30 - 2) / 2;
        while( 1 ) {
          puVar6 = param_1 + temp_v3 * 0xc;
          uStack_b4 = puVar6[2];
          uStack_b0 = puVar6[3];
          uStack_ac = puVar6[4];
          uStack_a8 = puVar6[5];
          uStack_a4 = puVar6[6];
          uStack_a0 = puVar6[7];
          uStack_9c = puVar6[8];
          temp_v20 = puVar6[9];
          uStack_94 = puVar6[10];
          uStack_90 = puVar6[0xb];
          FUN_001ab67c(param_1,temp_v3,temp_v1 / 0x30,*puVar6,puVar6[1]);
          if (temp_v3 == 0) break;
          temp_v3 = temp_v3 - 1;
        }
      }
      while (temp_v1 >= 0x60) {
        if (param_1 != param_2) {
          temp_v15 = param_1[1];
          temp_v16 = param_1[2];
          temp_v17 = param_1[3];
          temp_v5 = param_1[4];
          temp_v0 = *(unsigned long long *)(param_1 + 5);
          temp_v6 = param_1[7];
          temp_v2 = param_2[-0xc];
          temp_v4 = param_2[-0xb];
          uStack_b4 = param_2[-10];
          uStack_b0 = param_2[-9];
          uStack_ac = param_2[-8];
          uStack_a8 = param_2[-7];
          uStack_a4 = param_2[-6];
          uStack_a0 = param_2[-5];
          uStack_9c = param_2[-4];
          temp_v20 = param_2[-3];
          uStack_94 = param_2[-2];
          uStack_90 = param_2[-1];
          param_2[-0xc] = *param_1;
          param_2[-0xb] = temp_v15;
          param_2[-10] = temp_v16;
          param_2[-9] = temp_v17;
          param_2[-8] = temp_v5;
          param_2[-7] = (int)temp_v0;
          param_2[-6] = (int)((unsigned long long)temp_v0 >> 0x20);
          param_2[-5] = temp_v6;
          temp_v15 = param_1[9];
          temp_v16 = param_1[10];
          temp_v17 = param_1[0xb];
          param_2[-4] = param_1[8];
          param_2[-3] = temp_v15;
          param_2[-2] = temp_v16;
          param_2[-1] = temp_v17;
          FUN_001ab67c(param_1,0,((int)(param_2 + -0xc) - (int)param_1) / 0x30,temp_v2,temp_v4);
        }
        param_2 = param_2 + -0xc;
        temp_v1 = (int)param_2 - (int)param_1;
      }
      return;
    }
    puVar3 = param_1 + (((int)param_2 - (int)param_1) / 0x60) * 0xc;
    temp_v1 = FUN_001a73fc(temp_v25,param_1);
    puVar6 = param_2;
    puVar7 = param_1;
    if (temp_v1 != 0) {
      temp_v1 = FUN_001a73fc(temp_v25,puVar3,param_2 + -0xc);
      if (temp_v1 == 0) {
        temp_v1 = FUN_001a73fc(temp_v25,param_1,param_2 + -0xc);
        if (temp_v1 == 0) goto LAB_001996ec;
LAB_00199724:
        temp_v21 = param_2[-0xc];
        uStack_78 = param_2[-0xb];
        uStack_74 = param_2[-10];
        uStack_70 = param_2[-9];
        uStack_6c = param_2[-8];
        temp_v23 = param_2[-4];
        uStack_58 = param_2[-3];
        temp_v22 = param_2[-7];
        uStack_64 = param_2[-6];
        uStack_60 = param_2[-5];
        puVar3 = param_2 + -2;
        temp_v24 = *puVar3;
        uStack_50 = puVar3[1];
      }
      else {
LAB_00199744:
        temp_v21 = *puVar3;
        uStack_78 = puVar3[1];
        uStack_74 = puVar3[2];
        uStack_70 = puVar3[3];
        uStack_6c = puVar3[4];
        temp_v23 = puVar3[8];
        uStack_58 = puVar3[9];
        temp_v22 = puVar3[5];
        uStack_64 = puVar3[6];
        uStack_60 = puVar3[7];
        temp_v24 = puVar3[10];
        uStack_50 = puVar3[0xb];
      }
    }
    else {
      temp_v1 = FUN_001a73fc(temp_v25,param_1,param_2 + -0xc);
      if (temp_v1 == 0) {
        temp_v1 = FUN_001a73fc(temp_v25,puVar3,param_2 + -0xc);
        if (temp_v1 != 0) goto LAB_00199724;
        goto LAB_00199744;
      }
LAB_001996ec:
      temp_v21 = *param_1;
      uStack_78 = param_1[1];
      uStack_74 = param_1[2];
      uStack_70 = param_1[3];
      uStack_6c = param_1[4];
      temp_v23 = param_1[8];
      uStack_58 = param_1[9];
      temp_v22 = param_1[5];
      uStack_64 = param_1[6];
      uStack_60 = param_1[7];
      puVar3 = param_1 + 10;
      temp_v24 = *puVar3;
      uStack_50 = puVar3[1];
    }
    while( 1 ) {
      while (temp_v1 = FUN_001a73fc(&uStack_b4,puVar7,&temp_v21), temp_v1 != 0) {
        puVar7 = puVar7 + 0xc;
      }
      do {
        puVar3 = puVar6;
        puVar6 = puVar3 + -0xc;
        temp_v1 = FUN_001a73fc(&uStack_b4,&temp_v21,puVar6);
      } while (temp_v1 != 0);
      if (puVar6 <= puVar7) break;
      temp_v15 = puVar3[-0xb];
      temp_v16 = puVar3[-10];
      temp_v17 = puVar3[-9];
      temp_v18 = puVar3[-8];
      temp_v0 = *(unsigned long long *)(puVar3 + -7);
      temp_v19 = puVar3[-5];
      temp_v10 = *puVar7;
      temp_v6 = puVar7[1];
      temp_v9 = puVar7[2];
      temp_v12 = puVar7[3];
      temp_v5 = puVar7[4];
      temp_v11 = puVar7[5];
      temp_v8 = puVar7[8];
      temp_v4 = puVar7[9];
      temp_v7 = puVar7[10];
      temp_v13 = puVar7[6];
      temp_v14 = puVar7[7];
      temp_v2 = puVar7[0xb];
      *puVar7 = *puVar6;
      puVar7[1] = temp_v15;
      puVar7[2] = temp_v16;
      puVar7[3] = temp_v17;
      puVar7[4] = temp_v18;
      puVar7[5] = (int)temp_v0;
      puVar7[6] = (int)((unsigned long long)temp_v0 >> 0x20);
      puVar7[7] = temp_v19;
      temp_v15 = puVar3[-3];
      temp_v16 = puVar3[-2];
      temp_v17 = puVar3[-1];
      puVar7[8] = puVar3[-4];
      puVar7[9] = temp_v15;
      puVar7[10] = temp_v16;
      puVar7[0xb] = temp_v17;
      *puVar6 = temp_v10;
      puVar3[-0xb] = temp_v6;
      puVar3[-10] = temp_v9;
      puVar3[-9] = temp_v12;
      puVar3[-8] = temp_v5;
      puVar3[-7] = temp_v11;
      puVar3[-4] = temp_v8;
      puVar3[-3] = temp_v4;
      puVar3[-2] = temp_v7;
      puVar3[-6] = temp_v13;
      puVar3[-5] = temp_v14;
      puVar3[-1] = temp_v2;
      puVar7 = puVar7 + 0xc;
    }
    param_3 = param_3 / 2;
    FUN_001994c4(puVar7,param_2,param_3, /* unrecovered */ 0);
    temp_v1 = (int)puVar7 - (int)param_1;
    param_2 = puVar7;
  } while( 1 );
}
