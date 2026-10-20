/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a0bac` (_code @ 0x4a0bac, 0x288 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_001801a4(void);
extern int FUN_0018416c(unsigned short);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);


void FUN_004a0bac(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  unsigned long long temp_v8;
  
  if (((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
     (((param_2 != 0 || (temp_v1 = FUN_001801a4(), (*(unsigned short *)(temp_v1 + 0x5e) & 2) == 0)) &&
      (temp_v1 = FUN_001801a4(), (*(unsigned short *)(temp_v1 + 0x5e) & 0x400) == 0)))) {
    temp_v1 = FUN_001801a4();
    *(unsigned short *)(temp_v1 + 0x5e) = 0;
    temp_v2 = FUN_001801a4();
    *(unsigned short *)(temp_v2 + 0x2a) = *(unsigned short *)(temp_v2 + 0x1c);
    *(unsigned short *)(temp_v2 + 0x2c) = *(unsigned short *)(temp_v2 + 0x1e);
    *(unsigned short *)(temp_v1 + 0x2a) = *(unsigned short *)(temp_v1 + 0x1c);
    *(unsigned short *)(temp_v1 + 0x2c) = *(unsigned short *)(temp_v1 + 0x1e);
  }
  temp_v8 = 0x3fa00000;
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) goto LAB_004a0d7c;
    temp_v1 = 3;
    temp_v2 = FUN_001ab888();
    temp_v2 = temp_v2 + 0x1ca0;
  }
  else {
    temp_v1 = FUN_001b347c();
    temp_v2 = FUN_001ab888();
    temp_v2 = temp_v2 + 0x1c88;
  }
  temp_v5 = 0;
  if (temp_v5 < temp_v1) {
    do {
      if (((-1 < *(char *)(temp_v2 + temp_v5)) &&
          ((temp_v3 = FUN_001ab854(), param_2 != 0 || ((*(unsigned short *)(temp_v3 + 0x60) & 2) == 0)))) &&
         ((*(unsigned short *)(temp_v3 + 0x60) & 0x400) == 0)) {
        if ((*(unsigned short *)(temp_v3 + 0x60) & 4) != 0) {
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v3 + 0x60) = 0;
            temp_v0 = *(short *)(temp_v3 + 0xe);
            temp_v4 = FUN_0018416c(*(unsigned short *)(temp_v3 + 0x62));
            if (temp_v4 != 0) {
              temp_v7 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v0 = (short)(int)(temp_v7 * (float)temp_v8);
            }
            *(short *)(temp_v3 + 0x2a) = temp_v0;
            *(unsigned short *)(temp_v3 + 0x2c) = *(unsigned short *)(temp_v3 + 0x10);
          }
          *(unsigned short *)(temp_v3 + 0x60) = *(unsigned short *)(temp_v3 + 0x60) | 4;
        }
        else if (temp_v3 != 0) {
          *(unsigned short *)(temp_v3 + 0x60) = 0;
          temp_v0 = *(short *)(temp_v3 + 0xe);
          temp_v4 = FUN_0018416c(*(unsigned short *)(temp_v3 + 0x62));
          if (temp_v4 != 0) {
            temp_v7 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v0 = (short)(int)(temp_v7 * (float)temp_v8);
          }
          *(short *)(temp_v3 + 0x2a) = temp_v0;
          *(unsigned short *)(temp_v3 + 0x2c) = *(unsigned short *)(temp_v3 + 0x10);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v1);
  }
LAB_004a0d7c:
  if (param_1 == 0) {
    temp_v6 = 0;
    do {
      if ((temp_v6 & 0xffff) >= 0xc) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = FUN_001ab888();
        temp_v1 = temp_v1 + (temp_v6 & 0xffff) * 0x134 + 0x1ddc;
      }
      if (((param_2 != 0) || ((*(unsigned short *)(temp_v1 + 0x60) & 2) == 0)) &&
         (((*(unsigned short *)(temp_v1 + 0x60) & 0x400) == 0 && (temp_v1 != 0)))) {
        *(unsigned short *)(temp_v1 + 0x60) = 0;
        temp_v0 = *(short *)(temp_v1 + 0xe);
        temp_v2 = FUN_0018416c(*(unsigned short *)(temp_v1 + 0x62));
        if (temp_v2 != 0) {
          temp_v7 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v0 = (short)(int)(temp_v7 * (float)temp_v8);
        }
        *(short *)(temp_v1 + 0x2a) = temp_v0;
        *(unsigned short *)(temp_v1 + 0x2c) = *(unsigned short *)(temp_v1 + 0x10);
      }
      temp_v6 = temp_v6 + 1;
    } while ((int)temp_v6 < 0xc);
  }
  return;
}

} /* extern "C" */
