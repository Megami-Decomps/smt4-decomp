/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001286a0` (_code @ 0x1286a0, 0x2ea bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;


void FUN_001286a0(int *param_1,int param_2)

{
/* irregular: 8 goto(s) */
  unsigned char temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char *pbVar9;
  unsigned char *puVar10;
  unsigned char *puVar11;
  unsigned char *puVar12;
  unsigned char *pbVar13;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned char *puVar20;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned char *puVar23;
  unsigned int temp_v15;
  unsigned char *pbVar25;
  unsigned int temp_v16;
  unsigned char *puVar27;
  unsigned int temp_v17;
  
  pbVar13 = (unsigned char *)(*param_1 - 1);
  temp_v7 = param_1[4];
  puVar23 = (unsigned char *)param_1[7];
  pbVar9 = (unsigned char *)(param_1[1] + (*param_1 - 6));
  puVar10 = (unsigned char *)(param_1[3] - 1);
  temp_v3 = *(int *)(puVar23 + 0x28);
  temp_v4 = *(unsigned int *)(puVar23 + 0x2c);
  puVar2 = (unsigned char *)(temp_v7 + (param_1[3] - 0x102));
  temp_v5 = *(unsigned int *)(puVar23 + 0x54);
  temp_v1 = *(unsigned int *)(puVar23 + 0x30);
  temp_v8 = *(int *)(puVar23 + 0x34);
  temp_v15 = *(unsigned int *)(puVar23 + 0x58);
  temp_v14 = *(unsigned int *)(puVar23 + 0x38);
  temp_v6 = *(unsigned int *)(puVar23 + 0x3c);
  temp_v9 = *(int *)(puVar23 + 0x4c);
  temp_v10 = *(int *)(puVar23 + 0x50);
  puVar11 = puVar10;
LAB_001286fe:
  if (temp_v6 < 0xf) {
    pbVar25 = pbVar13 + 1;
    pbVar13 = pbVar13 + 2;
    temp_v14 = ((unsigned int)*pbVar13 << ((temp_v6 + 8) & 0xff)) + ((unsigned int)*pbVar25 << (temp_v6 & 0xff)) + temp_v14;
    temp_v6 = temp_v6 + 0x10;
  }
  temp_v17 = *(unsigned int *)((((1 << (temp_v5 & 0xff)) - 1U) & temp_v14) * 4 + temp_v9);
  while( 1 ) {
    temp_v2 = (temp_v17 >> 8) & 0xff;
    temp_v14 = temp_v14 >> temp_v2;
    temp_v6 = temp_v6 - temp_v2;
    if ((temp_v17 & 0xff) == 0) break;
    if ((int)(temp_v17 << 0x1b) < 0) {
      temp_v11 = temp_v17 & 0xf;
      temp_v2 = (unsigned int)(*(unsigned short *)((unsigned char *)&temp_v17 + 2));
      pbVar25 = pbVar13;
      if ((temp_v17 & 0xf) != 0) {
        if (temp_v6 < temp_v11) {
          pbVar13 = pbVar13 + 1;
          temp_v14 = ((unsigned int)*pbVar13 << (temp_v6 & 0xff)) + temp_v14;
          temp_v6 = temp_v6 + 8;
        }
        temp_v2 = (((1 << temp_v11) - 1U) & temp_v14) + temp_v2;
        temp_v14 = temp_v14 >> temp_v11;
        temp_v6 = temp_v6 - temp_v11;
        pbVar25 = pbVar13;
      }
      if (temp_v6 < 0xf) {
        pbVar13 = pbVar25 + 1;
        pbVar25 = pbVar25 + 2;
        temp_v14 = ((unsigned int)*pbVar25 << ((temp_v6 + 8) & 0xff)) +
                 ((unsigned int)*pbVar13 << (temp_v6 & 0xff)) + temp_v14;
        temp_v6 = temp_v6 + 0x10;
      }
      temp_v11 = ((1 << (temp_v15 & 0xff)) - 1U) & temp_v14;
      goto LAB_0012890c;
    }
    if ((int)(temp_v17 << 0x19) < 0) {
      if (-1 >= (int)(temp_v17 << 0x1a)) {
        temp_v0 = 0xb;
      }
      else {
        temp_v3 = 0x1289c4;
        temp_v0 = 0x1d;
        param_1[6] = temp_v3;
      }
      goto LAB_00128930;
    }
    temp_v17 = *(unsigned int *)(((unsigned int)(*(unsigned short *)((unsigned char *)&temp_v17 + 2)) + (((1 << (temp_v17 & 0xff)) - 1U) & temp_v14)) * 4 +
                        temp_v9);
  }
  puVar12 = puVar11 + 1;
  temp_v0 = (unsigned char)(temp_v17 >> 0x10);
  goto LAB_001288be;
LAB_0012890c:
  temp_v11 = *(unsigned int *)(temp_v11 * 4 + temp_v10);
  temp_v13 = (temp_v11 >> 8) & 0xff;
  temp_v14 = temp_v14 >> temp_v13;
  temp_v6 = temp_v6 - temp_v13;
  (*(unsigned short *)((unsigned char *)&temp_v17 + 2)) = (unsigned short)(temp_v11 >> 0x10);
  pbVar13 = pbVar25;
  if ((int)(temp_v11 << 0x1b) >= 0) {
    if ((int)(temp_v11 << 0x19) < 0) {
      temp_v3 = 0x1289ac;
      goto LAB_0012892a;
    }
    temp_v11 = (unsigned int)(*(unsigned short *)((unsigned char *)&temp_v17 + 2)) + (((1 << (temp_v11 & 0xff)) - 1U) & temp_v14);
    goto LAB_0012890c;
  }
  temp_v11 = temp_v11 & 0xf;
  temp_v13 = temp_v6;
  if (temp_v6 < temp_v11) {
    pbVar13 = pbVar25 + 1;
    temp_v14 = ((unsigned int)*pbVar13 << (temp_v6 & 0xff)) + temp_v14;
    temp_v13 = temp_v6 + 8;
    if (temp_v13 < temp_v11) {
      pbVar13 = pbVar25 + 2;
      temp_v14 = ((unsigned int)*pbVar13 << (temp_v13 & 0xff)) + temp_v14;
      temp_v13 = temp_v6 + 0x10;
    }
  }
  temp_v16 = (((1 << temp_v11) - 1U) & temp_v14) + (unsigned int)(*(unsigned short *)((unsigned char *)&temp_v17 + 2));
  temp_v14 = temp_v14 >> temp_v11;
  temp_v6 = temp_v13 - temp_v11;
  temp_v11 = (int)puVar11 - ((int)puVar10 - (param_2 - temp_v7));
  if (temp_v16 <= temp_v11) {
    puVar20 = puVar11 + -temp_v16;
    do {
      puVar27 = puVar11 + 2;
      temp_v2 = temp_v2 - 3;
      puVar11[1] = puVar20[1];
      puVar12 = puVar20 + 2;
      puVar20 = puVar20 + 3;
      puVar11 = puVar11 + 3;
      *puVar27 = *puVar12;
      *puVar11 = *puVar20;
    } while (temp_v2 >= 3);
    goto LAB_001288aa;
  }
  temp_v11 = temp_v16 - temp_v11;
  if ((temp_v4 < temp_v11) && (*(int *)(puVar23 + 0x1bc0) != 0)) {
    temp_v3 = 0x12898c;
LAB_0012892a:
    temp_v0 = 0x1d;
    param_1[6] = temp_v3;
LAB_00128930:
    *puVar23 = temp_v0;
    puVar12 = puVar11;
LAB_001288ce:
    pbVar13 = pbVar13 + -(temp_v6 >> 3);
    temp_v6 = temp_v6 + (temp_v6 >> 3) * -8;
    *param_1 = (int)(pbVar13 + 1);
    param_1[3] = (int)(puVar12 + 1);
    if (pbVar13 < pbVar9) {
      temp_v3 = (int)pbVar9 - (int)pbVar13;
    }
    else {
      temp_v3 = -((int)pbVar13 - (int)pbVar9);
    }
    param_1[1] = temp_v3 + 5;
    if (puVar12 < puVar2) {
      temp_v3 = (int)puVar2 - (int)puVar12;
    }
    else {
      temp_v3 = -((int)puVar12 - (int)puVar2);
    }
    param_1[4] = temp_v3 + 0x101;
    *(unsigned int *)(puVar23 + 0x38) = ((1 << (temp_v6 & 0xff)) - 1U) & temp_v14;
    *(unsigned int *)(puVar23 + 0x3c) = temp_v6;
    return;
  }
  temp_v12 = temp_v8 - 1;
  if (temp_v1 != 0) {
    if (temp_v1 < temp_v11) {
      puVar20 = (unsigned char *)(((temp_v3 + temp_v1) - temp_v11) + temp_v12);
      temp_v11 = temp_v11 - temp_v1;
      if (temp_v11 < temp_v2) {
        temp_v2 = temp_v2 - temp_v11;
        do {
          puVar20 = puVar20 + 1;
          puVar11 = puVar11 + 1;
          temp_v11 = temp_v11 - 1;
          *puVar11 = *puVar20;
        } while (temp_v11 != 0);
        puVar20 = (unsigned char *)(temp_v8 - 1);
        if (temp_v1 < temp_v2) {
          temp_v2 = temp_v2 - temp_v1;
          temp_v11 = temp_v1;
          do {
            puVar20 = puVar20 + 1;
            puVar11 = puVar11 + 1;
            temp_v11 = temp_v11 - 1;
            *puVar11 = *puVar20;
          } while (temp_v11 != 0);
          puVar20 = puVar11 + -temp_v16;
        }
      }
    }
    else {
      puVar20 = (unsigned char *)((temp_v1 - temp_v11) + temp_v12);
      if (temp_v11 < temp_v2) {
        temp_v2 = temp_v2 - temp_v11;
        do {
          puVar20 = puVar20 + 1;
          puVar11 = puVar11 + 1;
          temp_v11 = temp_v11 - 1;
          *puVar11 = *puVar20;
        } while (temp_v11 != 0);
        puVar20 = puVar11 + -temp_v16;
      }
    }
  }
  else {
    puVar20 = (unsigned char *)((temp_v3 - temp_v11) + temp_v12);
    if (temp_v11 < temp_v2) {
      temp_v2 = temp_v2 - temp_v11;
      do {
        puVar20 = puVar20 + 1;
        puVar11 = puVar11 + 1;
        temp_v11 = temp_v11 - 1;
        *puVar11 = *puVar20;
      } while (temp_v11 != 0);
      puVar20 = puVar11 + -temp_v16;
    }
  }
  for (; temp_v2 >= 3; temp_v2 = temp_v2 - 3) {
    puVar11[1] = puVar20[1];
    puVar12 = puVar20 + 2;
    puVar20 = puVar20 + 3;
    puVar11[2] = *puVar12;
    puVar11 = puVar11 + 3;
    *puVar11 = *puVar20;
  }
LAB_001288aa:
  puVar12 = puVar11;
  if (temp_v2 != 0) {
    puVar12 = puVar11 + 1;
    *puVar12 = puVar20[1];
    if (temp_v2 >= 2) {
      temp_v0 = puVar20[2];
      puVar12 = puVar11 + 2;
LAB_001288be:
      *puVar12 = temp_v0;
    }
  }
  if ((pbVar9 <= pbVar13) || (puVar11 = puVar12, puVar2 <= puVar12)) goto LAB_001288ce;
  goto LAB_001286fe;
}
