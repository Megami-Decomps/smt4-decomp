/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00420a2c` (_code @ 0x420a2c, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(...);

/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);


void FUN_00420a2c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  FUN_00163aa4();
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x18)) {
    do {
      if (*(int *)(param_1 + 0x620) < temp_v2) {
        *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
        break;
      }
      FUN_00163aa4(param_1 + temp_v2 * 0x8c + 0x500);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x18));
  }
  temp_v0 = FUN_001654d8(param_1 + 0x474);
  temp_v1 = FUN_001654e4(param_1 + 0x474);
  *(unsigned int *)(param_1 + 0x624) = temp_v0;
  *(unsigned int *)(param_1 + 0x628) = temp_v1;
  *(unsigned int *)(param_1 + 0x62c) = *(unsigned int *)(param_1 + 0x494);
  temp_v2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      temp_v3 = param_1 + temp_v2 * 0x8c;
      temp_v0 = FUN_001654d8(temp_v3 + 0x500);
      temp_v1 = FUN_001654e4(temp_v3 + 0x500);
      temp_v4 = *(unsigned int *)(temp_v3 + 0x520);
      temp_v3 = temp_v2 + 1;
      temp_v2 = param_1 + temp_v2 * 0x44;
      *(unsigned int *)(temp_v2 + 0x664) = temp_v0;
      *(unsigned int *)(temp_v2 + 0x668) = temp_v1;
      *(unsigned int *)(temp_v2 + 0x66c) = temp_v4;
      temp_v2 = temp_v3;
    } while (temp_v3 < *(int *)(param_1 + 0x18));
  }
  temp_v0 = FUN_001654d8(param_1 + 0x500);
  temp_v1 = FUN_001654e4(param_1 + 0x500);
  *(unsigned int *)(param_1 + 0x710) = temp_v0;
  *(unsigned int *)(param_1 + 0x714) = temp_v1;
  *(unsigned int *)(param_1 + 0x718) = *(unsigned int *)(param_1 + 0x520);
  return;
}

} /* extern "C" */
