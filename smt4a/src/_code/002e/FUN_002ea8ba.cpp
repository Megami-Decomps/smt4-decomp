/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea8ba` (_code @ 0x2ea8ba, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_002ea908(int, unsigned char *);


int FUN_002ea8ba(int param_1)

{
/* irregular: irregular input(s): in_stack_00000000, in_stack_00000004, in_stack_00000008, in_stack_0000000c; 4 native warning(s); review required */
  int temp_v0;
  int in_stack_00000000;
  unsigned int in_stack_00000004;
  unsigned int in_stack_00000008;
  unsigned int in_stack_0000000c;
  unsigned char temp_v1 [16];
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0xf0) + 0x14))
                    (*(int **)(param_1 + 0xf0),in_stack_00000000,in_stack_0000000c,in_stack_00000004
                     ,param_1 + 0x9c,in_stack_00000008,temp_v1);
  if (temp_v0 != 3) {
    temp_v0 = FUN_002ea908(in_stack_00000000 + 0x28,temp_v1);
    if ((temp_v0 == 0) && ((*(unsigned short *)(in_stack_00000000 + 0x3c) & 0xf) != 5)) {
      temp_v0 = 2;
    }
    else {
      temp_v0 = 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
