/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00286928` (_code @ 0x286928, 0x328 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */
extern int DAT_0043e194; /* 0x43e194 */

/* Supplied declaration required: FUN_0028df0c. */
/* Supplied declaration required: FUN_0028df3c. */
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_0028df70(unsigned int);
/* Supplied declaration required: FUN_0028df98. */
/* Supplied declaration required: FUN_0028e974. */
extern unsigned int FUN_002b787c(unsigned int);
/* Supplied declaration required: FUN_002b8584. */
extern int FUN_002b89a0(void);
/* Supplied declaration required: FUN_002b8b78. */
extern unsigned char FUN_002b8ccc(void);
/* Supplied declaration required: FUN_002b8d24. */
/* Supplied declaration required: FUN_002b90f0. */
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c4bf0. */
extern unsigned short FUN_002d65b4(unsigned int);
extern unsigned char FUN_002f5b2c(unsigned int);


unsigned int
FUN_00286928(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5,
            unsigned int param_6)

{
/* irregular: 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  char temp_v6;
  
  temp_v2 = DAT_0043e18c;
  temp_v0 = 0;
  temp_v6 = param_4 == 0xb;
  temp_v5 = DAT_0043e190;
  if (!(unsigned char)temp_v6) {
    if (param_4 != 0xd) {
      if (param_4 == 0xe) {
        param_4 = 0xb;
      }
      else if (param_4 != 0xf) {
        temp_v5 = DAT_0043e194;
        if ((param_4 != 0xc) && (temp_v5 = DAT_0043e190, param_4 != 0xb && param_4 != 0x13)) {
          temp_v5 = DAT_0043e18c;
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
  *(char *)(temp_v5 + 0x5e) = temp_v6;
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
        FUN_0028e974(temp_v5,param_1,param_2,param_4,0x1a,1,0);
        if (*(char *)(temp_v5 + 0x35) != '\0') {
          return 0;
        }
        FUN_0028df98(temp_v5,*(unsigned char *)(temp_v5 + 9));
        return 0;
      }
      if ((param_4 != 0xb) && (param_4 != 0x13)) {
        return 1;
      }
      temp_v6 = '\0';
      if (temp_v2 != 0) {
        temp_v6 = *(char *)(temp_v2 + 8);
      }
      if (temp_v2 == 0 || temp_v6 == '\0') {
        FUN_0028df54(*(unsigned int *)(temp_v5 + 0x18));
        FUN_0028df3c(0xffffffff);
        FUN_0028df0c(0);
        return 1;
      }
      return 0;
    }
    if (temp_v6 == '\x05') {
      FUN_0028df54(*(unsigned int *)(temp_v5 + 0x18));
      return 1;
    }
    temp_v2 = FUN_002c1f28();
    if (temp_v2 == 0) {
      return 0;
    }
    temp_v2 = FUN_002b89a0();
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
      *(unsigned char *)(temp_v5 + 0x5f) = 1;
      *(unsigned char *)(temp_v2 + 0x5f) = 1;
    }
    if (param_4 == 6) {
      temp_v3 = 0x35ab9ff;
    }
    else {
      temp_v3 = 0x320202ff;
    }
    *(char *)(temp_v5 + 0x36) = (char)param_5;
    *(unsigned int *)(temp_v5 + 0x10) = temp_v3;
    if (temp_v5 != 0) {
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v5 + 8);
    }
    if (temp_v5 == 0 || temp_v3 == 0) {
      temp_v2 = FUN_002c1f28();
      if ((temp_v2 != 0) && (temp_v2 = FUN_002b89a0(), temp_v2 != 0)) {
        return 1;
      }
      FUN_0028e974(temp_v5,param_1,param_2,param_4,0x1a,1,param_6);
      if (param_4 == 0xb || param_4 == 0x13) {
        temp_v4 = FUN_002b787c(*(unsigned int *)(temp_v5 + 4));
        *(unsigned int *)(temp_v5 + 0x20) = temp_v4;
      }
      if (*(char *)(temp_v5 + 0x35) == '\0') {
        FUN_0028df98(temp_v5,*(unsigned char *)(temp_v5 + 9));
      }
      if (param_5 != 0) {
        FUN_002c4bf0(*(unsigned int *)(temp_v5 + 4),0x20);
        FUN_002b90f0(*(unsigned int *)(temp_v5 + 4),0x40);
      }
      temp_v3 = 0;
      *(unsigned char *)(temp_v5 + 0xa12) = 0;
      do {
        temp_v0 = FUN_002f5b2c(temp_v3 & 0xff);
        *(unsigned char *)(temp_v5 + temp_v3 + 0xa13) = temp_v0;
        temp_v1 = FUN_002d65b4(temp_v3 & 0xff);
        temp_v2 = temp_v3 * 2;
        temp_v3 = temp_v3 + 1;
        *(unsigned short *)(temp_v5 + temp_v2 + 0xa1a) = temp_v1;
      } while ((int)temp_v3 < 6);
      temp_v6 = *(char *)(temp_v5 + 9);
      if (((temp_v6 == '\a' || temp_v6 == '\b') || temp_v6 == '\t') &&
         (temp_v2 = FUN_0028df70(0), temp_v2 == 5)) {
        *(unsigned char *)(temp_v5 + 0xa26) = 1;
        temp_v0 = FUN_002b8ccc();
        *(unsigned char *)(temp_v5 + 0xa12) = temp_v0;
        FUN_002b8b78(0xdc);
      }
      if (param_4 != 0x13) {
        return 0;
      }
      FUN_002b8584();
      return 0;
    }
    *(unsigned char *)(temp_v5 + 0x2e) = 1;
  }
  FUN_002b8d24(temp_v5,*(unsigned char *)(temp_v5 + 9));
  *(unsigned char *)(temp_v5 + 8) = 3;
  *(unsigned char *)(temp_v5 + 0x35) = 0;
  return 0;
}
