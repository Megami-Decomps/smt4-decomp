/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0420` (_code @ 0x2f0420, 0x384 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern int DAT_00588fd4; /* 0x588fd4 */

extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
extern int FUN_0019e4d4(unsigned short);
extern unsigned int FUN_001a6f60(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0021af2c. */
/* Supplied declaration required: FUN_00230d2c. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_002a7104. */
extern int FUN_002c7ca0(void);
/* Supplied declaration required: FUN_002f001c. */
/* Supplied declaration required: FUN_002f01e0. */
/* Supplied declaration required: FUN_00333de0. */
/* Supplied declaration required: FUN_0035da20. */
/* Supplied declaration required: FUN_0035da74. */
extern unsigned char FUN_003dfd5c(void);
extern int FUN_003e4d68(unsigned int);
extern char FUN_004bcaa8(short, short, short *, unsigned int *, unsigned int);
extern unsigned char FUN_004bd21c(unsigned int);


void FUN_002f0420(int param_1,unsigned int param_2,short *param_3)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  char temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  short *psVar13;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v1 = DAT_00588fd4;
  temp_v3 = 8;
  psVar13 = (short *)(DAT_00588fd4 + 0x1390);
  if (param_1 != 0) {
    psVar13 = (short *)(DAT_00588fd4 + 0x19d0);
  }
  if (*(short *)(DAT_00588fd4 + 0x1390) < 0) {
    temp_v3 = FUN_003dfd5c();
  }
  else if (0 < *(short *)(DAT_00588fd4 + 0x1390)) {
    temp_v4 = *(char *)(DAT_00588fd4 + 0x2017);
    if (temp_v4 != '\x04') {
      if ((temp_v4 != '\a' && temp_v4 != '\x10') && temp_v4 != '\x11') {
        temp_v3 = FUN_004bd21c(0);
      }
    }
    else {
      temp_v3 = 8;
    }
  }
  FUN_002f01e0(temp_v1 + 0x13e0,temp_v3);
  if (param_1 != 0) {
    FUN_0035da74(temp_v1 + 0x1a20,temp_v3);
  }
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  if ((*psVar13 >= 1) && (temp_v4 = *(char *)(temp_v1 + 0x2017), !(temp_v4 == '\a' || temp_v4 == '\x10'))) {
    if ((temp_v4 == '\x02' || temp_v4 == '\x03') || (temp_v4 == '\x11' || temp_v4 == '\x04')) {
      temp_v9 = FUN_0019e4d4(*(unsigned short *)(temp_v1 + 0x1390));
      temp_v4 = '\0';
      if (temp_v9 != 0) {
        temp_v4 = *(char *)(temp_v9 + 0x67);
      }
      if (temp_v9 == 0 || temp_v4 == '\0') {
        temp_v5 = 0;
      }
      else {
        temp_v5 = 1;
      }
    }
    else {
      temp_v5 = 0;
    }
    param_3 = psVar13 + 0x28;
    temp_v4 = FUN_004bcaa8(*psVar13,psVar13[1],param_3,(unsigned int *)&temp_v13,temp_v5);
    temp_v9 = (int)temp_v4;
    puVar7 = (unsigned int *)&temp_v13;
  }
  else {
    temp_v9 = -1;
    puVar7 = (unsigned int *)0x0;
  }
  FUN_0035da20(puVar7,temp_v9);
  temp_v9 = DAT_00588fd4;
  temp_v4 = *(char *)(temp_v1 + 0x2018);
  if ((temp_v4 == '\x06' || temp_v4 == '\a') || temp_v4 == '\f') {
    *(unsigned int *)(DAT_00588fd4 + 0x1374) = 0;
    FUN_0021af2c();
    *(unsigned char *)(temp_v9 + 0x2014) = 0;
  }
  if ((*psVar13 < 0) && (FUN_002f001c(psVar13 + 0x21), *(int *)(temp_v1 + 0x1374) >= 2)) {
    *(unsigned int *)(temp_v1 + 0x1374) = 1;
    FUN_0021af2c();
  }
  temp_v9 = DAT_00588fd4;
  if (*psVar13 < 1) {
    FUN_00230d2c();
    return;
  }
  if (*(char *)(temp_v1 + 0x2017) != '\x04') {
    FUN_00333de0();
    FUN_002a7104(psVar13 + 0x50);
  }
  else {
    if (*(int *)(DAT_00588fd4 + 0x20c0) == 0) {
      temp_v5 = FUN_001a6f60(*(unsigned int *)(DAT_00588fd4 + 0x20bc),0);
      temp_v6 = FUN_00192798();
      *(unsigned int *)(temp_v9 + 0x20c0) = temp_v6;
      temp_v5 = FUN_00192748(temp_v5);
      *(unsigned int *)(temp_v9 + 0x20c4) = temp_v5;
    }
    temp_v2 = DAT_00588fd4;
    temp_v11 = 0;
    temp_v12 = 0xffffffff;
    temp_v0 = *(short *)(temp_v9 + 0x1390);
    do {
      temp_v7 = FUN_003e4d68(temp_v11 & 0xffff);
      if (((*(unsigned int *)(temp_v7 + 0x130) & 1) != 0) && ((unsigned int)*(unsigned short *)(temp_v7 + 0x62) == (int)temp_v0))
      {
        temp_v12 = (unsigned int)*(unsigned short *)(temp_v7 + 300);
        break;
      }
      temp_v11 = temp_v11 + 1;
    } while ((int)temp_v11 < 0xc);
    temp_v11 = *(unsigned int *)(temp_v2 + 0x20c4);
    if ((int)temp_v11 < 1) {
      temp_v10 = 0;
    }
    else {
      temp_v10 = temp_v11 & 1;
      if (temp_v10 != 0) {
        param_3 = *(short **)(temp_v2 + 0x20c0);
      }
      temp_v8 = 0;
      if (temp_v10 != 0) {
        do {
          if ((unsigned short)param_3[temp_v8 * 2] == temp_v12) {
            if (-1 < (int)temp_v8) {
              FUN_002a1f60(*(unsigned int *)(temp_v9 + 0x20b4),3,0xffffffff,0,3,
                           *(unsigned int *)(temp_v9 + 0x20b8),
                           *(unsigned short *)(*(int *)(temp_v9 + 0x20c0) + temp_v8 * 4 + 2));
            }
            temp_v9 = FUN_002c7ca0();
            if (temp_v9 == 2) {
              *(unsigned int *)(temp_v1 + 0x1374) = 1;
              FUN_0021af2c();
            }
            FUN_00230d2c();
            return;
          }
          temp_v8 = temp_v8 + 1;
        } while ((int)temp_v8 < (int)temp_v10);
      }
    }
    temp_v8 = temp_v10;
    if ((int)temp_v8 < (int)temp_v11) {
      do {
        if (*(unsigned short *)(*(int *)(temp_v2 + 0x20c0) + temp_v8 * 4) == temp_v12) {
          if (-1 < (int)temp_v8) {
            FUN_002a1f60(*(unsigned int *)(temp_v9 + 0x20b4),3,0xffffffff,0,3,
                         *(unsigned int *)(temp_v9 + 0x20b8),
                         *(unsigned short *)(*(int *)(temp_v9 + 0x20c0) + temp_v8 * 4 + 2));
          }
          break;
        }
        if (*(unsigned short *)(*(int *)(temp_v2 + 0x20c0) + temp_v8 * 4 + 4) == temp_v12) {
          temp_v8 = temp_v8 + 1;
          if (-1 < (int)temp_v8) {
            FUN_002a1f60(*(unsigned int *)(temp_v9 + 0x20b4),3,0xffffffff,0,3,
                         *(unsigned int *)(temp_v9 + 0x20b8),
                         *(unsigned short *)(*(int *)(temp_v9 + 0x20c0) + temp_v8 * 4 + 2));
          }
          break;
        }
        temp_v8 = temp_v8 + 2;
      } while ((int)temp_v8 < (int)temp_v11);
    }
  }
  temp_v9 = FUN_002c7ca0();
  if (temp_v9 == 2) {
    *(unsigned int *)(temp_v1 + 0x1374) = 1;
    FUN_0021af2c();
  }
  FUN_00230d2c();
  return;
}
