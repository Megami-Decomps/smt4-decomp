/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049fc88` (_code @ 0x49fc88, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001801a4(void);
int FUN_001fef70(unsigned short [11], int, int);
int FUN_003dfad4(unsigned short [11], unsigned int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_2: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp3A; /* 0x3a: local_3a */
    unsigned short sp50; /* 0x50: local_50 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern unsigned int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_001801a4. */
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
/* Supplied declaration required: FUN_001fef70. */
/* Supplied declaration required: FUN_003dfad4. */


void FUN_0049fc88(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  float in_s0;
  float temp_v9;
  unsigned long long temp_v10;
  unsigned short temp_v11 [11];
  unsigned short temp_v12;
  
  temp_v10 = (unsigned long long)(unsigned int)in_s0;
  temp_v8 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == 0.0f) << 0x1e) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  temp_v2 = (unsigned char)(temp_v8 >> 0x18);
  if (!(unsigned char)((temp_v2 >> 5) & 1) || (unsigned char)(temp_v2 >> 6)) {
    return;
  }
  temp_v0 = 1 << (param_2 & 0xff);
  if (((((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
       (temp_v3 = FUN_001801a4(), (*(unsigned short *)(temp_v3 + 0x5e) & 2) == 0)) &&
      (temp_v3 = FUN_001801a4(), (*(unsigned short *)(temp_v3 + 0x5e) & 0x400) == 0)) &&
     (temp_v3 = FUN_001801a4(), (*(unsigned short *)(temp_v3 + 0x5e) & temp_v0) == 0)) {
    temp_v4 = FUN_0014bef4(99);
    temp_v9 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v8 >> 0x16) & 3);
    temp_v8 = (temp_v8 & 0xfffffff) | ((unsigned int)((float)temp_v10 <= temp_v9) << 0x1d);
    if (!romwright_subpiece_4_1_0(temp_v8 >> 0x1d,0)) {
      if (param_2 != 5) {
        temp_v3 = FUN_001801a4();
        *(unsigned short *)(temp_v3 + 0x5e) = *(unsigned short *)(temp_v3 + 0x5e) | (unsigned short)temp_v0;
      }
      else {
        temp_v4 = FUN_001801a4();
        FUN_003dfad4(temp_v11,temp_v4);
        temp_v12 = temp_v12 >> 10;
        if (!((temp_v12 == 1 || temp_v12 == 3) || temp_v12 == 4)) {
          temp_v3 = FUN_001801a4();
          *(unsigned short *)(temp_v3 + 0x5e) = *(unsigned short *)(temp_v3 + 0x5e) | (unsigned short)temp_v0;
        }
      }
    }
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return;
    }
    temp_v7 = 3;
    temp_v3 = FUN_001ab888();
    temp_v3 = temp_v3 + 0x1ca0;
  }
  else {
    temp_v7 = FUN_001b347c();
    temp_v3 = FUN_001ab888();
    temp_v3 = temp_v3 + 0x1c88;
  }
  temp_v6 = 0;
  if (temp_v6 < temp_v7) {
    do {
      if (-1 < *(char *)(temp_v3 + temp_v6)) {
        temp_v5 = FUN_001ab854();
        temp_v1 = *(unsigned short *)(temp_v5 + 0x60);
        if (((temp_v1 & 2) == 0 && (temp_v1 & 0x400) == 0) && (temp_v1 & temp_v0) == 0) {
          temp_v4 = FUN_0014bef4(99);
          temp_v9 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v8 >> 0x16) & 3);
          temp_v8 = (temp_v8 & 0xfffffff) | ((unsigned int)((float)temp_v10 <= temp_v9) << 0x1d);
          if (!romwright_subpiece_4_1_0(temp_v8 >> 0x1d,0)) {
            if (param_2 != 5) {
              *(unsigned short *)(temp_v5 + 0x60) = *(unsigned short *)(temp_v5 + 0x60) | (unsigned short)temp_v0;
            }
            else {
              FUN_001fef70(temp_v11,temp_v5,0xb);
              temp_v1 = temp_v11[0] >> 10;
              if (!((temp_v1 == 1 || temp_v1 == 3) || temp_v1 == 4)) {
                *(unsigned short *)(temp_v5 + 0x60) = *(unsigned short *)(temp_v5 + 0x60) | (unsigned short)temp_v0;
              }
            }
          }
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v7);
  }
  return;
}

} /* extern "C" */
