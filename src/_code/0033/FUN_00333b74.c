/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333b74` (_code @ 0x333b74, 0x23c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00333b74_arg1 fn_00333b74_arg1;
struct fn_00333b74_arg1 {
    byte field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x153];
    ushort field_0x154; /* +0x154 */
    ushort field_0x156; /* +0x156 */
    ushort field_0x158; /* +0x158 */
    ushort field_0x15a; /* +0x15a */
    void *field_0x15c; /* +0x15c */
};

extern int DAT_00433158; /* 0x433158 */

extern unsigned char *FUN_00240cd4(fn_00333b74_arg1 *);
/* Supplied declaration required: FUN_00295f28. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002b63c0. */
/* Supplied declaration required: FUN_002c09f4. */
/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


void FUN_00333b74(unsigned int *param_1,fn_00333b74_arg1 *param_2)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  fn_00333b74_arg1 *pfVar4;
  unsigned char *pbVar5;
  unsigned int *puVar6;
  unsigned int temp_v3;
  short *psVar8;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  void *pvVar12;
  int temp_v7;
  unsigned int temp_v8;
  short temp_v9;
  short temp_v10;
  unsigned short *puVar17;
  
  pfVar4 = param_2;
  FUN_002b63c0();
  if (pfVar4 != (fn_00333b74_arg1 *)0x0) {
    pbVar5 = (unsigned char *)FUN_00240cd4(param_2);
    puVar17 = (unsigned short *)((int)pfVar4 + ((int)((unsigned int)*pbVar5 << 0x1c) >> 0x1f) * -0xc + 0x154);
    if (((*pbVar5 & 8) != 0) && (*puVar17 == 0)) {
      puVar17 = &pfVar4->field_0x154;
    }
    temp_v0 = *puVar17;
    if (temp_v0 != 1) {
      if (temp_v0 == 3) {
        param_1[0xc] = (unsigned int)puVar17[2];
      }
      else if (temp_v0 == 4) {
        temp_v0 = puVar17[1];
        puVar6 = *(unsigned int **)(DAT_00433158 + 0x390);
        if (puVar6 != (unsigned int *)0x0) {
          temp_v8 = 0;
          if (temp_v8 < *(unsigned int *)(DAT_00433158 + 0x38c)) {
            do {
              if (*puVar6 == (unsigned int)temp_v0) {
                puVar6 = puVar6 + 1;
                goto LAB_00333c78;
              }
              temp_v8 = temp_v8 + 1;
              puVar6 = puVar6 + 0x15;
            } while (temp_v8 < *(unsigned int *)(DAT_00433158 + 0x38c));
          }
        }
        temp_v3 = FUN_002c0cec(0x1c,1);
        temp_v7 = FUN_002c0cc4();
        FUN_002c0c74(temp_v3);
        puVar6 = (unsigned int *)(temp_v7 + (unsigned int)temp_v0 * 0x50);
LAB_00333c78:
        temp_v1 = *(short *)((int)puVar6 + 0x36);
        temp_v9 = 0;
        if (*(short *)((int)puVar6 + 0x32) != 0) {
          temp_v9 = *(short *)((int)puVar6 + 0x32);
        }
        temp_v10 = 0;
        temp_v7 = 3;
        psVar8 = (short *)((int)puVar6 + 0x32);
        do {
          temp_v2 = psVar8[4];
          if (temp_v1 != 0) {
            temp_v9 = temp_v9 + temp_v1;
          }
          temp_v1 = psVar8[6];
          if (temp_v2 != 0) {
            temp_v10 = temp_v10 + temp_v2;
          }
          temp_v7 = temp_v7 - 1;
          psVar8 = psVar8 + 4;
        } while (temp_v7 != 0);
        temp_v9 = temp_v9 + temp_v10;
        if (*(short *)((int)puVar6 + 0x4e) != 0) {
          temp_v9 = temp_v9 + *(short *)((int)puVar6 + 0x4e);
        }
        temp_v4 = FUN_002c09f4(5);
        temp_v4 = temp_v4 + 3;
        temp_v7 = 0;
        if (temp_v4 != 0) {
          do {
            temp_v5 = FUN_002c09f4(temp_v9 - 1);
            temp_v6 = 0;
            do {
              temp_v8 = (unsigned int)*(unsigned short *)((int)puVar6 + temp_v6 * 4 + 0x32);
              if ((temp_v8 != 0) && (temp_v5 = temp_v5 - temp_v8, temp_v5 < 0)) {
                if ((temp_v7 < 6) && ((unsigned short)puVar6[temp_v6 + 0xc] != 0)) {
                  param_1[temp_v7] = (unsigned int)(unsigned short)puVar6[temp_v6 + 0xc];
                  param_1[temp_v7 + 6] = 1;
                  temp_v7 = temp_v7 + 1;
                }
                break;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 8);
            temp_v4 = temp_v4 - 1;
          } while (temp_v4 != 0);
        }
      }
    }
    else {
      *param_1 = (unsigned int)puVar17[1];
      param_1[6] = (unsigned int)puVar17[2];
    }
    if (puVar17[3] == 0) {
      pvVar12 = *(void **)(puVar17 + 4);
    }
    else {
      temp_v7 = FUN_002b63ac();
      if (*(unsigned char *)(temp_v7 + 0x76) >= 99) {
        temp_v8 = FUN_00295f28(0x62);
        param_1[0xd] = temp_v8;
      }
      else {
        temp_v8 = FUN_00295f28();
        param_1[0xd] = temp_v8;
      }
      pvVar12 = (void *)((temp_v8 * puVar17[3]) / 100);
    }
    param_1[0xd] = (unsigned int)pvVar12;
    *(short *)(param_1 + 0xe) = (short)param_2;
  }
  return;
}
