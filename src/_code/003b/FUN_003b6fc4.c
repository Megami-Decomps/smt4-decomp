/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6fc4` (_code @ 0x3b6fc4, 0x2dc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
} param_4_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002889f8. */
/* Supplied declaration required: FUN_0029a418. */
extern int FUN_002a89e4(int);
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c615c. */


void FUN_003b6fc4(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  short temp_v8;
  unsigned int temp_v9;
  int *piVar8;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int *piVar12;
  int *piVar13;
  
  temp_v2 = FUN_002bf6d0(0x28,300);
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v12 = 0;
  temp_v8 = 0;
  temp_v1 = 0;
  if (-1 < param_2) {
    temp_v3 = FUN_002a89e4(param_2);
    temp_v9 = (unsigned int)*(unsigned short *)(temp_v3 + 0x44);
  }
  param_1 = param_1 + param_2 * 4;
  temp_v4 = 1;
  temp_v0 = 0;
  temp_v3 = 5;
  piVar12 = (int *)(param_1 + 0xd5e0);
  do {
    temp_v11 = temp_v10;
    if ((temp_v9 & (1 << (temp_v4 & 0xff))) != 0) {
      temp_v11 = temp_v10 + 1;
      if (*piVar12 == temp_v10) {
        temp_v8 = temp_v0 + 1;
        temp_v11 = temp_v10 + 1;
      }
    }
    temp_v10 = temp_v11;
    if ((temp_v9 & (1 << ((temp_v4 + 1) & 0xff))) != 0) {
      temp_v10 = temp_v11 + 1;
      if (*piVar12 == temp_v11) {
        temp_v8 = temp_v0 + 2;
        temp_v10 = temp_v11 + 1;
      }
    }
    temp_v3 = temp_v3 - 1;
    temp_v4 = temp_v4 + 2;
    temp_v0 = temp_v0 + 2;
  } while (temp_v3 != 0);
  if (temp_v10 == 1) {
    FUN_002889f8((int)temp_v8,*(short *)(temp_v2 + 8) + param_3,*(short *)(temp_v2 + 10) + param_4,0x7e);
    return;
  }
  if (temp_v10 >= 2) {
    piVar13 = (int *)(param_1 + 0xd580);
    temp_v3 = *piVar13;
    *piVar13 = temp_v3 + 1;
    if (temp_v3 + 1 < 0x14) {
      FUN_002889f8((int)temp_v8,*(short *)(temp_v2 + 8) + param_3,*(short *)(temp_v2 + 10) + param_4,0x7e)
      ;
      return;
    }
    temp_v4 = 1;
    temp_v0 = 0;
    temp_v3 = 5;
    do {
      temp_v11 = temp_v12;
      if ((temp_v9 & (1 << (temp_v4 & 0xff))) != 0) {
        FUN_002c615c(*piVar12 + 1,temp_v10);
        temp_v11 = temp_v12 + 1;
        if (temp_v5 == temp_v12) {
          temp_v1 = temp_v0 + 1;
          temp_v11 = temp_v12 + 1;
        }
      }
      temp_v12 = temp_v11;
      if ((temp_v9 & (1 << ((temp_v4 + 1) & 0xff))) != 0) {
        FUN_002c615c(*piVar12 + 1,temp_v10);
        temp_v12 = temp_v11 + 1;
        if (temp_v6 == temp_v11) {
          temp_v1 = temp_v0 + 2;
          temp_v12 = temp_v11 + 1;
        }
      }
      temp_v11 = DAT_0044ea00;
      temp_v3 = temp_v3 - 1;
      temp_v4 = temp_v4 + 2;
      temp_v0 = temp_v0 + 2;
    } while (temp_v3 != 0);
    piVar8 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v12 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = 3;
    if (*(char *)(temp_v11 + 0x1324) != '\0' || temp_v12 != 3) {
      (**(romwright_code **)(temp_v11 + 0x1328))();
      *(unsigned char *)(temp_v11 + 0x1324) = 0;
    }
    FUN_0029a418(*(short *)(temp_v2 + 8) + param_3,*(short *)(temp_v2 + 10) + param_4,
                 (int)**(short **)(temp_v2 + 0xc),(int)(*(short **)(temp_v2 + 0xc))[1],1);
    temp_v12 = (*piVar13 - 0x14) * -3;
    FUN_002889f8((int)temp_v8,(int)*(short *)(temp_v2 + 8) + temp_v12 + param_3,
                 *(short *)(temp_v2 + 10) + param_4,0x7e);
    FUN_002889f8((int)temp_v1,(int)*(short *)(temp_v2 + 8) + param_3 + temp_v12 + 0xd,
                 *(short *)(temp_v2 + 10) + param_4,0x7e);
    temp_v12 = DAT_0044ea00;
    piVar8 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v2 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = 0;
    if (*(char *)(temp_v12 + 0x1324) != '\0' || temp_v2 != 0) {
      (**(romwright_code **)(temp_v12 + 0x1328))();
      *(unsigned char *)(temp_v12 + 0x1324) = 0;
    }
    if (*piVar13 >= 0x18) {
      FUN_002c615c(*piVar12 + 1,temp_v10);
      *piVar12 = temp_v7;
      *piVar13 = 0;
    }
  }
  return;
}
