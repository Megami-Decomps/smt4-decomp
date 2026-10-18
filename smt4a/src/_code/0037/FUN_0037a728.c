/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a728` (_code @ 0x37a728, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;


void FUN_0037a728(int param_1,int param_2,int param_3)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = 0;
  temp_v4 = 0;
  do {
    temp_v0 = *(unsigned char *)(param_1 + temp_v4);
    temp_v3 = (unsigned int)temp_v0;
    temp_v5 = temp_v4 + 1;
    if (temp_v3 == 0) {
      *(unsigned char *)(param_2 + temp_v1) = 0;
      *(unsigned char *)(param_2 + temp_v1 + 1) = 0;
      return;
    }
    if ((temp_v0 & 0x80) != 0) {
      *(unsigned char *)(param_2 + temp_v1) = temp_v0;
      temp_v2 = *(unsigned char *)(param_1 + temp_v5);
      temp_v5 = temp_v4 + 2;
      *(unsigned char *)(param_2 + temp_v1 + 1) = temp_v2;
    }
    else if (temp_v3 != 10) {
      *(unsigned char *)(param_2 + temp_v1) = *(unsigned char *)(temp_v3 * 2 + 0x53d2e8);
      temp_v2 = *(unsigned char *)(temp_v3 * 2 + 0x53d2e9);
      *(unsigned char *)(param_2 + temp_v1 + 1) = temp_v2;
    }
    else {
      *(unsigned char *)(param_2 + temp_v1) = 0xf8;
      *(unsigned char *)(param_2 + temp_v1 + 1) = 1;
    }
    temp_v1 = temp_v1 + 2;
    temp_v4 = temp_v5;
    if (param_3 <= temp_v1) {
      *(unsigned char *)((param_2 + param_3) - 2) = 0;
      *(unsigned char *)((param_2 + param_3) - 1) = 0;
      return;
    }
  } while( 1 );
}
