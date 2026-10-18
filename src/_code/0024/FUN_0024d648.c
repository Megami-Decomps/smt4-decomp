/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024d648` (_code @ 0x24d648, 0x174 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int FUN_0027dc58(int, unsigned int);
/* Supplied declaration required: FUN_0027dca0. */
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002d8c60. */
/* Supplied declaration required: FUN_0033e2dc. */


void FUN_0024d648(int param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  
  temp_v5 = 2.0f;
  temp_v3 = *(int *)(param_1 + 0x1e98) + param_2 * 0x114;
  if (((*(unsigned int *)(temp_v3 + 0x50) & 0x10) == 0) || (param_3 != 0)) {
    temp_v0 = param_1;
    FUN_00282b94(param_1,(int)*(short *)(temp_v3 + 0x62));
    if (temp_v0 != 0) {
      temp_v4 = 0;
      do {
        temp_v2 = temp_v0 + temp_v4 * 2;
        if (*(short *)(temp_v3 + 0x62) == *(short *)(temp_v2 + 8)) {
LAB_0024d6c8:
          if (-1 < temp_v4) {
            temp_v3 = param_1;
            FUN_0027dca0(param_1,param_2);
            temp_v1 = FUN_0027dc58(param_1,*(unsigned int *)(temp_v3 + temp_v4 * 4 + 0xc));
            FUN_0033e2dc(temp_v1,&temp_v6);
            return;
          }
          break;
        }
        if (*(short *)(temp_v3 + 0x62) == *(short *)(temp_v2 + 10)) {
          temp_v4 = temp_v4 + 1;
          goto LAB_0024d6c8;
        }
        temp_v4 = temp_v4 + 2;
      } while (temp_v4 < 0x32);
    }
    temp_v4 = 0;
    temp_v3 = param_1;
    FUN_0027dca0(param_1,param_2);
    temp_v1 = FUN_0027dc58(param_1,*(unsigned int *)(temp_v3 + temp_v4 * 4 + 0xc));
    FUN_0033e2dc(temp_v1,&temp_v6);
  }
  else {
    puVar3 = *(unsigned int **)(param_1 + 0x1e88);
    FUN_002d8c60();
    temp_v6 = *puVar3;
    temp_v7 = puVar3[1];
    temp_v8 = (float)puVar3[2] + temp_v5;
    FUN_0027dca0(param_1,param_2);
    FUN_002b087c();
  }
  return;
}
