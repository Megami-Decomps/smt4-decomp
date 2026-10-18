/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00407eb0` (_code @ 0x407eb0, 0x208 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_00407598. */


void FUN_00407eb0(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v4 = param_1 + param_2 * 0xc;
  if (param_3 != 0) {
    temp_v0 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x594) + 0x34) + 0x48) + param_2 * 4);
    temp_v1 = *(unsigned int *)(temp_v0 + 0x24);
    temp_v2 = *(unsigned int *)(temp_v0 + 0x1c);
    temp_v3 = *(unsigned int *)(temp_v0 + 0x20);
    puVar2 = *(unsigned int **)(temp_v0 + 0x30);
    *(unsigned int *)(param_1 + 0x5d4) = temp_v1;
    *(unsigned int *)(param_1 + 0x5cc) = temp_v2;
    *(unsigned int *)(param_1 + 0x5d0) = temp_v3;
    temp_v5 = *puVar2;
    temp_v6 = puVar2[1];
    temp_v7 = puVar2[2];
    *(unsigned int *)(param_1 + 0x5d8) = temp_v5;
    *(unsigned int *)(param_1 + 0x5dc) = temp_v6;
    *(unsigned int *)(param_1 + 0x5e0) = temp_v7;
    *(unsigned int *)(param_1 + 0x5bc) = temp_v1;
    *(unsigned int *)(param_1 + 0x5b4) = temp_v2;
    *(unsigned int *)(param_1 + 0x5b8) = temp_v3;
    *(unsigned int *)(param_1 + 0x5c0) = temp_v5;
    *(unsigned int *)(param_1 + 0x5c4) = temp_v6;
    *(unsigned int *)(param_1 + 0x5c8) = temp_v7;
    FUN_00407598(param_1);
    if (*(char *)(param_1 + 0x15) != '\0') {
      temp_v1 = *(unsigned int *)(temp_v4 + 0x620);
      temp_v2 = *(unsigned int *)(temp_v4 + 0x624);
      temp_v3 = *(unsigned int *)(temp_v4 + 0x628);
      *(unsigned int *)(param_1 + 0x614) = temp_v1;
      *(unsigned int *)(param_1 + 0x618) = temp_v2;
      *(unsigned int *)(param_1 + 0x61c) = temp_v3;
      *(unsigned int *)(param_1 + 0x608) = temp_v1;
      *(unsigned int *)(param_1 + 0x60c) = temp_v2;
      *(unsigned int *)(param_1 + 0x610) = temp_v3;
      FUN_003fd76c(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 4),param_1 + 0x608);
      return;
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned char *)(param_1 + 0x14) = 1;
    if (param_2 != 0) {
      temp_v0 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x594) + 0x34) + 0x48) + param_2 * 4);
      puVar2 = *(unsigned int **)(temp_v0 + 0x30);
      temp_v1 = *(unsigned int *)(temp_v0 + 0x20);
      temp_v2 = *(unsigned int *)(temp_v0 + 0x24);
      *(unsigned int *)(param_1 + 0x5cc) = *(unsigned int *)(temp_v0 + 0x1c);
      *(unsigned int *)(param_1 + 0x5d0) = temp_v1;
      *(unsigned int *)(param_1 + 0x5d4) = temp_v2;
      temp_v1 = *puVar2;
      temp_v2 = puVar2[1];
      *(unsigned int *)(param_1 + 0x5e0) = puVar2[2];
      *(unsigned int *)(param_1 + 0x5d8) = temp_v1;
      *(unsigned int *)(param_1 + 0x5dc) = temp_v2;
    }
    else {
      *(unsigned int *)(param_1 + 0x5cc) = *(unsigned int *)(param_1 + 0x5e4);
      *(unsigned int *)(param_1 + 0x5d0) = *(unsigned int *)(param_1 + 0x5e8);
      *(unsigned int *)(param_1 + 0x5d4) = *(unsigned int *)(param_1 + 0x5ec);
      *(unsigned int *)(param_1 + 0x5d8) = *(unsigned int *)(param_1 + 0x5f0);
      *(unsigned int *)(param_1 + 0x5dc) = *(unsigned int *)(param_1 + 0x5f4);
      *(unsigned int *)(param_1 + 0x5e0) = *(unsigned int *)(param_1 + 0x5f8);
    }
    *(float *)(param_1 + 0x59c) = (*(float *)(param_1 + 0x5cc) - *(float *)(param_1 + 0x5b4)) * 0.1f;
    *(float *)(param_1 + 0x5a0) = (*(float *)(param_1 + 0x5d0) - *(float *)(param_1 + 0x5b8)) * 0.1f;
    *(float *)(param_1 + 0x5a4) = (*(float *)(param_1 + 0x5d4) - *(float *)(param_1 + 0x5bc)) * 0.1f;
    *(float *)(param_1 + 0x5a8) = (*(float *)(param_1 + 0x5d8) - *(float *)(param_1 + 0x5c0)) * 0.1f;
    *(float *)(param_1 + 0x5ac) = (*(float *)(param_1 + 0x5dc) - *(float *)(param_1 + 0x5c4)) * 0.1f;
    *(float *)(param_1 + 0x5b0) = (*(float *)(param_1 + 0x5e0) - *(float *)(param_1 + 0x5c8)) * 0.1f;
    if (*(char *)(param_1 + 0x15) != '\0') {
      temp_v1 = *(unsigned int *)(temp_v4 + 0x624);
      temp_v2 = *(unsigned int *)(temp_v4 + 0x628);
      *(unsigned int *)(param_1 + 0x614) = *(unsigned int *)(temp_v4 + 0x620);
      *(unsigned int *)(param_1 + 0x618) = temp_v1;
      *(unsigned int *)(param_1 + 0x61c) = temp_v2;
      *(float *)(param_1 + 0x5fc) =
           (*(float *)(param_1 + 0x614) - *(float *)(param_1 + 0x608)) * 0.1f;
      *(float *)(param_1 + 0x600) =
           (*(float *)(param_1 + 0x618) - *(float *)(param_1 + 0x60c)) * 0.1f;
      *(float *)(param_1 + 0x604) =
           (*(float *)(param_1 + 0x61c) - *(float *)(param_1 + 0x610)) * 0.1f;
    }
  }
  return;
}
