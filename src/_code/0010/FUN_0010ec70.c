/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ec70` (_code @ 0x10ec70, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_STORAGE_s__2_2_2_00464d6c_13_1_DEFINED
#define ROMWRIGHT_STORAGE_s__2_2_2_00464d6c_13_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__2_2_2_00464d6c_13_1 {
    char whole[13];
    unsigned char u1[13];
    signed char s1[13];
};
typedef char romwright_storage_s__2_2_2_00464d6c_13_1_size_check[(sizeof(union romwright_storage_s__2_2_2_00464d6c_13_1) == 13) ? 1 : -1];
typedef char romwright_storage_s__2_2_2_00464d6c_13_1_u1_width_check[(sizeof(((union romwright_storage_s__2_2_2_00464d6c_13_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__2_2_2_00464d6c_13_1_s1_width_check[(sizeof(((union romwright_storage_s__2_2_2_00464d6c_13_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__2_2_2_00464d6c_13_1 s__2_2_2_00464d6c; /* 0x464d6c */


void FUN_0010ec70(unsigned int param_1)

{
  (*(unsigned int *)&s__2_2_2_00464d6c.u1[0]) = param_1;
  return;
}
