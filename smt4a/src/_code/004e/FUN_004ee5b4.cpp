/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ee5b4` (_code @ 0x4ee5b4, 0x46c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f490(...);
int FUN_00192550(void);
int FUN_001aba54(void);
int FUN_002e6354(unsigned int *, int);
int FUN_003ece9c(...);
int FUN_003ed9b4(int);
int FUN_003eebf4(int, int);
int FUN_003f0e20(int, int);
int FUN_003f2498(...);
int FUN_0047f08c(...);
int FUN_0047f584(void);
int FUN_004e1f58(...);
int FUN_004e5650(int *, unsigned int *);
int FUN_004e626c(int *, unsigned int, unsigned int *, unsigned int, unsigned int);
int FUN_004e638c(...);
int FUN_004e69e8(int *, unsigned int *, int);
int FUN_004f5f90(unsigned int);
int FUN_004f6e68(unsigned int);
int FUN_004f7590(...);
int FUN_004f7ca4(unsigned int);
int FUN_004f7fbc(unsigned int);
int FUN_004fbeac(int, int, int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_0015f490. */
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_003e7adc(int);
extern int FUN_003e8430(int);
/* Supplied declaration required: FUN_003ece9c. */
/* Supplied declaration required: FUN_003ed9b4. */
/* Supplied declaration required: FUN_003eebf4. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_003f2498. */
/* Supplied declaration required: FUN_0047f08c. */
/* Supplied declaration required: FUN_0047f584. */
extern int FUN_004ab594(unsigned int);
/* Supplied declaration required: FUN_004e1f58. */
/* Supplied declaration required: FUN_004e5650. */
/* Supplied declaration required: FUN_004e626c. */
/* Supplied declaration required: FUN_004e638c. */
/* Supplied declaration required: FUN_004e69e8. */
/* Supplied declaration required: FUN_004f5f90. */
/* Supplied declaration required: FUN_004f6e68. */
/* Supplied declaration required: FUN_004f7590. */
extern int FUN_004f7aa4(unsigned int, unsigned char);
/* Supplied declaration required: FUN_004f7ca4. */
/* Supplied declaration required: FUN_004f7fbc. */
/* Supplied declaration required: FUN_004fbeac. */


void FUN_004ee5b4(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 22 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char *pbVar6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  param_2[0x15c] = 0;
  param_2[0x15d] = 0;
  param_2[3] = 0;
  param_2[0x161] = 0;
  param_2[0x162] = 0;
  param_2[0x163] = 0;
  param_2[0x15b] = 0;
  param_2[7] = 0;
  if (((((((unsigned int *)param_2[8])[1] & DAT_00571164) != 0 || (*(unsigned int *)param_2[8] & DAT_00571160) != 0)
       && (temp_v3 = FUN_003e7adc(*param_1), temp_v3 == 0)) && ((*param_2 & 0x200) == 0)) &&
     (((temp_v0 = *(short *)(param_2[10] + 0x1be), temp_v0 == 1 ||
       ((temp_v0 == 2 || temp_v0 == 6) || temp_v0 == 8)) && (temp_v3 = FUN_0014bef4(99), temp_v3 < 0x32)))) {
    *(unsigned short *)(param_2[10] + 0x1be) = 2;
    *(unsigned short *)(param_2[10] + 0x1c0) = 0x8f;
    *param_2 = *param_2 | 0x100000;
    FUN_002e6354(param_2 + 0xe,0x85);
    param_4 = 0;
    FUN_004fbeac(0,0,0,0x48,0);
  }
  temp_v3 = 0;
  temp_v5 = 0x85;
  do {
    temp_v2 = temp_v3 * 2;
    temp_v5 = temp_v5 - 1;
    param_2[temp_v2 + 0x16e] = 0xffffffff;
    param_2[temp_v3 * 2 + 0x16f] = 0;
    temp_v3 = temp_v3 + 1;
  } while (temp_v5 != 0);
  *(unsigned char *)(param_2 + 0x167) = 0;
  FUN_004e626c(param_1,*(unsigned int *)(*param_1 + 0xa4),param_2 + temp_v2 + 0x16e,0xffffffff,param_4);
  temp_v3 = 0;
  do {
    param_2[temp_v3 * 4 + 0x279] = 0;
    temp_v5 = *param_1;
    FUN_003f0e20(temp_v5,temp_v3);
    if (temp_v5 != 0) {
      param_2[temp_v3 * 4 + 0x279] = *(unsigned int *)(temp_v5 + 600);
      param_2[temp_v3 * 4 + 0x27a] = *(unsigned int *)(temp_v5 + 0x25c);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x6d);
  FUN_004e69e8(param_1,param_2,0);
  FUN_003ed9b4(*param_1);
  FUN_004f7fbc(DAT_00573808);
  FUN_004f6e68(DAT_00573808);
  if (param_2[0x165] == 9) {
    FUN_004f5f90(DAT_00573808);
  }
  FUN_004e5650(param_1,param_2);
  FUN_004f7ca4(DAT_00573808);
  temp_v3 = *param_1;
  FUN_003eebf4(temp_v3,1);
  temp_v3 = FUN_004f7aa4(DAT_00573808,-1 < temp_v3);
  if (temp_v3 != 0) {
    FUN_004e638c(param_1,param_2,*(unsigned short *)(temp_v3 + 0x12),*(unsigned short *)(temp_v3 + 0x14));
  }
  else {
    FUN_004e638c(param_1,param_2,0xffff,0);
  }
  FUN_004e1f58(param_1,param_2,0);
  FUN_004f7590(DAT_00573808);
  *(unsigned int *)(DAT_00571508 + 0x64c) = (*(unsigned int *)(DAT_00571508 + 0x64c) & 0xfeffffff) | 0x4000;
  switch(*(unsigned short *)(param_2[10] + 0x1be)) {
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
  case 0xb:
    FUN_003f2498(*param_1,*(unsigned int *)(*param_1 + 0x4ce8));
  }
  temp_v3 = FUN_003e8430(*param_1);
  if (temp_v3 != 0) {
    return;
  }
  temp_v4 = param_2[10];
  temp_v1 = 0;
  temp_v7 = 0;
  if (*(short *)(temp_v4 + 0x1be) == 2) {
    temp_v7 = (unsigned int)*(short *)(temp_v4 + 0x1c0);
    if (((0 < (int)temp_v7) && (temp_v4 = temp_v7, FUN_001aba54(), temp_v4 != 0)) &&
       (*(char *)(temp_v4 + 0x23) == '\x03')) {
      temp_v1 = 1;
    }
  }
  else if (*(short *)(temp_v4 + 0x1be) == 8) {
    temp_v3 = (int)*(short *)(temp_v4 + 0x1c0);
    FUN_00192550();
    if (temp_v3 != 0) {
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v3 + 0x32);
      if (((0 < (int)temp_v7) && (temp_v4 = temp_v7, FUN_001aba54(), temp_v4 != 0)) &&
         (*(char *)(temp_v4 + 0x23) == '\x03')) {
        temp_v1 = 1;
      }
    }
  }
  pbVar6 = (unsigned char *)param_2[10];
  temp_v0 = *(short *)(pbVar6 + 0x1be);
  if (((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 8) && ((*pbVar6 & 6) != 0)) {
    if ((*param_2 & 0x100000) != 0) {
      FUN_0015f490(*(unsigned short *)(pbVar6 + 2),10,0);
    }
    else {
      if (temp_v1) {
        temp_v6 = 6;
      }
      else {
        temp_v6 = 5;
      }
      FUN_0015f490(*(unsigned short *)(pbVar6 + 2),temp_v6,0,temp_v7 & 0xffff);
    }
  }
  if ((*(unsigned char *)param_2[10] & 8) != 0) {
    FUN_003ece9c(*param_1);
  }
  pbVar6 = (unsigned char *)param_2[10];
  if ((*pbVar6 & 1) != 0) {
    temp_v0 = *(short *)(pbVar6 + 0x1be);
    if (temp_v0 == 8) {
      FUN_0047f08c(0,(int)*(short *)(pbVar6 + 0x1c0));
      return;
    }
    if (temp_v0 < 9) {
      if (temp_v0 == 1) {
        FUN_0047f08c(0xffffffff,0);
        return;
      }
      if (temp_v0 == 2) {
        FUN_0047f08c((int)*(short *)(pbVar6 + 0x1c0),0);
        return;
      }
    }
    else if (((temp_v0 == 9 || temp_v0 == 10) && (temp_v3 = FUN_003e7adc(*param_1), temp_v3 != 0)) &&
            (temp_v3 = FUN_004ab594(DAT_0057a9c8), temp_v3 == 0)) {
      FUN_0047f584();
      return;
    }
  }
  return;
}

} /* extern "C" */
