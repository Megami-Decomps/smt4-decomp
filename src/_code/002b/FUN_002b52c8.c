/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b52c8` (_code @ 0x2b52c8, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_STORAGE_s__6_6_6_6_004734c0_17_1_DEFINED
#define ROMWRIGHT_STORAGE_s__6_6_6_6_004734c0_17_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__6_6_6_6_004734c0_17_1 {
    char whole[17];
    unsigned char u1[17];
    signed char s1[17];
};
typedef char romwright_storage_s__6_6_6_6_004734c0_17_1_size_check[(sizeof(union romwright_storage_s__6_6_6_6_004734c0_17_1) == 17) ? 1 : -1];
typedef char romwright_storage_s__6_6_6_6_004734c0_17_1_u1_width_check[(sizeof(((union romwright_storage_s__6_6_6_6_004734c0_17_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__6_6_6_6_004734c0_17_1_s1_width_check[(sizeof(((union romwright_storage_s__6_6_6_6_004734c0_17_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__6_6_6_6_004734c0_17_1 s__6_6_6_6_004734c0; /* 0x4734c0 */


unsigned int FUN_002b52c8(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)*param_1 != -0x80000000) {
    if (*(int *)*param_1 == 0x40000000) {
      temp_v0 = (*(romwright_code *)(*(unsigned int *)&s__6_6_6_6_004734c0.u1[4]))();
    }
  }
  else {
    temp_v0 = (*(romwright_code *)(*(unsigned int *)&s__6_6_6_6_004734c0.u1[0]))();
  }
  return temp_v0;
}
