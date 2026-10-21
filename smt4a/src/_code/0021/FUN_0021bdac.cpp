/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021bdac` (_code @ 0x21bdac, 0x35c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int objFlagsSetBits(unsigned int, int);
int msgBoxFlagsClear(unsigned int, int);
int FUN_00165088(int, int);
int sysPlaySe(int);
int FUN_00169548(void);
int FUN_00203da4(...);
int messageSlotSet(int);
int FUN_0028b350(int, int);
int FUN_002c76c0(unsigned int);
int scrSetResult(unsigned int);

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

extern int DAT_0057f58c; /* 0x57f58c */
extern int DAT_0057f590; /* 0x57f590 */
extern int DAT_0057f594; /* 0x57f594 */

/* Supplied declaration required: objFlagsSetBits. */
extern int FUN_00162880(void);
extern int FUN_00162ea4(void);
/* Supplied declaration required: msgBoxFlagsClear. */
/* Supplied declaration required: FUN_00165088. */
extern unsigned short ifTouchGetButtonHelpValue(void);
/* Supplied declaration required: sysPlaySe. */
extern unsigned int FUN_001688c4(unsigned int);
/* Supplied declaration required: FUN_00169548. */
/* Supplied declaration required: FUN_00203da4. */
/* Supplied declaration required: messageSlotSet. */
/* Supplied declaration required: FUN_0028b350. */
/* Supplied declaration required: FUN_002c76c0. */
/* Supplied declaration required: scrSetResult. */
extern unsigned short screenGetSlotValue(unsigned int);
extern unsigned char screenGetSlotFlag(unsigned int);
extern int FUN_003aeaf0(unsigned int);


unsigned int
FUN_0021bdac(unsigned int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int param_6)

{
/* irregular: 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  char temp_v6;
  
  temp_v2 = DAT_0057f58c;
  temp_v0 = 0;
  temp_v6 = param_4 == 0xb;
  temp_v5 = DAT_0057f590;
  if (!(unsigned char)temp_v6) {
    if (param_4 != 0xe) {
      if (param_4 == 0xf) {
        param_4 = 0xb;
      }
      else if (param_4 != 0x10) {
        temp_v5 = DAT_0057f594;
        if (param_4 != 0xc) {
          if (param_4 != 0xd) {
            temp_v5 = DAT_0057f590;
            if (param_4 != 0xb && param_4 != 0x14) {
              temp_v5 = DAT_0057f58c;
            }
          }
          else {
            temp_v5 = *(int *)(param_2 * 4 + 0x5e2010);
            param_2 = (int)*(short *)(param_2 * 2 + 0x5e205a);
          }
        }
      }
      else {
        param_4 = 0xb;
        temp_v0 = 1;
        temp_v6 = 0;
      }
    }
    else {
      temp_v0 = 1;
      param_4 = 0xb;
      temp_v6 = 1;
    }
  }
  *(unsigned char *)(temp_v5 + 0x2d) = temp_v0;
  *(char *)(temp_v5 + 0x6c) = temp_v6;
  if (param_3 != 0) {
    if ((temp_v5 != 0) && (temp_v6 = *(char *)(temp_v5 + 8), temp_v6 == '\x04')) {
      return 1;
    }
    if (temp_v5 != 0) {
      temp_v6 = *(char *)(temp_v5 + 8);
    }
    if (temp_v5 == 0 || temp_v6 == '\0') {
      if (*(char *)(temp_v5 + 0x2e) != '\0') {
        *(unsigned char *)(temp_v5 + 0x2e) = 0;
        FUN_00203da4(temp_v5,param_1,param_2,param_4,0x1a,1,0);
        if (*(char *)(temp_v5 + 0x35) != '\0') {
          return 0;
        }
        FUN_0028b350(temp_v5,*(unsigned char *)(temp_v5 + 9));
        return 0;
      }
      if ((param_4 != 0xb) && (param_4 != 0x14)) {
        return 1;
      }
      temp_v6 = '\0';
      if (temp_v2 != 0) {
        temp_v6 = *(char *)(temp_v2 + 8);
      }
      if (temp_v2 == 0 || temp_v6 == '\0') {
        scrSetResult(*(unsigned int *)(temp_v5 + 0x18));
        FUN_002c76c0(0xffffffff);
        messageSlotSet(0);
        return 1;
      }
      return 0;
    }
    if (temp_v6 == '\x05') {
      scrSetResult(*(unsigned int *)(temp_v5 + 0x18));
      return 1;
    }
    temp_v2 = FUN_00162ea4();
    if (temp_v2 == 0) {
      return 0;
    }
    temp_v2 = FUN_00162880();
    temp_v6 = '\0';
    if (temp_v2 != 0) {
      temp_v6 = *(char *)(temp_v5 + 8);
    }
    if ((temp_v2 == 0 || temp_v6 == '\x03') || temp_v6 == '\0') {
      return 0;
    }
  }
  else {
    if ((unsigned char)temp_v6 != 0) {
      *(unsigned char *)(temp_v5 + 0x6d) = 1;
      *(unsigned char *)(temp_v2 + 0x6d) = 1;
    }
    if (param_4 == 6) {
      temp_v3 = 0x5dacfeff;
    }
    else {
      temp_v3 = 0xffffffff;
    }
    *(char *)(temp_v5 + 0x36) = (char)param_5;
    *(unsigned int *)(temp_v5 + 0x10) = temp_v3;
    if (temp_v5 != 0) {
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v5 + 8);
    }
    if (temp_v5 == 0 || temp_v3 == 0) {
      temp_v2 = FUN_00162ea4();
      if ((temp_v2 != 0) && (temp_v2 = FUN_00162880(), temp_v2 != 0)) {
        return 1;
      }
      FUN_00203da4(temp_v5,param_1,param_2,param_4,0x1a,1,param_6);
      if (param_4 == 0xb || param_4 == 0x14) {
        temp_v4 = FUN_001688c4(*(unsigned int *)(temp_v5 + 4));
        *(unsigned int *)(temp_v5 + 0x20) = temp_v4;
      }
      if (*(char *)(temp_v5 + 0x35) == '\0') {
        FUN_0028b350(temp_v5,*(unsigned char *)(temp_v5 + 9));
      }
      if (param_5 != 0) {
        objFlagsSetBits(*(unsigned int *)(temp_v5 + 4),0x20);
        msgBoxFlagsClear(*(unsigned int *)(temp_v5 + 4),0x40);
      }
      temp_v3 = 0;
      *(unsigned short *)(temp_v5 + 0x19c6) = 0;
      do {
        temp_v0 = screenGetSlotFlag(temp_v3 & 0xff);
        *(unsigned char *)(temp_v5 + temp_v3 + 0x19c8) = temp_v0;
        temp_v1 = screenGetSlotValue(temp_v3 & 0xff);
        temp_v2 = temp_v3 * 2;
        temp_v3 = temp_v3 + 1;
        *(unsigned short *)(temp_v5 + temp_v2 + 0x19ce) = temp_v1;
      } while ((int)temp_v3 < 6);
      temp_v6 = *(char *)(temp_v5 + 9);
      if (((temp_v6 == '\a' || temp_v6 == '\b') || temp_v6 == '\t') &&
         (temp_v2 = FUN_003aeaf0(0), temp_v2 == 5)) {
        *(unsigned char *)(temp_v5 + 0x19da) = 1;
        temp_v1 = ifTouchGetButtonHelpValue();
        *(unsigned short *)(temp_v5 + 0x19c6) = temp_v1;
        sysPlaySe(0xde);
      }
      if (param_4 != 0x14) {
        return 0;
      }
      FUN_00169548();
      return 0;
    }
    *(unsigned char *)(temp_v5 + 0x2e) = 1;
  }
  FUN_00165088(temp_v5,*(unsigned char *)(temp_v5 + 9));
  *(unsigned char *)(temp_v5 + 8) = 3;
  *(unsigned char *)(temp_v5 + 0x35) = 0;
  return 0;
}

} /* extern "C" */
