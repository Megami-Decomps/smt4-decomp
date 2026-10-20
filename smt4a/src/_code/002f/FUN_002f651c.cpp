/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f651c` (_code @ 0x2f651c, 0xfa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f670c(unsigned int *, int);
int __aeabi_uidivmod(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002f670c. */
/* Supplied declaration required: __aeabi_uidivmod. */


unsigned long long FUN_002f651c(unsigned int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar4;
  unsigned int uStack_20;
  
  temp_v1 = 0;
  if (param_2 != 0) {
    puVar4 = param_1 + 0x270;
    temp_v0 = *puVar4;
    if (temp_v0 >= 0x270) {
      temp_v3 = 0;
      if (temp_v0 == 0x271) {
        FUN_002f670c(param_1,0x1105);
      }
      do {
        temp_v0 = temp_v3 + 1;
        param_1[temp_v3] =
             param_1[temp_v3 + 0x18d] ^ param_1[(param_1[temp_v3 + 1] & 1) + 0x271] ^
             (((param_1[temp_v3] & 0x80000000) | (param_1[temp_v3 + 1] & 0x7fffffff)) >> 1);
        temp_v3 = temp_v0;
      } while (temp_v0 < 0xe3);
      for (; temp_v0 < 0x26f; temp_v0 = temp_v0 + 1) {
        param_1[temp_v0] =
             param_1[temp_v0 - 0xe3] ^ param_1[(param_1[temp_v0 + 1] & 1) + 0x271] ^
             (((param_1[temp_v0] & 0x80000000) | (param_1[temp_v0 + 1] & 0x7fffffff)) >> 1);
      }
      temp_v0 = 0;
      param_1[0x26f] =
           param_1[0x18c] ^ param_1[(*param_1 & 1) + 0x271] ^
           (((param_1[0x26f] & 0x80000000) | (*param_1 & 0x7fffffff)) >> 1);
      *puVar4 = 0;
    }
    *puVar4 = temp_v0 + 1;
    temp_v0 = (param_1[temp_v0] >> 0xb) ^ param_1[temp_v0];
    temp_v0 = ((temp_v0 & 0x13a58ad) << 7) ^ temp_v0;
    temp_v0 = ((temp_v0 & 0x1df8c) << 0xf) ^ temp_v0;
    __aeabi_uidivmod((temp_v0 >> 0x12) ^ temp_v0,param_2);
    temp_v1 = temp_v2;
  }
  return romwright_piece_4_4(uStack_20,temp_v1);
}

} /* extern "C" */
