/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ad6c` (_code @ 0x20ad6c, 0x6fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "battle/BtlMainAccess.h"
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int FUN_001643b4(...);
int sysPlaySe(void);
int dataTable00FindById(void);
int __aeabi_memset4(int, int, unsigned int);
int FUN_00203b40(int, int, int, int, int, int);
int FUN_00270104(void);
int FUN_002a4878(int);
int widgetSubCallIfVisible(...);
int screenSetContextHint(int, unsigned int, int);
int buttonHelpGetValue(void);
int FUN_003756c8(void);
int gameDataFlagTestBit(int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: FUN_001643b4. */
extern int ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_00270104. */
/* Supplied declaration required: FUN_002a4878. */
/* Supplied declaration required: widgetSubCallIfVisible. */
extern int objectApplyIfUnblocked(unsigned int);
/* Supplied declaration required: screenSetContextHint. */
extern unsigned int FUN_002cc9e0(int, unsigned int);
/* Supplied declaration required: buttonHelpGetValue. */
extern int uiSearchPrimary(unsigned int);
/* Supplied declaration required: FUN_003756c8. */
/* Supplied declaration required: gameDataFlagTestBit. */
extern int btlScriptUnitHasFlags(void);


void FUN_0020ad6c(int param_1,int param_2,int param_3)

{
/* irregular: 4 goto(s); 14 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int *puVar7;
  int *piVar8;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  piVar5 = (int *)(param_1 + 0x387c);
  if (*piVar5 == 0x22) {
    FUN_00203b40(param_1 + 0x3bdc,4,1,4,1,1);
  }
  if (*piVar5 == 0x13 || *piVar5 == 0x16) {
    buttonHelpGetValue();
    sysPlaySe();
  }
  temp_v1 = *piVar5;
  if ((temp_v1 == 0x22 || temp_v1 == 0x23) || temp_v1 == 0x24) {
    buttonHelpGetValue();
    sysPlaySe();
  }
  temp_v1 = ifTouchGetButtonHelpValue();
  if (temp_v1 == 0x3f) {
    reinterpret_cast<int>(btlGetMainState());
    temp_v1 = btlScriptUnitHasFlags();
    if (temp_v1 == 0) {
      buttonHelpGetValue();
      sysPlaySe();
    }
  }
  piVar8 = (int *)(param_1 + 0x3890);
  if (*piVar5 == 7) {
    if (*(int *)(param_1 + 0x3880) - 8U < 6) {
      FUN_00270104();
    }
    else {
      temp_v2 = FUN_002cc9e0(param_1,1);
      screenSetContextHint(param_1,temp_v2,*piVar8);
    }
  }
  if (param_2 != 2) {
    if (((!(param_2 == 9 || param_2 == 8)) && (!(param_2 == 0xb || param_2 == 10))) &&
       (!(param_2 == 0xd || param_2 == 0xc))) {
      if (param_2 == 1) {
        FUN_002a4878(param_1 + *piVar8 * 100 + 0x38bc);
        FUN_003756c8();
      }
    }
    else {
      FUN_003756c8();
    }
  }
  else {
    gameDataFlagTestBit(0x10);
    sysPlaySe();
  }
  if (param_3 != 0) {
    *(int *)(param_1 + 0x3880) = *piVar5;
  }
  *piVar5 = param_2;
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x3878) = 0;
  if (0 < *(short *)(param_1 + 0x480c)) {
    do {
      ifTouchRegionRemove();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(param_1 + 0x480c));
  }
  *(unsigned short *)(param_1 + 0x480c) = 0;
  __aeabi_memset4(param_1 + 0x480e,0x40,0xffffffff);
  if (param_2 != 1) {
    if (param_2 != 8) goto LAB_0020afa8;
LAB_0020b03c:
    piVar5 = (int *)(param_1 + 0x3890);
    temp_v3 = widgetSubCallIfVisible(param_1 + *piVar5 * 100 + 0x38bc);
    temp_v1 = 0;
    if (temp_v1 < (int)temp_v3) {
      do {
        if ((temp_v3 & 1) == 0) {
          temp_v4 = temp_v1 + (int)(8 - temp_v3) / 2 + 0x106;
        }
        else {
          temp_v4 = temp_v1 + (int)(7 - temp_v3) / 2 + 0xff;
        }
        temp_v0 = FUN_001643b4(0xd,temp_v4);
        temp_v4 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(unsigned short *)(param_1 + temp_v4 + 0x480e) = temp_v0;
        *(short *)(param_1 + 0x480c) = *(short *)(param_1 + 0x480c) + 1;
      } while (temp_v1 < (int)temp_v3);
    }
    puVar7 = (unsigned int *)(param_1 + 0x3c40);
    temp_v4 = 0;
    temp_v1 = uiSearchPrimary(*puVar7);
    if (0 < temp_v1) {
      do {
        if (*piVar5 == 1) {
          temp_v1 = 0xc2;
        }
        else if (*piVar5 == 2) {
          temp_v1 = 0xbb;
        }
        else {
          temp_v1 = 0xb3;
        }
        temp_v0 = FUN_001643b4(0xd,temp_v1 + temp_v4);
        temp_v1 = temp_v4 * 2;
        temp_v4 = temp_v4 + 1;
        *(unsigned short *)(param_1 + temp_v1 + 0x4824) = temp_v0;
        *(short *)(param_1 + 0x480c) = *(short *)(param_1 + 0x480c) + 1;
        temp_v1 = uiSearchPrimary(*puVar7);
      } while (temp_v4 < temp_v1);
    }
    temp_v1 = objectApplyIfUnblocked(*puVar7);
    temp_v4 = uiSearchPrimary(*puVar7);
    if (temp_v4 < temp_v1) {
      if (*piVar5 != 1) {
        if (*piVar5 != 2) {
          temp_v0 = FUN_001643b4(0xd,0x196);
          *(unsigned short *)(param_1 + 0x481e) = temp_v0;
          temp_v0 = FUN_001643b4(0xd,0x194);
          *(unsigned short *)(param_1 + 0x4820) = temp_v0;
          temp_v0 = FUN_001643b4(0xd,0x195);
          *(unsigned short *)(param_1 + 0x4822) = temp_v0;
        }
        else {
          temp_v0 = FUN_001643b4(0xd,0x193);
          *(unsigned short *)(param_1 + 0x481e) = temp_v0;
          temp_v0 = FUN_001643b4(0xd,0x191);
          *(unsigned short *)(param_1 + 0x4820) = temp_v0;
          temp_v0 = FUN_001643b4(0xd,0x192);
          *(unsigned short *)(param_1 + 0x4822) = temp_v0;
        }
      }
      else {
        temp_v0 = FUN_001643b4(0xd,0x199);
        *(unsigned short *)(param_1 + 0x481e) = temp_v0;
        temp_v0 = FUN_001643b4(0xd,0x197);
        *(unsigned short *)(param_1 + 0x4820) = temp_v0;
        temp_v0 = FUN_001643b4(0xd,0x198);
        *(unsigned short *)(param_1 + 0x4822) = temp_v0;
      }
      *(short *)(param_1 + 0x480c) = *(short *)(param_1 + 0x480c) + 3;
    }
  }
  else {
    temp_v3 = widgetSubCallIfVisible(param_1 + *piVar8 * 100 + 0x38bc);
    temp_v1 = 0;
    if ((int)temp_v3 < 1) {
      return;
    }
    do {
      if ((temp_v3 & 1) == 0) {
        temp_v4 = temp_v1 + (int)(8 - temp_v3) / 2 + 0x106;
      }
      else {
        temp_v4 = temp_v1 + (int)(7 - temp_v3) / 2 + 0xff;
      }
      temp_v0 = FUN_001643b4(0xd,temp_v4);
      temp_v4 = temp_v1 * 2;
      temp_v1 = temp_v1 + 1;
      *(unsigned short *)(param_1 + temp_v4 + 0x480e) = temp_v0;
      *(short *)(param_1 + 0x480c) = *(short *)(param_1 + 0x480c) + 1;
    } while (temp_v1 < (int)temp_v3);
LAB_0020afa8:
    if (param_2 == 10 || param_2 == 0xc) goto LAB_0020b03c;
  }
  if (param_2 != 0x13) {
    if (param_2 != 0x22) goto LAB_0020b1c0;
  }
  else {
    temp_v0 = FUN_001643b4(0xd,0x1b3);
    *(unsigned short *)(param_1 + 0x4830) = temp_v0;
    temp_v1 = 0;
    *(short *)(param_1 + 0x480c) = *(short *)(param_1 + 0x480c) + 1;
    if (*(int *)(param_1 + 0x4850) < 1) {
      return;
    }
    do {
      temp_v4 = param_1 + temp_v1 * 0x40;
      if (*(char *)(temp_v4 + 0x4870) != '\0') {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 0x4858);
        dataTable00FindById();
        if ((*(unsigned short *)(temp_v3 + 2) & 0x8000) != 0) {
          if (*(char *)(param_1 + 0x4857) != '\0') {
            temp_v0 = FUN_001643b4(0xd,0x1a0);
            *(unsigned short *)(param_1 + temp_v1 * 2 + 0x4832) = temp_v0;
          }
          else {
            temp_v3 = *(int *)(temp_v4 + 0x488c) - 0x14a;
            temp_v6 = temp_v3 >= 4;
            temp_v5 = temp_v3 == 4;
            if (temp_v3 >= 5) {
              temp_v3 = *(int *)(temp_v4 + 0x488c) - 0x165;
              temp_v6 = temp_v3 >= 3;
              temp_v5 = temp_v3 == 3;
            }
            if (!(temp_v6 && !temp_v5)) {
              temp_v0 = FUN_001643b4(0xd,0x19f);
              *(unsigned short *)(param_1 + temp_v1 * 2 + 0x4832) = temp_v0;
            }
            else {
              temp_v0 = FUN_001643b4(0xd,0x19e);
              *(unsigned short *)(param_1 + temp_v1 * 2 + 0x4832) = temp_v0;
            }
          }
        }
        else {
          temp_v0 = FUN_001643b4(0xd,*(unsigned int *)(temp_v4 + 0x488c));
          *(unsigned short *)(param_1 + temp_v1 * 2 + 0x4832) = temp_v0;
        }
        *(short *)(param_1 + 0x480c) = *(short *)(param_1 + 0x480c) + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 0x4850));
LAB_0020b1c0:
    if (param_2 != 0x2d) goto LAB_0020b3e4;
  }
  temp_v4 = 0;
  temp_v1 = widgetSubCallIfVisible(param_1 + 0x3bdc);
  if (0 < temp_v1) {
    do {
      if (*(char *)(param_1 + temp_v4 + 0x41ed) == '\0') {
        temp_v0 = FUN_001643b4(0xd,temp_v4 + 0x36);
        *(unsigned short *)(param_1 + temp_v4 * 2 + 0x4846) = temp_v0;
        *(short *)(param_1 + 0x480c) = *(short *)(param_1 + 0x480c) + 1;
      }
      temp_v4 = temp_v4 + 1;
      temp_v1 = widgetSubCallIfVisible(param_1 + 0x3bdc);
    } while (temp_v4 < temp_v1);
  }
LAB_0020b3e4:
  if (param_2 == 0x16) {
    temp_v4 = 0;
    temp_v1 = widgetSubCallIfVisible(param_1 + 0x3bdc);
    if (0 < temp_v1) {
      do {
        if (*(char *)(param_1 + temp_v4 + 0x3c84) == '\x01') {
          temp_v0 = FUN_001643b4(0xd,temp_v4 + 0x36);
          *(unsigned short *)(param_1 + temp_v4 * 2 + 0x4846) = temp_v0;
          *(short *)(param_1 + 0x480c) = *(short *)(param_1 + 0x480c) + 1;
        }
        temp_v4 = temp_v4 + 1;
        temp_v1 = widgetSubCallIfVisible(param_1 + 0x3bdc);
      } while (temp_v4 < temp_v1);
    }
  }
  return;
}

} /* extern "C" */
