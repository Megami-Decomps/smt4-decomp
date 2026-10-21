/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003821d8` (_code @ 0x3821d8, 0x694 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023547c(int);
int FUN_00235554(unsigned int *, unsigned char *);
int FUN_00250d84(int, unsigned int);
int FUN_00269dc8(void);
int buttonHelpResetSlots(void);
int FUN_00287528(int);
int gameFlagSetValue(int, int);
int FUN_0028eeb8(int);
int FUN_00296934(void);
int FUN_0029b074(void);
int resultCreate(int);
int FUN_0029bbc8(void);
int partyFindActiveSlotById(int);
int slotSetRequest(...);
int FUN_0029ee6c(int, int);
int dataTable1bOr1cGetRecord(void);
int buttonHelpSetPreset(int);
int FUN_002bff50(void);
int FUN_002cdf2c(int *);
int FUN_00333b74(int *, int);
int FUN_0034888c(int);

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
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
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char LAB_00382660; /* 0x382660 */
extern unsigned char LAB_00382674; /* 0x382674 */
extern unsigned char LAB_00382684; /* 0x382684 */
extern unsigned char LAB_00382694; /* 0x382694 */
extern char s_e022_02_0044db24[8]; /* 0x44db24 */

extern int scrRunOpcodesStub(unsigned int);
extern unsigned int FUN_00223ca0(void);
/* Supplied declaration required: FUN_0023547c. */
/* Supplied declaration required: FUN_00235554. */
extern int FUN_00241990(void);
/* Supplied declaration required: FUN_00250d84. */
extern int FUN_00250ec0(unsigned int);
/* Supplied declaration required: FUN_00269dc8. */
/* Supplied declaration required: buttonHelpResetSlots. */
extern int FUN_0026b564(void);
extern int screenFadeIsBusy(void);
/* Supplied declaration required: FUN_00287528. */
extern int FUN_00287894(unsigned short);
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_0028eeb8. */
/* Supplied declaration required: FUN_00296934. */
extern int idIsAtLeast350(unsigned int);
extern int questIsCompleted(unsigned int);
extern int FUN_00298fa0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0029b074. */
/* Supplied declaration required: resultCreate. */
/* Supplied declaration required: FUN_0029bbc8. */
/* Supplied declaration required: partyFindActiveSlotById. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
extern int FUN_002b8660(void);
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002bff50. */
extern int gameFlagIsSet(void);
/* Supplied declaration required: FUN_002cdf2c. */
extern int FUN_002e31b0(void);
/* Supplied declaration required: FUN_00333b74. */
/* Supplied declaration required: FUN_0034888c. */


void FUN_003821d8(unsigned int *param_1)

{
/* irregular: 6 goto(s); 21 native warning(s); review required */
  unsigned short temp_v0;
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
      dataTable1bOr1cGetRecord();
      if (((temp_v1 != 0) && (*(char *)(temp_v1 + 6) == '\0')) &&
         (temp_v2 = FUN_00298fa0(temp_v4,1), temp_v2 != 0)) {
        temp_v0 = *(unsigned short *)(temp_v1 + 0x19c);
        temp_v2 = idIsAtLeast350(temp_v4);
        if (temp_v2 == 0) {
          switch(temp_v0) {
          case 1:
            if ((char)param_1[6] == '\0') goto LAB_003822fc;
            break;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            if ((char)param_1[6] == '\x01') goto LAB_003822fc;
            break;
          case 9:
            if ((char)param_1[6] == '\x02') goto LAB_003822fc;
            break;
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
            if ((char)param_1[6] == '\x03') goto LAB_003822fc;
          }
        }
        else {
LAB_003822fc:
          temp_v2 = FUN_00250ec0(temp_v4);
          if (temp_v2 != 0) {
            if (param_1[2] != 0xb) {
              buttonHelpSetPreset(0xa3);
              FUN_0029ee6c(0,0x323232ff);
              FUN_00235554(param_1,&LAB_00382660);
              temp_v4 = param_1[2] + 1;
            }
            else {
              FUN_00269dc8();
              FUN_0023547c((int)(char)param_1[4]);
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
    buttonHelpSetPreset(0xa3);
    FUN_00235554(param_1,&LAB_00382674);
    temp_v4 = 10;
    break;
  case 1:
    temp_v2 = scrRunOpcodesStub(*(unsigned int *)param_1[0x171]);
    if (temp_v2 != 2) {
      return;
    }
    param_1[2] = param_1[2] + 1;
  case 2:
    FUN_00269dc8();
    FUN_0023547c((int)(char)param_1[4]);
    temp_v4 = param_1[2] + 1;
    break;
  case 3:
    temp_v2 = FUN_002e31b0();
    if (temp_v2 != 0) {
      temp_v4 = FUN_00223ca0();
      param_1[0x343] = temp_v4;
      param_1[2] = 4;
      FUN_0023547c((int)(char)param_1[4]);
      buttonHelpSetPreset(0xa3);
    }
    temp_v2 = FUN_00241990();
    if (temp_v2 == 0) {
      return;
    }
    FUN_00296934();
    temp_v4 = 5;
    break;
  case 4:
    temp_v2 = FUN_00241990();
    if (temp_v2 == 0) {
      return;
    }
    FUN_00296934();
    *param_1 = *param_1 & 0xffffffdf;
    FUN_00235554(param_1,&LAB_00382684);
    temp_v4 = 6;
    break;
  case 5:
    *param_1 = *param_1 & 0xffffffdf;
    param_1[1] = 5;
    param_1[2] = 0;
    return;
  case 6:
    temp_v2 = scrRunOpcodesStub(*(unsigned int *)param_1[0x171]);
    if (temp_v2 != 2) {
      return;
    }
    if ((*param_1 & 0x10000) == 0) {
      temp_v4 = 0xb;
      break;
    }
    puVar4 = (unsigned short *)(param_1[0x343] & 0xffff);
    dataTable1bOr1cGetRecord();
    temp_v4 = (unsigned int)*puVar4;
    dataTable1bOr1cGetRecord();
    temp_v2 = 0;
    do {
      temp_v3 = temp_v4 + temp_v2 * 8;
      if (*(short *)(temp_v3 + 0x16c) != 1) {
        if (*(short *)(temp_v3 + 0x16c) == 2) {
          partyFindActiveSlotById(*(unsigned short *)(temp_v3 + 0x16e));
          FUN_0029bbc8();
        }
      }
      else {
        FUN_00250d84(*(unsigned short *)(temp_v3 + 0x16e),*(unsigned int *)(temp_v3 + 0x170));
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
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
    puVar5 = (unsigned short *)(param_1[0x343] & 0xffff);
    dataTable1bOr1cGetRecord();
    FUN_00333b74(&temp_v5,*puVar5);
    FUN_002cdf2c(&temp_v5);
    puVar5 = (unsigned short *)(param_1[0x343] & 0xffff);
    dataTable1bOr1cGetRecord();
    temp_v2 = FUN_00287894(*puVar5);
    if (temp_v2 == 0) {
      puVar5 = (unsigned short *)(param_1[0x343] & 0xffff);
      dataTable1bOr1cGetRecord();
      FUN_0028eeb8(*puVar5);
    }
    temp_v4 = 7;
    break;
  case 7:
    temp_v2 = FUN_002b8660();
    if (temp_v2 == 0) {
      return;
    }
    FUN_0029b074();
    FUN_002bff50();
    puVar5 = (unsigned short *)(param_1[0x343] & 0xffff);
    dataTable1bOr1cGetRecord();
    FUN_0034888c(*puVar5);
    buttonHelpSetPreset(0xa3);
    FUN_00235554(param_1,&LAB_00382694);
    temp_v4 = 8;
    break;
  case 8:
    temp_v2 = scrRunOpcodesStub(*(unsigned int *)param_1[0x171]);
    if (temp_v2 != 2) {
      return;
    }
    temp_v2 = questIsCompleted(0x6f);
    if (((temp_v2 != 0) && (temp_v2 = questIsCompleted(0xd4), temp_v2 != 0)) &&
       (temp_v2 = questIsCompleted(0xd5), temp_v2 != 0)) {
      gameFlagSetValue(0x669,1);
    }
    FUN_00287528(0);
    temp_v4 = 0;
    do {
      temp_v2 = temp_v4 * 0x1a;
      if ((unsigned short)(unsigned char)param_1[6] == *(unsigned short *)(temp_v2 + 0x44db3a)) {
        if (*(short *)(temp_v2 + 0x44db36) != 0) {
          if (*(short *)(temp_v2 + 0x44db36) == -1) {
            temp_v3 = questIsCompleted(0x65);
            if ((temp_v3 == 0) || (temp_v3 = questIsCompleted(0x66), temp_v3 == 0)) goto LAB_003827bc;
            temp_v3 = questIsCompleted(0x67);
          }
          else {
            temp_v3 = gameFlagIsSet();
          }
          if (temp_v3 == 0) goto LAB_003827bc;
        }
        if ((*(short *)(temp_v2 + 0x44db38) == 0) || (temp_v3 = gameFlagIsSet(), temp_v3 == 0)) {
          *param_1 = *param_1 | 0x20000;
          param_1[5] = (unsigned int)(s_e022_02_0044db24 + temp_v2);
          slotSetRequest(0,10,0xff);
          slotSetRequest(1,10,0xff);
          buttonHelpResetSlots();
          temp_v4 = 9;
          param_1[2] = temp_v4;
          return;
        }
      }
LAB_003827bc:
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 2);
    temp_v4 = 0xb;
    break;
  case 9:
    temp_v2 = screenFadeIsBusy();
    if (temp_v2 != 0) {
      return;
    }
    temp_v2 = FUN_0026b564();
    if (temp_v2 == 0) {
      return;
    }
    param_1[1] = 0x10;
    param_1[2] = 0;
    return;
  case 10:
    temp_v2 = scrRunOpcodesStub(*(unsigned int *)param_1[0x171]);
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
