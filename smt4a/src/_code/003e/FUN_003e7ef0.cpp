/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e7ef0` (_code @ 0x3e7ef0, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_005739c8; /* 0x5739c8 */
extern unsigned int DAT_005739cc; /* 0x5739cc */


void FUN_003e7ef0(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int *puVar10;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  
  temp_v5 = DAT_005739cc;
  temp_v4 = DAT_005739c8;
  temp_v3 = DAT_005739a4;
  temp_v2 = DAT_005739a0;
  temp_v1 = DAT_0057397c;
  temp_v0 = DAT_00573978;
  temp_v10 = 0;
  temp_v11 = 0xc;
  do {
    temp_v6 = param_1 + temp_v10 * 2;
    temp_v8 = (int)*(short *)(temp_v6 + 0x3006);
    if (-1 < temp_v8) {
      puVar10 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v8 * 0x408);
      temp_v7 = *puVar10;
      temp_v9 = puVar10[1];
      if ((((temp_v7 & temp_v0) == 0 && (temp_v9 & temp_v1) == 0) ||
          ((temp_v7 & temp_v2) != 0 || (temp_v9 & temp_v3) != 0)) ||
         ((temp_v9 & temp_v5) != 0 || (temp_v7 & temp_v4) != 0)) {
        *(unsigned short *)(temp_v6 + 0x3006) = 0xffff;
      }
    }
    temp_v11 = temp_v11 - 1;
    temp_v10 = temp_v10 + 1;
  } while (temp_v11 != 0);
  return;
}

} /* extern "C" */
