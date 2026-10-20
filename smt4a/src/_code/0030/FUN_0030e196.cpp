/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e196` (_code @ 0x30e196, 0x11a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6dd4(unsigned int, unsigned int);
int rt_memcpy(int, unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_001289f6(int, int, int);
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0030e196(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  unsigned short temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar8;
  
  temp_v4 = param_1[0xb];
  while( 1 ) {
    temp_v5 = (param_1[0xf] - param_1[0x1d]) - param_1[0x1b];
    if (param_1[0xb] + (temp_v4 - 0x106) <= (unsigned int)param_1[0x1b]) {
      rt_memcpy(param_1[0xe],param_1[0xe] + temp_v4,temp_v4);
      temp_v0 = param_1[0x13];
      param_1[0x1b] = param_1[0x1b] - temp_v4;
      param_1[0x1c] = param_1[0x1c] - temp_v4;
      puVar4 = (unsigned short *)(param_1[0x11] + temp_v0 * 2);
      param_1[0x17] = param_1[0x17] - temp_v4;
      do {
        puVar4 = puVar4 + -1;
        if (*puVar4 >= temp_v4) {
          temp_v3 = *puVar4 - (short)temp_v4;
        }
        else {
          temp_v3 = 0;
        }
        temp_v0 = temp_v0 - 1;
        *puVar4 = temp_v3;
      } while (temp_v0 != 0);
      puVar4 = (unsigned short *)(param_1[0x10] + temp_v4 * 2);
      temp_v1 = temp_v4;
      do {
        puVar4 = puVar4 + -1;
        if (*puVar4 >= temp_v4) {
          temp_v3 = *puVar4 - (short)temp_v4;
        }
        else {
          temp_v3 = 0;
        }
        temp_v1 = temp_v1 - 1;
        *puVar4 = temp_v3;
      } while (temp_v1 != 0);
      temp_v5 = temp_v5 + temp_v4;
    }
    if (*(int *)(*param_1 + 4) == 0) break;
    temp_v5 = FUN_001289f6(*param_1,param_1[0xe] + param_1[0x1b] + param_1[0x1d],temp_v5);
    temp_v1 = param_1[0x1d] + temp_v5;
    param_1[0x1d] = temp_v1;
    if (temp_v1 >= 3) {
      temp_v2 = (unsigned int)*(unsigned char *)(param_1[0xe] + param_1[0x1b]);
      param_1[0x12] = temp_v2;
      param_1[0x12] =
           ((temp_v2 << (param_1[0x16] & 0xffU)) ^ (unsigned int)*(unsigned char *)(param_1[0xe] + param_1[0x1b] + 1))
           & param_1[0x15];
    }
    if ((temp_v1 >= 0x106) || (*(int *)(*param_1 + 4) == 0)) {
      temp_v1 = param_1[0xf];
      puVar8 = (unsigned int *)(param_1 + 0x5b0);
      temp_v4 = *puVar8;
      if (temp_v4 < temp_v1) {
        temp_v2 = param_1[0x1b] + param_1[0x1d];
        if (temp_v4 < temp_v2) {
          temp_v4 = temp_v1 - temp_v2;
          if (temp_v1 - temp_v2 >= 0x103) {
            temp_v4 = 0x102;
          }
          FUN_002e6dd4(param_1[0xe] + temp_v2,temp_v4);
          temp_v2 = temp_v2 + temp_v4;
        }
        else {
          if (temp_v2 + 0x102 <= temp_v4) {
            return;
          }
          temp_v2 = (temp_v2 - temp_v4) + 0x102;
          if (temp_v1 - temp_v4 < temp_v2) {
            temp_v2 = temp_v1 - temp_v4;
          }
          FUN_002e6dd4(param_1[0xe] + temp_v4,temp_v2);
          temp_v2 = *puVar8 + temp_v2;
        }
        *puVar8 = temp_v2;
      }
      return;
    }
  }
  return;
}

} /* extern "C" */
