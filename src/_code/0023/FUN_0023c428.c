/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c428` (_code @ 0x23c428, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_0023aa3c. */
/* Supplied declaration required: FUN_0023ac2c. */
/* Supplied declaration required: FUN_0023adf4. */
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_0027dab0(unsigned int, int);
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_002a0428. */


void FUN_0023c428(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned char temp_v10 [16];
  
  temp_v6 = param_1 + param_2 * 0x10;
  temp_v0 = *(int *)(temp_v6 + 0x960);
  if (temp_v0 != 0) {
    if (*(int *)(*(int *)(temp_v0 + 8) + 0xc) < 0) {
      FUN_002a0428(temp_v0,1);
    }
    temp_v0 = FUN_002939f4();
    temp_v4 = *(int *)(temp_v0 + 0x1e98) + param_2 * 0x114;
    temp_v1 = FUN_002939f4();
    temp_v0 = FUN_0027dab0(temp_v1,temp_v4);
    if (temp_v0 < 0) {
      temp_v0 = 0;
    }
    temp_v5 = 0;
    temp_v2 = FUN_002939f4();
    FUN_0027da30(temp_v2,(int)*(short *)(temp_v4 + 0x62));
    temp_v3 = 0;
    do {
      if (*(int *)(param_1 + temp_v3 * 0x30 + 0x1398) == *(int *)(temp_v2 + temp_v0 * 4 + 0xc)) {
        temp_v5 = param_1 + temp_v3 * 0x30 + 0x1398;
        break;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x32);
    FUN_0023aa3c(temp_v5 + 8,temp_v10);
    FUN_0023adf4(*(unsigned int *)(*(int *)(temp_v6 + 0x960) + 8),0,temp_v10);
    FUN_0023ac2c(temp_v5 + 8,&temp_v7);
    temp_v7 = temp_v7 + *(float *)(temp_v4 + 0xc);
    temp_v8 = temp_v8 + *(float *)(temp_v4 + 0x10);
    temp_v9 = temp_v9 + *(float *)(temp_v4 + 0x14);
    FUN_0028c640(*(unsigned int *)(*(int *)(temp_v6 + 0x960) + 8),0,&temp_v7);
  }
  return;
}
