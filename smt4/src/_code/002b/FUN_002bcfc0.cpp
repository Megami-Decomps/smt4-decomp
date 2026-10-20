/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcfc0` (_code @ 0x2bcfc0, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

extern unsigned char DAT_004e0d88; /* 0x4e0d88 */


unsigned char * FUN_002bcfc0(int param_1,unsigned char *param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = 0;
  if (param_2 == (unsigned char *)0x0) {
    param_2 = &DAT_004e0d88;
  }
  temp_v2 = 0;
  do {
    temp_v0 = *(unsigned char *)(param_1 + temp_v2);
    temp_v5 = (unsigned int)temp_v0;
    temp_v3 = temp_v2 + 1;
    if (temp_v5 == 0) {
      param_2[temp_v1] = 0;
      param_2[temp_v1 + 1] = 0;
      return &DAT_004e0d88;
    }
    if ((temp_v0 & 0x80) != 0) {
      param_2[temp_v1] = temp_v0;
      temp_v4 = *(unsigned char *)(param_1 + temp_v3);
      temp_v3 = temp_v2 + 2;
      param_2[temp_v1 + 1] = temp_v4;
    }
    else {
      if (temp_v5 != 10) {
        param_2[temp_v1] = *(unsigned char *)(temp_v5 * 2 + 0x4095f8);
        temp_v4 = *(unsigned char *)(temp_v5 * 2 + 0x4095f9);
        param_2[temp_v1 + 1] = temp_v4;
        temp_v1 = temp_v1 + 2;
        temp_v2 = temp_v3;
        continue;
      }
      param_2[temp_v1] = 0xf8;
      param_2[temp_v1 + 1] = 1;
    }
    temp_v1 = temp_v1 + 2;
    temp_v2 = temp_v3;
  } while( 1 );
}

} /* extern "C" */
