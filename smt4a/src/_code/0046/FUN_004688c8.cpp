/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004688c8` (_code @ 0x4688c8, 0x5c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_001695a0(void);
int FUN_0019de98(int, unsigned int);
int FUN_0019ea64(int);
int FUN_001ad9b4(void);
int FUN_001ba514(int);
int resultCreate(int);
int FUN_002f0c18(void);
int FUN_003315c4(void);
int FUN_00331714(int *);
int FUN_0034aae4(void);
int stateHolder4Request(int);
int FUN_003dec50(void);
int FUN_003df168(int *, int);
int gameFlagSetValue(...);
int FUN_00417a60(int);
int FUN_00417e08(int);
int pickObjStart(unsigned int *, unsigned char *);
int flagValueSub(int, unsigned int);
int FUN_004d0d70(void);

/* stack frame of param_1: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
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
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00468d60; /* 0x468d60 */
extern unsigned char LAB_00468d74; /* 0x468d74 */
extern unsigned char LAB_00468d84; /* 0x468d84 */
extern unsigned char LAB_00468e88; /* 0x468e88 */

extern int FUN_00162880(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0019ea64. */
extern int idIsAtLeast350(unsigned int);
extern int FUN_0019f1a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(unsigned int);
/* Supplied declaration required: FUN_001ba514. */
extern int FUN_001bd118(unsigned short);
extern int FUN_00224880(unsigned int);
extern int FUN_002802c8(void);
extern int FUN_002a746c(void);
/* Supplied declaration required: resultCreate. */
extern int FUN_002e19f8(void);
/* Supplied declaration required: FUN_002f0c18. */
extern unsigned int FUN_0031f8cc(void);
/* Supplied declaration required: FUN_003315c4. */
/* Supplied declaration required: FUN_00331714. */
/* Supplied declaration required: FUN_0034aae4. */
extern int stateHolder4IsD(void);
/* Supplied declaration required: stateHolder4Request. */
/* Supplied declaration required: FUN_003dec50. */
/* Supplied declaration required: FUN_003df168. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00417a60. */
/* Supplied declaration required: FUN_00417e08. */
/* Supplied declaration required: pickObjStart. */
/* Supplied declaration required: flagValueSub. */
/* Supplied declaration required: FUN_004d0d70. */


void FUN_004688c8(unsigned int *param_1)

{
/* irregular: 4 goto(s); 20 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned short *puVar5;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
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
  
  switch(param_1[2]) {
  case 0:
  case 0xb:
    temp_v4 = 0;
    do {
      temp_v1 = temp_v4;
      FUN_001ad9b4();
      if (((temp_v1 != 0) && (*(char *)(temp_v1 + 6) == '\0')) &&
         (temp_v2 = FUN_0019f1a4(temp_v4,1), temp_v2 != 0)) {
        temp_v0 = *(short *)(temp_v1 + 0x124);
        temp_v2 = idIsAtLeast350(temp_v4);
        if ((temp_v2 == 0) && (temp_v0 != 0)) {
          switch(temp_v0) {
          case 1:
            if ((char)param_1[6] == '\0') goto LAB_004689f8;
            break;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 0xe:
            if ((char)param_1[6] == '\x01') goto LAB_004689f8;
            break;
          case 9:
            if ((char)param_1[6] == '\x02') goto LAB_004689f8;
            break;
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
            if ((char)param_1[6] == '\x03') goto LAB_004689f8;
          }
        }
        else {
LAB_004689f8:
          temp_v2 = FUN_001ada74(temp_v4);
          if (temp_v2 != 0) {
            if (param_1[2] != 0xb) {
              sysPlaySe(0xa5);
              FUN_0019de98(0,0xf4f4f4ff);
              FUN_0019ea64(1);
              pickObjStart(param_1,&LAB_00468d60);
              temp_v4 = param_1[2] + 1;
            }
            else {
              FUN_002f0c18();
              stateHolder4Request((int)(char)param_1[4]);
              temp_v4 = 3;
            }
            param_1[2] = temp_v4;
            return;
          }
        }
      }
      temp_v4 = (temp_v4 + 1) & 0xffff;
    } while (temp_v4 < 400);
    if (param_1[2] == 0xb) {
      param_1[1] = 5;
      param_1[2] = 0;
      return;
    }
    sysPlaySe(0xa5);
    pickObjStart(param_1,&LAB_00468d74);
    temp_v4 = 10;
    break;
  case 1:
    temp_v2 = FUN_00224880(*(unsigned int *)param_1[0xad]);
    if (temp_v2 != 2) {
      return;
    }
    param_1[2] = param_1[2] + 1;
  case 2:
    FUN_002f0c18();
    stateHolder4Request((int)(char)param_1[4]);
    temp_v4 = param_1[2] + 1;
    break;
  case 3:
    temp_v2 = stateHolder4IsD();
    if (temp_v2 != 0) {
      temp_v4 = FUN_0031f8cc();
      param_1[0x283] = temp_v4;
      param_1[2] = 4;
      stateHolder4Request((int)(char)param_1[4]);
      sysPlaySe(0xa5);
    }
    temp_v2 = FUN_002a746c();
    if (temp_v2 == 0) {
      return;
    }
    FUN_0034aae4();
    temp_v4 = 5;
    break;
  case 4:
    temp_v2 = FUN_002a746c();
    if (temp_v2 == 0) {
      return;
    }
    FUN_0034aae4();
    *param_1 = *param_1 & 0xffffffdf;
    pickObjStart(param_1,&LAB_00468d84);
    temp_v4 = 6;
    break;
  case 5:
    *param_1 = *param_1 & 0xffffffdf;
    param_1[1] = 5;
    param_1[2] = 0;
    FUN_0019ea64(0);
    return;
  case 6:
    temp_v2 = FUN_00224880(*(unsigned int *)param_1[0xad]);
    if (temp_v2 != 2) {
      return;
    }
    if ((*param_1 & 0x10000) == 0) {
      temp_v4 = 0xb;
    }
    else {
      puVar4 = (unsigned short *)(param_1[0x283] & 0xffff);
      FUN_001ad9b4();
      temp_v4 = (unsigned int)*puVar4;
      FUN_001ad9b4();
      temp_v2 = 0;
      do {
        temp_v3 = temp_v4 + temp_v2 * 8;
        if (*(short *)(temp_v3 + 0x100) != 1) {
          if (*(short *)(temp_v3 + 0x100) == 2) {
            FUN_001ba514(*(unsigned short *)(temp_v3 + 0x102));
            FUN_004d0d70();
          }
        }
        else {
          flagValueSub(*(unsigned short *)(temp_v3 + 0x102),*(unsigned int *)(temp_v3 + 0x104));
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      temp_v2 = 0;
      do {
        temp_v3 = temp_v4 + temp_v2 * 2;
        temp_v0 = *(short *)(temp_v3 + 0xe0);
        if (temp_v0 != 0) {
          gameFlagSetValue(temp_v0,1);
        }
        temp_v0 = *(short *)(temp_v3 + 0xe6);
        if (temp_v0 != 0) {
          gameFlagSetValue(temp_v0,0,1);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
      resultCreate(1);
      temp_v17 = 0;
      temp_v18 = 0;
      temp_v5 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v9 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      puVar5 = (unsigned short *)(param_1[0x283] & 0xffff);
      FUN_001ad9b4();
      FUN_003df168(&temp_v5,*puVar5);
      FUN_00331714(&temp_v5);
      puVar5 = (unsigned short *)(param_1[0x283] & 0xffff);
      FUN_001ad9b4();
      temp_v2 = FUN_001bd118(*puVar5);
      if (temp_v2 == 0) {
        puVar5 = (unsigned short *)(param_1[0x283] & 0xffff);
        FUN_001ad9b4();
        FUN_00417e08(*puVar5);
      }
      temp_v4 = 7;
    }
    break;
  case 7:
    temp_v2 = FUN_00162880();
    if (temp_v2 == 0) {
      return;
    }
    FUN_003315c4();
    FUN_001695a0();
    puVar5 = (unsigned short *)(param_1[0x283] & 0xffff);
    FUN_001ad9b4();
    FUN_00417a60(*puVar5);
    FUN_003dec50();
    sysPlaySe(0xa5);
    pickObjStart(param_1,&LAB_00468e88);
    temp_v4 = 8;
    break;
  case 8:
    temp_v2 = FUN_00224880(*(unsigned int *)param_1[0xad]);
    if (temp_v2 != 2) {
      return;
    }
    param_1[2] = 0xb;
    FUN_0019ea64(0);
    return;
  case 9:
    temp_v2 = FUN_002802c8();
    if (temp_v2 != 0) {
      return;
    }
    temp_v2 = FUN_002e19f8();
    if (temp_v2 == 0) {
      return;
    }
    param_1[1] = 0x12;
    param_1[2] = 0;
    return;
  case 10:
    temp_v2 = FUN_00224880(*(unsigned int *)param_1[0xad]);
    if (temp_v2 != 2) {
      return;
    }
    temp_v4 = 5;
    break;
  default:
    return;
  }
  param_1[2] = temp_v4;
  return;
}

} /* extern "C" */
