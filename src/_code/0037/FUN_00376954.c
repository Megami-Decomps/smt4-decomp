/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376954` (_code @ 0x376954, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;


unsigned char FUN_00376954(int *param_1)

{
  unsigned char temp_v0;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x10))();
  return temp_v0;
}
