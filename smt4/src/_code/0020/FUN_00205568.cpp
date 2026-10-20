/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00205568` (_code @ 0x205568, 0x224 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00205568_arg1 fn_00205568_arg1;
struct fn_00205568_arg1 {
    unsigned char pad_0x0[0x3a];
    unsigned char field_0x3a; /* +0x3a */
    unsigned char pad_0x3b[0x1];
    ushort field_0x3c; /* +0x3c */
    ushort field_0x3e; /* +0x3e */
    unsigned char pad_0x40[0x32];
    ushort field_0x72; /* +0x72 */
    ushort field_0x74; /* +0x74 */
    ushort field_0x76; /* +0x76 */
    ushort field_0x78; /* +0x78 */
    unsigned char pad_0x7a[0x6];
    ushort field_0x80; /* +0x80 */
};

extern int gameGetUnitRecord(void);
extern int gameGetSlotTable(void);
extern int gameGetPlayerData(void);


int FUN_00205568(int param_1,fn_00205568_arg1 *param_2,unsigned int *param_3,unsigned short *param_4)

{
/* irregular: 1 goto(s) */
  short temp_v0;
  unsigned char temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  short *psVar5;
  int temp_v3;
  short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned short *puVar10;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned short temp_v10;
  unsigned char temp_v11;
  
  temp_v8 = 0;
  temp_v5 = 4;
  puVar3 = (unsigned short *)&param_2->field_0x3a;
  do {
    temp_v2 = temp_v8;
    if (puVar3[1] != 0) {
      temp_v2 = temp_v8 + 1;
      if (param_1 != 0) {
        *(unsigned short *)(param_1 + temp_v8 * 2) = puVar3[1];
        temp_v2 = temp_v8 + 1;
      }
    }
    temp_v8 = temp_v2;
    if (puVar3[2] != 0) {
      temp_v8 = temp_v2 + 1;
      if (param_1 != 0) {
        *(unsigned short *)(param_1 + temp_v2 * 2) = puVar3[2];
        temp_v8 = temp_v2 + 1;
      }
    }
    temp_v5 = temp_v5 - 1;
    puVar3 = puVar3 + 2;
  } while (temp_v5 != 0);
  temp_v2 = gameGetPlayerData();
  temp_v5 = temp_v8;
  if (*(short *)(temp_v2 + 0x34) != 0) {
    temp_v5 = temp_v8 + 1;
    if (param_1 != 0) {
      *(short *)(param_1 + temp_v8 * 2) = *(short *)(temp_v2 + 0x34);
      temp_v5 = temp_v8 + 1;
    }
  }
  temp_v8 = 3;
  temp_v4 = *(short *)(temp_v2 + 0x36);
  psVar5 = (short *)(temp_v2 + 0x34);
  do {
    temp_v0 = psVar5[2];
    temp_v3 = temp_v5;
    if (temp_v4 != 0) {
      temp_v3 = temp_v5 + 1;
      if (param_1 != 0) {
        *(short *)(param_1 + temp_v5 * 2) = temp_v4;
        temp_v3 = temp_v5 + 1;
      }
    }
    temp_v4 = psVar5[3];
    temp_v5 = temp_v3;
    if (temp_v0 != 0) {
      temp_v5 = temp_v3 + 1;
      if (param_1 != 0) {
        *(short *)(param_1 + temp_v3 * 2) = temp_v0;
        temp_v5 = temp_v3 + 1;
      }
    }
    temp_v8 = temp_v8 - 1;
    psVar5 = psVar5 + 2;
  } while (temp_v8 != 0);
  temp_v8 = temp_v5;
  if (*(short *)(temp_v2 + 0x42) != 0) {
    temp_v8 = temp_v5 + 1;
    if (param_1 != 0) {
      *(short *)(param_1 + temp_v5 * 2) = *(short *)(temp_v2 + 0x42);
      temp_v8 = temp_v5 + 1;
    }
  }
  temp_v5 = gameGetSlotTable();
  temp_v2 = 0;
  do {
    if (*(char *)(temp_v5 + temp_v2 + 0x90f0) < '\0') {
      return temp_v8;
    }
    temp_v3 = gameGetUnitRecord();
    if (param_3 != (unsigned int *)0x0) {
      temp_v6 = *param_3;
      if (((temp_v6 & 0x7fff) != (unsigned int)*(unsigned short *)(temp_v3 + 0x46) || temp_v6 >> 0x1e != 1) &&
         (((unsigned int)*(unsigned short *)(temp_v3 + 0x46) != (temp_v6 & 0x3fffffff) >> 0xf || ((param_3[1] & 3) != 1)
          ))) goto LAB_002056e4;
    }
    else {
LAB_002056e4:
      if (param_4 != (unsigned short *)0x0) {
        temp_v1 = 0;
        temp_v7 = 0xc;
        puVar10 = param_4 + 0xd;
        puVar3 = param_4;
        do {
          puVar3 = puVar3 + 1;
          temp_v10 = *puVar3;
          temp_v11 = temp_v10 == *(unsigned short *)(temp_v3 + 0x46);
          if (temp_v11) {
            temp_v10 = (unsigned short)(unsigned char)*puVar10;
          }
          puVar10 = (unsigned short *)((int)puVar10 + 1);
          if (temp_v11 && temp_v10 == 1) {
            temp_v1 = 1;
          }
          temp_v7 = temp_v7 - 1;
        } while (temp_v7 != 0);
        if (temp_v1) {
          temp_v2 = temp_v2 + 1;
          if (temp_v2 >= 0x18) {
            return temp_v8;
          }
          continue;
        }
      }
      temp_v7 = 4;
      temp_v3 = temp_v3 + 0x32;
      do {
        temp_v9 = temp_v8;
        if (*(short *)(temp_v3 + 2) != 0) {
          temp_v9 = temp_v8 + 1;
          if (param_1 != 0) {
            *(short *)(param_1 + temp_v8 * 2) = *(short *)(temp_v3 + 2);
            temp_v9 = temp_v8 + 1;
          }
        }
        temp_v8 = temp_v9;
        if (*(short *)(temp_v3 + 4) != 0) {
          temp_v8 = temp_v9 + 1;
          if (param_1 != 0) {
            *(short *)(param_1 + temp_v9 * 2) = *(short *)(temp_v3 + 4);
            temp_v8 = temp_v9 + 1;
          }
        }
        temp_v7 = temp_v7 - 1;
        temp_v3 = temp_v3 + 4;
      } while (temp_v7 != 0);
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x18) {
      return temp_v8;
    }
  } while( 1 );
}

} /* extern "C" */
