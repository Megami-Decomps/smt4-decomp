/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0940` (_code @ 0x2c0940, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_002c0ae8; /* 0x2c0ae8 */
extern unsigned char LAB_002c0aec; /* 0x2c0aec */
extern unsigned char LAB_002c0af0; /* 0x2c0af0 */
extern unsigned char LAB_002c0af4; /* 0x2c0af4 */
extern unsigned char LAB_002c0af8; /* 0x2c0af8 */
extern unsigned char LAB_002c0afc; /* 0x2c0afc */
extern unsigned char LAB_002c0b00; /* 0x2c0b00 */
extern unsigned char LAB_002c0b04; /* 0x2c0b04 */
extern unsigned char LAB_002c0b08; /* 0x2c0b08 */
extern unsigned char LAB_002c0b0c; /* 0x2c0b0c */

/* Supplied declaration required: FUN_00100380. */
/* Supplied declaration required: FUN_00100388. */
extern int aeabi_idivmod(int, int);


void FUN_002c0940(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int unaff_r4;
  int temp_v2;
  int temp_v3;
  int unaff_r10;
  
  if (param_2 != 0) {
    unaff_r4 = 100000000;
    unaff_r10 = 0x66666667;
  }
  temp_v2 = 0;
  temp_v3 = param_2;
  if (param_2 != 0) {
    do {
      if (unaff_r4 <= param_2) {
        temp_v0 = aeabi_idivmod(temp_v3,unaff_r4);
        if (temp_v0 != 0) {
          if (temp_v0 != 1) {
            if (temp_v0 != 2) {
              if (temp_v0 != 3) {
                if (temp_v0 != 4) {
                  if (temp_v0 != 5) {
                    if (temp_v0 != 6) {
                      if (temp_v0 != 7) {
                        if (temp_v0 != 8) {
                          if (temp_v0 == 9) {
                            temp_v1 = param_1 + temp_v2;
                            FUN_00100388(temp_v1,&LAB_002c0b0c);
                            temp_v2 = temp_v2 + temp_v1;
                          }
                        }
                        else {
                          temp_v1 = param_1 + temp_v2;
                          FUN_00100388(temp_v1,&LAB_002c0b08);
                          temp_v2 = temp_v2 + temp_v1;
                        }
                      }
                      else {
                        temp_v1 = param_1 + temp_v2;
                        FUN_00100388(temp_v1,&LAB_002c0b04);
                        temp_v2 = temp_v2 + temp_v1;
                      }
                    }
                    else {
                      temp_v1 = param_1 + temp_v2;
                      FUN_00100388(temp_v1,&LAB_002c0b00);
                      temp_v2 = temp_v2 + temp_v1;
                    }
                  }
                  else {
                    temp_v1 = param_1 + temp_v2;
                    FUN_00100388(temp_v1,&LAB_002c0afc);
                    temp_v2 = temp_v2 + temp_v1;
                  }
                }
                else {
                  temp_v1 = param_1 + temp_v2;
                  FUN_00100388(temp_v1,&LAB_002c0af8);
                  temp_v2 = temp_v2 + temp_v1;
                }
              }
              else {
                temp_v1 = param_1 + temp_v2;
                FUN_00100388(temp_v1,&LAB_002c0af4);
                temp_v2 = temp_v2 + temp_v1;
              }
            }
            else {
              temp_v1 = param_1 + temp_v2;
              FUN_00100388(temp_v1,&LAB_002c0af0);
              temp_v2 = temp_v2 + temp_v1;
            }
          }
          else {
            temp_v1 = param_1 + temp_v2;
            FUN_00100388(temp_v1,&LAB_002c0aec);
            temp_v2 = temp_v2 + temp_v1;
          }
        }
        else {
          temp_v1 = param_1 + temp_v2;
          FUN_00100388(temp_v1,&LAB_002c0ae8);
          temp_v2 = temp_v2 + temp_v1;
        }
        temp_v3 = temp_v3 - unaff_r4 * temp_v0;
      }
      temp_v0 = (int)((unsigned long long)((long long)unaff_r10 * (long long)unaff_r4) >> 0x20);
      unaff_r4 = (temp_v0 >> 2) - (temp_v0 >> 0x1f);
    } while (0 < unaff_r4);
    return;
  }
  FUN_00100380(param_1,&LAB_002c0ae8);
  return;
}
