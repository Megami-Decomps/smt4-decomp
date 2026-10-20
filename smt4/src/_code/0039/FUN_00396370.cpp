/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00396370` (_code @ 0x396370, 0x260 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025930c(int, unsigned int);
int FUN_0027d8b4(unsigned int);
int FUN_00291e40(int);
int FUN_002be624(unsigned char *, unsigned char *, unsigned int, unsigned int);
int SBORROW4(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_003965e4; /* 0x3965e4 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned char DAT_0049fa61; /* 0x49fa61 */
extern unsigned int DAT_0049fa64; /* 0x49fa64 */
extern unsigned char DAT_0049fa68; /* 0x49fa68 */
extern unsigned char DAT_0049fab5; /* 0x49fab5 */
extern int DAT_0049fad4; /* 0x49fad4 */
extern unsigned int DAT_0049fad8; /* 0x49fad8 */
extern int DAT_0049fc88; /* 0x49fc88 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0025930c. */
/* Supplied declaration required: FUN_0027d8b4. */
/* Supplied declaration required: FUN_00291e40. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002c2950(void);


unsigned int FUN_00396370(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  float temp_v8;
  int temp_v9;
  float temp_v10;
  float temp_v11;
  
  temp_v6 = 0xffffffff;
  temp_v0 = FUN_002c2950();
  temp_v1 = FUN_002b63ac();
  temp_v5 = 999999;
  temp_v3 = 0;
  do {
    temp_v4 = param_1 + temp_v3 * 4;
    temp_v2 = *(int *)(temp_v4 + 0x18);
    if (((temp_v2 != 0) && ((*(unsigned char *)(temp_v2 + 8) & 1) != 0)) && ((*(unsigned char *)(temp_v2 + 8) & 4) == 0)) {
      temp_v10 = *(float *)(temp_v2 + 0x28) - *(float *)(DAT_00447e88 + 0x1c);
      temp_v11 = *(float *)(temp_v2 + 0x2c) - *(float *)(DAT_00447e88 + 0x20);
      temp_v8 = *(float *)(temp_v2 + 0x30) - *(float *)(DAT_00447e88 + 0x24);
      temp_v9 = (int)romwright_sqrt_4(temp_v10 * temp_v10 + temp_v11 * temp_v11 + temp_v8 * temp_v8);
      temp_v7 = SBORROW4(temp_v9,0x96);
      temp_v2 = temp_v9 - 0x96;
      if (temp_v9 < 0x96) {
        temp_v7 = SBORROW4(temp_v9,temp_v5);
        temp_v2 = temp_v9 - temp_v5;
      }
      if (temp_v2 < 0 != temp_v7) {
        DAT_0049fab5 = 0;
        temp_v5 = *(int *)(temp_v4 + 0x18);
        if (*(int *)(temp_v5 + 4) != 0) {
          if (*(int *)(temp_v5 + 4) == 1) {
            DAT_0049fad4 = 0;
            DAT_0049fad8 = 0;
            temp_v5 = *(int *)(temp_v4 + 0x18);
            if (*(char *)(temp_v5 + 0x74) != '\0') {
              if ((DAT_0049fc88 != 0) && (0 < *(int *)(temp_v5 + 0x78))) {
                *(short *)(temp_v0 + 0x22) = (short)*(int *)(temp_v5 + 0x78);
              }
              if (0 < *(int *)(temp_v5 + 0x88)) {
                if (*(int *)(temp_v5 + 0x84) != 0) {
                  DAT_0049fa61 = 1;
                  DAT_0049fa64 = *(unsigned int *)(temp_v5 + 0x88);
                  FUN_002be624(&DAT_0049fa68,&LAB_003965e4,*(unsigned int *)(temp_v5 + 0x88),
                               *(unsigned int *)(temp_v5 + 0x8c));
                }
                else {
                  FUN_0025930c(*(int *)(temp_v5 + 0x88),*(unsigned int *)(temp_v5 + 0x8c));
                }
              }
              FUN_0027d8b4(*(unsigned int *)(temp_v5 + 0x1c));
              temp_v6 = *(unsigned int *)(temp_v5 + 0x1c);
              if (0 < *(int *)(temp_v5 + 0x7c)) {
                DAT_0049fad8 = *(unsigned int *)(temp_v5 + 0x80);
                DAT_0049fad4 = *(int *)(temp_v5 + 0x7c);
              }
            }
          }
        }
        else {
          temp_v6 = *(unsigned int *)(temp_v5 + 0x1c);
          if ((*(int *)(temp_v0 + 0xdc0) != 0) &&
             (*(int *)(temp_v5 + 100) < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x76))) {
            DAT_0049fab5 = 1;
            FUN_00291e40(0x1000187);
          }
        }
        piVar4 = *(int **)(temp_v4 + 0x18);
        temp_v5 = temp_v9;
        if (piVar4 != (int *)0x0) {
          temp_v2 = piVar4[1];
          (**(romwright_code **)(*piVar4 + 4))();
          *(unsigned int *)(temp_v4 + 0x18) = 0;
          if (temp_v2 == 0) {
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - 1;
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - 1;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x20);
  return temp_v6;
}

} /* extern "C" */
