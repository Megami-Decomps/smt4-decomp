/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5fb8` (_code @ 0x4f5fb8, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_001568f8(int, int);
int FUN_003fd76c(unsigned int, float *);
int FUN_003fd7b4(unsigned int);
int FUN_003fe86c(unsigned int, int, int);
int FUN_003fe9b4(unsigned int, unsigned char [24]);
int FUN_004019c0(int, unsigned char [24]);
int FUN_00401b50(int, float *);
int FUN_0040ace8(unsigned int, unsigned int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001568f8. */
extern int FUN_003ef9e0(unsigned int, int);
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_003fe9b4. */
/* Supplied declaration required: FUN_004019c0. */
/* Supplied declaration required: FUN_00401b50. */
/* Supplied declaration required: FUN_0040ace8. */


void FUN_004f5fb8(int param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned char temp_v10 [24];
  
  temp_v6 = param_1 + param_2 * 0x10;
  if (*(int *)(temp_v6 + 0x960) != 0) {
    temp_v4 = *(unsigned int *)(*(int *)(temp_v6 + 0x960) + 4);
    FUN_003fd7b4(temp_v4);
    FUN_003fe86c(temp_v4,0,2);
    FUN_0040ace8(g_handleRegistry,temp_v4);
    temp_v0 = btlGetMainState();
    temp_v3 = *(int *)(temp_v0 + 0x1ed4) + param_2 * 0x1d0;
    temp_v4 = btlGetMainState();
    temp_v0 = FUN_003ef9e0(temp_v4,temp_v3);
    if (temp_v0 < 0) {
      temp_v0 = 0;
    }
    temp_v5 = 0;
    temp_v1 = btlGetMainState();
    FUN_001568f8(temp_v1,(int)*(short *)(temp_v3 + 0x6a));
    temp_v2 = 0;
    do {
      if (*(int *)(param_1 + temp_v2 * 0x3c + 0x1398) == *(int *)(temp_v1 + temp_v0 * 4 + 0xc)) {
        temp_v5 = param_1 + temp_v2 * 0x3c + 0x1398;
        break;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x32);
    FUN_004019c0(temp_v5 + 8,temp_v10);
    FUN_003fe9b4(*(unsigned int *)(*(int *)(temp_v6 + 0x960) + 4),temp_v10);
    FUN_00401b50(temp_v5 + 8,&temp_v7);
    temp_v7 = temp_v7 + *(float *)(temp_v3 + 0xc);
    temp_v8 = temp_v8 + *(float *)(temp_v3 + 0x10);
    temp_v9 = temp_v9 + *(float *)(temp_v3 + 0x14);
    FUN_003fd76c(*(unsigned int *)(*(int *)(temp_v6 + 0x960) + 4),&temp_v7);
  }
  return;
}

} /* extern "C" */
