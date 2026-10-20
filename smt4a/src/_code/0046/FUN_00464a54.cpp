/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00464a54` (_code @ 0x464a54, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00463230(void);

/* Supplied declaration required: FUN_00463230. */


void FUN_00464a54(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_00463230();
  *(unsigned char *)(param_1 + 0x50) = 0;
  *(unsigned char *)(param_1 + 0x51) = 0;
  *(unsigned char *)(param_1 + 0x54) = 0;
  *(unsigned char *)(param_1 + 0x55) = 0;
  *(unsigned char *)(param_1 + 0x56) = 0;
  *(unsigned char *)(param_1 + 0x52) = 0;
  *(unsigned char *)(param_1 + 0x53) = 0;
  *(unsigned char *)(param_1 + 0x84) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x21c) = 0;
  *(unsigned int *)(param_1 + 0xfc) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x100) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x104) = 0;
  *(unsigned int *)(param_1 + 0x108) = 0;
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v0 = param_1 + temp_v1 * 0x24;
    *(unsigned char *)(temp_v0 + 0x2068) = 0;
    *(unsigned char *)(temp_v0 + 0x2074) = 0;
    *(unsigned char *)(temp_v0 + 0x2075) = 0x7f;
    *(unsigned char *)(temp_v0 + 0x2076) = 0x40;
    *(unsigned int *)(temp_v0 + 0x2080) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x2084) = 0;
    *(unsigned int *)(temp_v0 + 0x2088) = 0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 4);
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v0 = param_1 + temp_v1 * 0x3c8;
    *(unsigned int *)(temp_v0 + 0x228) = 0;
    *(unsigned int *)(temp_v0 + 0x22c) = 0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 8);
  return;
}

} /* extern "C" */
