/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd2b4` (_code @ 0x2bd2b4, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026e5ec(...);
int devilGetRecord(void);
int memCopy(int, int, int);
int HintPreloadData(unsigned int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
extern unsigned char FUN_002228d4(void);
extern int FUN_0025981c(void);
/* Supplied declaration required: FUN_0026e5ec. */
extern int gameGetUnitRecord(int);
extern int gameGetSlotTable(void);
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: memCopy. */
extern int gameDataBlocksGetSaveData(void);
extern int cecProcessGetObject(void);


unsigned int * FUN_002bd2b4(int param_1,int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v4;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned char *pbVar10;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned short temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned char temp_v18;
  unsigned char temp_v19;
  
  temp_v1 = gameGetSlotTable();
  memCopy(temp_v1 + 4,param_1,0xe);
  memCopy(temp_v1 + 0x50,param_1 + 0xe,0x12);
  *(unsigned char *)(param_1 + 0x36) = *(unsigned char *)(temp_v1 + 0x7a);
  temp_v2 = gameDataBlocksGetSaveData();
  temp_v3 = *(unsigned int *)(temp_v2 + 0x1f458);
  *(unsigned int *)(param_1 + 0x24) = param_4;
  *(unsigned int *)(param_1 + 0x28) = temp_v3;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  temp_v0 = FUN_002228d4();
  *(unsigned char *)(param_1 + 0x20) = temp_v0;
  temp_v2 = cecProcessGetObject();
  if (temp_v2 != 1) {
    if (temp_v2 == 2) {
      temp_v3 = 4;
    }
    else {
      FUN_0026e5ec(4,0);
      temp_v3 = 8;
    }
    FUN_0026e5ec(temp_v3,temp_v2 == 2);
  }
  else {
    FUN_0026e5ec(8,1);
  }
  FUN_0026e5ec(0x10,1);
  *(unsigned char *)(param_1 + 0x37) = param_3;
  temp_v2 = FUN_0025981c();
  *(int *)(param_1 + 0x30) = temp_v2;
  if (param_2 == 0) {
    temp_v1 = 0x218;
    *(unsigned short *)(param_1 + 0x34) = 0;
    *(unsigned short *)(param_1 + 0x48) = 0x218;
    devilGetRecord();
    temp_v5 = 0x10;
    puVar5 = (unsigned int *)(temp_v1 + 0x3c);
    *(unsigned char *)(param_1 + 0x4a) = *(unsigned char *)(temp_v1 + 3);
    puVar8 = (unsigned int *)(param_1 + 0x38);
    temp_v16 = (unsigned int)puVar8 & 3;
    temp_v17 = temp_v16;
    if (temp_v16 != 0) {
      temp_v6 = *(unsigned char *)puVar5;
      puVar9 = (unsigned int *)(temp_v1 + 0x3d);
      if (temp_v16 < 3) {
        puVar9 = (unsigned int *)(temp_v1 + 0x3e);
        temp_v17 = (unsigned int)*(unsigned char *)(temp_v1 + 0x3d);
      }
      *(unsigned char *)puVar8 = temp_v6;
      puVar5 = puVar9;
      if (temp_v16 < 2) {
        puVar5 = (unsigned int *)((int)puVar9 + 1);
        temp_v6 = (unsigned char)*puVar9;
      }
      puVar9 = (unsigned int *)(param_1 + 0x39);
      if (temp_v16 < 3) {
        puVar9 = (unsigned int *)(param_1 + 0x3a);
        *(unsigned char *)(param_1 + 0x39) = (unsigned char)temp_v17;
      }
      temp_v5 = temp_v16 + 0xc;
      puVar8 = puVar9;
      if (temp_v16 < 2) {
        puVar8 = (unsigned int *)((int)puVar9 + 1);
        *(unsigned char *)puVar9 = temp_v6;
      }
    }
    temp_v16 = (unsigned int)puVar5 & 3;
    if (temp_v16 != 0) {
      while( 1 ) {
        temp_v6 = (unsigned char)temp_v17;
        if (temp_v5 < 8) break;
        puVar9 = puVar5 + 1;
        temp_v16 = *puVar5;
        puVar5 = puVar5 + 2;
        temp_v17 = *puVar9;
        *puVar8 = temp_v16;
        puVar8[1] = temp_v17;
        puVar8 = puVar8 + 2;
        temp_v5 = temp_v5 - 8;
      }
      puVar6 = puVar8;
      puVar9 = puVar5;
      if (-1 < (int)(temp_v5 - 4)) {
        puVar9 = puVar5 + 1;
        temp_v16 = *puVar5;
        puVar6 = puVar8 + 1;
        *puVar8 = temp_v16;
      }
      temp_v7 = (unsigned char)temp_v16;
      temp_v19 = (unsigned char)((unsigned char)((temp_v5 - 4) >> 1) & 1);
      temp_v5 = temp_v5 << 0x1f;
      temp_v18 = (int)temp_v5 < 0;
      if (temp_v19) {
        pbVar10 = (unsigned char *)((int)puVar9 + 1);
        temp_v7 = (unsigned char)*puVar9;
        puVar9 = (unsigned int *)((int)puVar9 + 2);
        temp_v6 = *pbVar10;
      }
      if (temp_v18) {
        temp_v5 = (unsigned int)(unsigned char)*puVar9;
      }
      if (temp_v19) {
        pbVar10 = (unsigned char *)((int)puVar6 + 1);
        *(unsigned char *)puVar6 = temp_v7;
        puVar6 = (unsigned int *)((int)puVar6 + 2);
        *pbVar10 = temp_v6;
      }
      puVar5 = puVar6;
      if (temp_v18) {
        puVar5 = (unsigned int *)((int)puVar6 + 1);
        *(unsigned char *)puVar6 = (unsigned char)temp_v5;
      }
      return puVar5;
    }
    temp_v17 = temp_v5 - 0x20;
    temp_v16 = 0;
    if (temp_v5 >= 0x20) {
      temp_v16 = *puVar5;
      temp_v5 = puVar5[1];
      temp_v10 = puVar5[2];
      temp_v11 = puVar5[3];
      HintPreloadData(puVar5 + 0x14);
      temp_v12 = puVar5[4];
      temp_v13 = puVar5[5];
      temp_v14 = puVar5[6];
      temp_v15 = puVar5[7];
      puVar5 = puVar5 + 8;
      while( 1 ) {
        *puVar8 = temp_v16;
        puVar8[1] = temp_v5;
        puVar8[2] = temp_v10;
        puVar8[3] = temp_v11;
        temp_v18 = temp_v17 >= 0x20;
        temp_v17 = temp_v17 - 0x20;
        puVar8[4] = temp_v12;
        puVar8[5] = temp_v13;
        puVar8[6] = temp_v14;
        puVar8[7] = temp_v15;
        puVar8 = puVar8 + 8;
        if (temp_v18) {
          temp_v16 = *puVar5;
          temp_v5 = puVar5[1];
          temp_v10 = puVar5[2];
          temp_v11 = puVar5[3];
          puVar5 = puVar5 + 4;
        }
        HintPreloadData(puVar5 + 0x10);
        if (!temp_v18) break;
        temp_v12 = *puVar5;
        temp_v13 = puVar5[1];
        temp_v14 = puVar5[2];
        temp_v15 = puVar5[3];
        puVar5 = puVar5 + 4;
      }
    }
    if ((unsigned char)((unsigned char)(temp_v17 >> 4) & 1)) {
      temp_v16 = *puVar5;
      temp_v5 = puVar5[1];
      temp_v10 = puVar5[2];
      temp_v11 = puVar5[3];
      puVar5 = puVar5 + 4;
      *puVar8 = temp_v16;
      puVar8[1] = temp_v5;
      puVar8[2] = temp_v10;
      puVar8[3] = temp_v11;
      puVar8 = puVar8 + 4;
    }
    if ((int)(temp_v17 << 0x1c) < 0) {
      temp_v16 = *puVar5;
      temp_v5 = puVar5[1];
      puVar5 = puVar5 + 2;
      *puVar8 = temp_v16;
      puVar8[1] = temp_v5;
      puVar8 = puVar8 + 2;
    }
    puVar6 = puVar8;
    puVar9 = puVar5;
    if ((unsigned char)((unsigned char)(temp_v17 >> 2) & 1)) {
      puVar9 = puVar5 + 1;
      temp_v16 = *puVar5;
      puVar6 = puVar8 + 1;
      *puVar8 = temp_v16;
    }
    temp_v8 = (unsigned short)temp_v16;
    if ((temp_v17 & 3) == 0) {
      return puVar6;
    }
    temp_v19 = (unsigned char)((unsigned char)(temp_v17 >> 1) & 1);
    temp_v17 = temp_v17 << 0x1f;
    temp_v18 = (int)temp_v17 < 0;
    puVar5 = puVar9;
    if (temp_v19) {
      puVar5 = (unsigned int *)((int)puVar9 + 2);
      temp_v8 = (unsigned short)*puVar9;
    }
    if (temp_v18) {
      temp_v17 = (unsigned int)(unsigned char)*puVar5;
    }
    puVar5 = puVar6;
    if (temp_v19) {
      puVar5 = (unsigned int *)((int)puVar6 + 2);
      *(unsigned short *)puVar6 = temp_v8;
    }
    puVar8 = puVar5;
    if (temp_v18) {
      puVar8 = (unsigned int *)((int)puVar5 + 1);
      *(unsigned char *)puVar5 = (unsigned char)temp_v17;
    }
    return puVar8;
  }
  temp_v9 = 0;
  *(short *)(param_1 + 0x34) = (short)param_2;
  do {
    temp_v4 = (int)*(char *)(temp_v1 + temp_v9 + 0x90f0);
    if ((-1 < temp_v4) &&
       (temp_v2 = gameGetUnitRecord(temp_v4), *(short *)(temp_v2 + 0x46) == *(short *)(param_1 + 0x34))) break;
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x18);
  *(short *)(param_1 + 0x48) = (short)param_2;
  *(unsigned char *)(param_1 + 0x4a) = *(unsigned char *)(temp_v2 + 0x48);
  puVar5 = (unsigned int *)memCopy(temp_v2 + 0x34,param_1 + 0x38,0x10);
  return puVar5;
}

} /* extern "C" */
