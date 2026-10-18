/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e2f4` (_code @ 0x30e2f4, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;


void FUN_0030e2f4(int param_1,int param_2,int param_3)

{
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v4 = param_1 + 0x1458;
  temp_v5 = *(int *)(param_3 * 4 + param_1 + 0xb5c);
  while( 1 ) {
    temp_v2 = param_3 * 2;
    if (*(int *)(param_1 + 0x1450) < temp_v2) break;
    if (temp_v2 < *(int *)(param_1 + 0x1450)) {
      temp_v6 = param_3 * 8 + param_1;
      temp_v3 = *(int *)(temp_v6 + 0xb5c);
      temp_v6 = *(int *)(temp_v6 + 0xb60);
      temp_v0 = *(unsigned short *)(param_2 + temp_v6 * 4);
      temp_v1 = *(unsigned short *)(param_2 + temp_v3 * 4);
      if ((temp_v0 < temp_v1) ||
         ((temp_v0 == temp_v1 && (*(unsigned char *)(temp_v6 + temp_v4) <= *(unsigned char *)(temp_v3 + temp_v4))))) {
        temp_v2 = temp_v2 + 1;
      }
    }
    temp_v0 = *(unsigned short *)(param_2 + temp_v5 * 4);
    temp_v3 = *(int *)(temp_v2 * 4 + param_1 + 0xb5c);
    temp_v1 = *(unsigned short *)(param_2 + temp_v3 * 4);
    if ((temp_v0 < temp_v1) ||
       ((temp_v0 == temp_v1 && (*(unsigned char *)(param_1 + temp_v5 + 0x1458) <= *(unsigned char *)(temp_v3 + temp_v4)))))
    break;
    *(int *)(param_3 * 4 + param_1 + 0xb5c) = temp_v3;
    param_3 = temp_v2;
  }
  *(int *)(param_3 * 4 + param_1 + 0xb5c) = temp_v5;
  return;
}
