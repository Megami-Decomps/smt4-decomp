/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040ab9c` (_code @ 0x40ab9c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 6 slot(s), 18 byte(s) */
typedef struct {
    unsigned char spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int FUN_001581dc(unsigned int *);


void FUN_0040ab9c(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  temp_v5 = 0x10000;
  temp_v1 = *(unsigned int *)(param_1 + 0x10);
  temp_v2 = 1;
  temp_v3 = *(unsigned int *)(param_1 + 0x18);
  temp_v4 = *(unsigned int *)(param_1 + 0x1c);
  temp_v6 = (unsigned char)*(unsigned int *)(param_1 + 0x14);
  temp_v0 = FUN_001581dc((unsigned int *)&temp_v1);
  *(unsigned int *)(param_1 + 0xc) = temp_v0;
  return;
}

} /* extern "C" */
