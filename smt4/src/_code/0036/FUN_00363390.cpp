/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00363390` (_code @ 0x363390, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f7720(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int);

/* stack frame of param_8: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_8_stack;

/* Supplied declaration required: FUN_003f7720. */


void FUN_00363390(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 1 native warning(s); review required */
  FUN_003f7720(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0x18),param_2,param_3,param_4,
               param_5,param_6,param_8,*(unsigned char *)(param_1 + 0x20),param_7);
  return;
}

} /* extern "C" */
