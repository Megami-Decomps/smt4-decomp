/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290a68` (_code @ 0x290a68, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_00290c10; /* 0x290c10 */
extern unsigned char LAB_00290c14; /* 0x290c14 */
extern unsigned char LAB_00290c18; /* 0x290c18 */
extern unsigned char LAB_00290c1c; /* 0x290c1c */
extern unsigned char LAB_00290c20; /* 0x290c20 */
extern unsigned char LAB_00290c24; /* 0x290c24 */
extern unsigned char LAB_00290c28; /* 0x290c28 */
extern unsigned char LAB_00290c2c; /* 0x290c2c */
extern unsigned char LAB_00290c30; /* 0x290c30 */
extern unsigned char LAB_00290c34; /* 0x290c34 */

/* Supplied declaration required: FUN_002be7f4. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002c615c(int, int);


void FUN_00290a68(int param_1,int param_2)

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
        temp_v0 = FUN_002c615c(temp_v3,unaff_r4);
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
                            FUN_002be7fc(temp_v1,&LAB_00290c34);
                            temp_v2 = temp_v2 + temp_v1;
                          }
                        }
                        else {
                          temp_v1 = param_1 + temp_v2;
                          FUN_002be7fc(temp_v1,&LAB_00290c30);
                          temp_v2 = temp_v2 + temp_v1;
                        }
                      }
                      else {
                        temp_v1 = param_1 + temp_v2;
                        FUN_002be7fc(temp_v1,&LAB_00290c2c);
                        temp_v2 = temp_v2 + temp_v1;
                      }
                    }
                    else {
                      temp_v1 = param_1 + temp_v2;
                      FUN_002be7fc(temp_v1,&LAB_00290c28);
                      temp_v2 = temp_v2 + temp_v1;
                    }
                  }
                  else {
                    temp_v1 = param_1 + temp_v2;
                    FUN_002be7fc(temp_v1,&LAB_00290c24);
                    temp_v2 = temp_v2 + temp_v1;
                  }
                }
                else {
                  temp_v1 = param_1 + temp_v2;
                  FUN_002be7fc(temp_v1,&LAB_00290c20);
                  temp_v2 = temp_v2 + temp_v1;
                }
              }
              else {
                temp_v1 = param_1 + temp_v2;
                FUN_002be7fc(temp_v1,&LAB_00290c1c);
                temp_v2 = temp_v2 + temp_v1;
              }
            }
            else {
              temp_v1 = param_1 + temp_v2;
              FUN_002be7fc(temp_v1,&LAB_00290c18);
              temp_v2 = temp_v2 + temp_v1;
            }
          }
          else {
            temp_v1 = param_1 + temp_v2;
            FUN_002be7fc(temp_v1,&LAB_00290c14);
            temp_v2 = temp_v2 + temp_v1;
          }
        }
        else {
          temp_v1 = param_1 + temp_v2;
          FUN_002be7fc(temp_v1,&LAB_00290c10);
          temp_v2 = temp_v2 + temp_v1;
        }
        temp_v3 = temp_v3 - unaff_r4 * temp_v0;
      }
      temp_v0 = (int)((unsigned long long)((long long)unaff_r10 * (long long)unaff_r4) >> 0x20);
      unaff_r4 = (temp_v0 >> 2) - (temp_v0 >> 0x1f);
    } while (0 < unaff_r4);
    return;
  }
  FUN_002be7f4(param_1,&LAB_00290c10);
  return;
}
