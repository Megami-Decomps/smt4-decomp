/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013fff0` (_code @ 0x13fff0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_STORAGE_s__6_6_00473500_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__6_6_00473500_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__6_6_00473500_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__6_6_00473500_9_1_size_check[(sizeof(union romwright_storage_s__6_6_00473500_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__6_6_00473500_9_1_u1_width_check[(sizeof(((union romwright_storage_s__6_6_00473500_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__6_6_00473500_9_1_s1_width_check[(sizeof(((union romwright_storage_s__6_6_00473500_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__6_6_00473500_9_1 s__6_6_00473500; /* 0x473500 */


unsigned int FUN_0013fff0(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)*param_1 != -0x7fffffff) {
    if (*(int *)*param_1 == -0x7ffffffe) {
      temp_v0 = (*(romwright_code *)(*(unsigned int *)&s__6_6_00473500.u1[0]))(param_2);
    }
  }
  else {
    temp_v0 = (*(romwright_code *)(*(unsigned int *)&s__6_6_00473500.u1[4]))(param_2);
  }
  return temp_v0;
}
