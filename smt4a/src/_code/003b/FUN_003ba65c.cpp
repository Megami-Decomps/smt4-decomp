/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba65c` (_code @ 0x3ba65c, 0x3bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00317af8(float *, unsigned char [16], int);
int sysPlayVoice(int);
int FUN_0050d8e4(void);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern int DAT_0057f69c; /* 0x57f69c */
extern int DAT_0057f6b8; /* 0x57f6b8 */

extern int FUN_00163fd4(unsigned int);
extern int padButtonRepeat(unsigned int);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: sysPlayVoice. */
/* Supplied declaration required: FUN_0050d8e4. */


unsigned char FUN_003ba65c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10 [6];
  unsigned int temp_v11;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int temp_v12;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  float afStack_64 [4];
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int temp_v13;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int temp_v14;
  float temp_v15;
  unsigned char temp_v16 [16];
  
  temp_v0 = *(unsigned char *)(DAT_0057f69c + 0x27e97);
  temp_v10[0] = 45.0f;
  temp_v10[1] = 90.0f;
  temp_v10[2] = 135.0f;
  temp_v10[3] = 180.0f;
  temp_v10[4] = 225.0f;
  temp_v10[5] = 270.0f;
  temp_v11 = 0x43870000;
  uStack_8c = 0x43610000;
  uStack_88 = 0x43340000;
  uStack_84 = 0x43070000;
  uStack_80 = 0x42b40000;
  uStack_7c = 0x42340000;
  uStack_78 = 0x43870000;
  uStack_74 = 0x43610000;
  temp_v12 = 0x43340000;
  uStack_6c = 0x43070000;
  uStack_68 = 0x42b40000;
  afStack_64[0] = 45.0f;
  afStack_64[1] = 45.0f;
  afStack_64[2] = 90.0f;
  afStack_64[3] = 135.0f;
  uStack_54 = 0x43340000;
  uStack_50 = 0x43610000;
  uStack_4c = 0x43870000;
  uStack_48 = 0x42340000;
  uStack_44 = 0x42b40000;
  temp_v14 = 0x43870000;
  temp_v13 = 0x43070000;
  uStack_3c = 0x43340000;
  uStack_38 = 0x43610000;
  temp_v1 = FUN_00163fd4(7);
  if (temp_v1 == 0) {
    DAT_0057f6b8 = 0;
    return temp_v0;
  }
  temp_v1 = FUN_00163fd4(8);
  if (temp_v1 == 0) {
    DAT_0057f6b8 = 0;
    return temp_v0;
  }
  if (DAT_0057f6b8 < 0xc) {
    FUN_00317af8(&temp_v15,temp_v16,0);
    FUN_0050d8e4();
    temp_v15 = temp_v15 * 57.295776f;
    temp_v9 = -1.0f;
    if (temp_v15 < 0.0f) {
      temp_v15 = temp_v15 + 360.0f;
    }
    if ((temp_v0 & 2) != 0) {
      temp_v6 = afStack_64[DAT_0057f6b8 + 1];
      temp_v7 = afStack_64[DAT_0057f6b8];
    }
    else {
      temp_v6 = temp_v10[DAT_0057f6b8 + 6];
      temp_v7 = temp_v10[DAT_0057f6b8 + 5];
    }
    temp_v1 = 0;
    temp_v5 = temp_v9;
    if (DAT_0057f6b8 >= 1) {
      do {
        temp_v8 = temp_v10[temp_v1] - 10.0f;
        temp_v3 = temp_v8 == temp_v15;
        temp_v4 = temp_v15 <= temp_v8;
        if (!temp_v4 || temp_v3) {
          temp_v8 = temp_v10[temp_v1] + 10.0f;
          temp_v3 = temp_v15 == temp_v8;
          temp_v4 = temp_v8 <= temp_v15;
        }
        if (!temp_v4 || temp_v3) {
          temp_v5 = temp_v10[temp_v1];
          if (temp_v10[temp_v1] == temp_v7) {
            temp_v5 = temp_v9;
          }
          break;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
    }
    else {
      do {
        if ((temp_v10[temp_v1] - 10.0f <= temp_v15) && (temp_v15 <= temp_v10[temp_v1] + 10.0f)) {
          temp_v5 = temp_v10[temp_v1];
          break;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
    }
    if (temp_v5 < 0.0f) {
      return temp_v0;
    }
    if (temp_v6 != temp_v5) {
      DAT_0057f6b8 = 0;
      return temp_v0;
    }
    DAT_0057f6b8 = DAT_0057f6b8 + 1;
    return temp_v0;
  }
  if (DAT_0057f6b8 == 0xc) {
    temp_v1 = padButtonIsPressed(10);
    if (temp_v1 == 0) {
      temp_v1 = padButtonRepeat(2);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = 0;
        return temp_v0;
      }
      temp_v1 = padButtonRepeat(1);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = 0;
        return temp_v0;
      }
      temp_v1 = padButtonRepeat(9);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = 0;
        return temp_v0;
      }
      temp_v1 = padButtonRepeat(10);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = 0;
        return temp_v0;
      }
      temp_v1 = padButtonRepeat(0);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = 0;
        return temp_v0;
      }
    }
    else {
      DAT_0057f6b8 = DAT_0057f6b8 + 1;
    }
  }
  else if (DAT_0057f6b8 != 0xd) {
    if (DAT_0057f6b8 == 0xe) {
      temp_v1 = padButtonIsPressed(6);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = DAT_0057f6b8 + 1;
      }
      else {
        temp_v1 = padButtonRepeat(2);
        if (temp_v1 != 0) {
          DAT_0057f6b8 = 0;
          return temp_v0;
        }
        temp_v1 = padButtonRepeat(1);
        if (temp_v1 != 0) {
          DAT_0057f6b8 = 0;
          return temp_v0;
        }
        temp_v1 = padButtonRepeat(9);
        if (temp_v1 != 0) {
          DAT_0057f6b8 = 0;
          return temp_v0;
        }
        temp_v1 = padButtonRepeat(10);
        if (temp_v1 != 0) {
          DAT_0057f6b8 = 0;
          return temp_v0;
        }
        temp_v1 = padButtonRepeat(0);
        if (temp_v1 != 0) {
          DAT_0057f6b8 = 0;
          return temp_v0;
        }
      }
    }
  }
  else {
    temp_v1 = padButtonIsPressed(5);
    if (temp_v1 == 0) {
      temp_v1 = padButtonRepeat(2);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = 0;
        return temp_v0;
      }
      temp_v1 = padButtonRepeat(1);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = 0;
        return temp_v0;
      }
      temp_v1 = padButtonRepeat(9);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = 0;
        return temp_v0;
      }
      temp_v1 = padButtonRepeat(10);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = 0;
        return temp_v0;
      }
      temp_v1 = padButtonRepeat(0);
      if (temp_v1 != 0) {
        DAT_0057f6b8 = 0;
        return temp_v0;
      }
    }
    else {
      DAT_0057f6b8 = DAT_0057f6b8 + 1;
    }
  }
  if (DAT_0057f6b8 == 0xf) {
    temp_v2 = *(unsigned char *)(DAT_0057f69c + 0x27e97);
    if ((temp_v0 & 2) == 0) {
      temp_v2 = temp_v2 | 2;
    }
    else {
      temp_v2 = temp_v2 & 0xfd;
    }
    *(unsigned char *)(DAT_0057f69c + 0x27e97) = temp_v2;
    sysPlayVoice(0x1000211);
    DAT_0057f6b8 = 0;
    return temp_v0;
  }
  return temp_v0;
}

} /* extern "C" */
