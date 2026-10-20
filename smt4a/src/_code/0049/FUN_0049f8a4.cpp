/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049f8a4` (_code @ 0x49f8a4, 0x30c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00408184(int);
int FUN_004186e0(void);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001801a4(void);
extern int FUN_0018416c(unsigned short);
extern int gameGetOptions(void);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
extern int FUN_001b34b8(void);
extern int FUN_001bd118(void);
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_004186e0. */


void FUN_0049f8a4(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_d8, in_fpscr; 3 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  short temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  unsigned long long in_d8;
  int temp_v12;
  
  if (param_2 < 1) {
    return;
  }
  if ((((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
      (temp_v2 = FUN_001801a4(), (*(unsigned short *)(temp_v2 + 0x5e) & 2) == 0)) &&
     (temp_v2 = FUN_001801a4(), (*(unsigned short *)(temp_v2 + 0x5e) & 0x400) == 0)) {
    temp_v2 = FUN_001801a4();
    temp_v0 = *(short *)(temp_v2 + 0x1c);
    temp_v2 = FUN_001801a4();
    temp_v1 = *(short *)(temp_v2 + 0x2a);
    temp_v2 = (temp_v0 * param_2) / 100;
    if (temp_v2 < 1) {
      temp_v2 = 1;
    }
    temp_v2 = temp_v1 - temp_v2;
    if (temp_v2 < 1) {
      temp_v2 = 1;
    }
    temp_v0 = (short)temp_v2;
    temp_v3 = FUN_001801a4();
    temp_v7 = *(short *)(temp_v3 + 0x1c);
    if ((temp_v0 <= *(short *)(temp_v3 + 0x1c)) && (temp_v7 = temp_v0, temp_v0 < 1)) {
      temp_v7 = 1;
    }
    *(short *)(temp_v3 + 0x2a) = temp_v7;
    if (0 < temp_v1 - temp_v2) {
      FUN_00408184(0x17);
    }
  }
  if (param_1 >= 2) {
    if (param_1 == 2 || param_1 == 3) {
      temp_v2 = 3;
      temp_v3 = FUN_001ab888();
      temp_v3 = temp_v3 + 0x1ca0;
      goto LAB_0049f9a4;
    }
    if (param_1 != 4) {
      return;
    }
  }
  else {
    temp_v2 = FUN_001b347c();
    temp_v3 = FUN_001ab888();
    temp_v3 = temp_v3 + 0x1c88;
LAB_0049f9a4:
    if (0 < temp_v2) {
      in_d8 = 0x3fa00000;
    }
    temp_v8 = 0;
    if (temp_v8 < temp_v2) {
      do {
        if ((-1 < *(char *)(temp_v3 + temp_v8)) &&
           (temp_v6 = FUN_001ab854(),
           (*(unsigned short *)(temp_v6 + 0x60) & 2) == 0 && (*(unsigned short *)(temp_v6 + 0x60) & 0x400) == 0)) {
          if (temp_v6 == 0) {
            temp_v9 = 0;
          }
          else {
            temp_v9 = (int)*(short *)(temp_v6 + 0xe);
            temp_v4 = FUN_0018416c(*(unsigned short *)(temp_v6 + 0x62));
            if (temp_v4 != 0) {
              temp_v11 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v9 = (int)(short)(int)(temp_v11 * (float)in_d8);
            }
          }
          temp_v0 = *(short *)(temp_v6 + 0x2a);
          temp_v9 = (temp_v9 * param_2) / 100;
          if (temp_v9 < 1) {
            temp_v9 = 1;
          }
          temp_v9 = temp_v0 - temp_v9;
          if (temp_v9 < 1) {
            temp_v9 = 1;
          }
          temp_v4 = (int)(short)temp_v9;
          if (temp_v6 != 0) {
            temp_v12 = (int)*(short *)(temp_v6 + 0xe);
            temp_v5 = FUN_0018416c(*(unsigned short *)(temp_v6 + 0x62));
            if (temp_v5 != 0) {
              temp_v11 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v12 = (int)(short)(int)(temp_v11 * (float)in_d8);
            }
            if ((temp_v4 <= temp_v12) && (temp_v12 = temp_v4, temp_v4 < 1)) {
              temp_v12 = 1;
            }
            *(short *)(temp_v6 + 0x2a) = (short)temp_v12;
          }
          if (0 < temp_v0 - temp_v9) {
            FUN_00408184(0x17);
          }
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < temp_v2);
    }
    if (param_1 != 3) {
      if (param_1 != 4) {
        return;
      }
    }
  }
  temp_v2 = FUN_001b34b8();
  if ((temp_v2 == 2) &&
     ((((temp_v2 = FUN_001b34b8(), temp_v2 == 0 || (temp_v2 == 1)) || (temp_v2 != 2)) ||
      ((temp_v2 = gameGetOptions(), (*(unsigned short *)(temp_v2 + 0x60) & 2) == 0 &&
       (*(short *)(temp_v2 + 0x2a) != 0)))))) {
    temp_v3 = gameGetOptions();
    temp_v8 = (int)*(short *)(temp_v3 + 0xe);
    temp_v2 = (temp_v8 * param_2) / 100;
    if (temp_v2 < 1) {
      temp_v2 = 1;
    }
    temp_v2 = *(short *)(temp_v3 + 0x2a) - temp_v2;
    FUN_004186e0();
    temp_v6 = FUN_001bd118();
    temp_v10 = temp_v2 == 0;
    if (temp_v2 < 1) {
      temp_v10 = temp_v6 != 4;
    }
    if (temp_v10) {
      temp_v2 = 1;
    }
    if (temp_v8 < temp_v2) {
      temp_v2 = temp_v8;
    }
    *(short *)(temp_v3 + 0x2a) = (short)temp_v2;
    if ((short)temp_v2 == 0) {
      *(unsigned short *)(temp_v3 + 0x60) = *(unsigned short *)(temp_v3 + 0x60) | 2;
    }
  }
  return;
}

} /* extern "C" */
