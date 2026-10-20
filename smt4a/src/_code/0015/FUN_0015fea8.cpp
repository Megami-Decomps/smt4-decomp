/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015fea8` (_code @ 0x15fea8, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern int FUN_00178458(unsigned int, unsigned int, int *);
extern int FUN_001784b0(unsigned int, int *);
extern unsigned int FUN_00194fd8(unsigned int);


unsigned int FUN_0015fea8(unsigned int param_1,unsigned int param_2,int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  
  temp_v0 = FUN_00194fd8(param_2);
  temp_v4 = (temp_v0 * 0x5c + 0x1f) & 0xffffffe0;
  temp_v3 = 0;
  if (temp_v3 < temp_v0) {
    do {
      temp_v5 = 0;
      temp_v6 = 0;
      temp_v1 = FUN_00178458(param_2,temp_v3 | 0x4000000,&temp_v5);
      temp_v2 = 0;
      if (temp_v1 != 0) {
        temp_v2 = temp_v6;
      }
      if (temp_v1 != 0 && temp_v2 != 0) {
        temp_v4 = temp_v5 * (((temp_v2 + 0x1fU) & 0xffffffe0) + 0x40) + temp_v4;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v0);
  }
  temp_v2 = FUN_001784b0(param_2,&temp_v7);
  if (temp_v2 != 0) {
    temp_v4 = ((temp_v8 * 0x138 + 0x1fU) & 0xffffffe0) +
            ((temp_v9 * 0x3298 + 0x1fU) & 0xffffffe0) +
            ((temp_v7 * 0x88 + 0x1fU) & 0xffffffe0) +
            ((temp_v7 * 0x2d8 + 0x1fU) & 0xffffffe0) + temp_v4 +
            ((temp_v10 * 0x1e8 + 0x1fU) & 0xffffffe0) + ((temp_v10 * 0x4c + 0x1fU) & 0xffffffe0);
  }
  if (param_3 != 0) {
    temp_v4 = ((param_3 + 3U) & 0xfffffffc) * (temp_v9 + temp_v10 + temp_v7) + temp_v4;
  }
  return temp_v4;
}

} /* extern "C" */
