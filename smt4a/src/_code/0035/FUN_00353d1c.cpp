/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353d1c` (_code @ 0x353d1c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_STORAGE_s__________0058127c_17_1_DEFINED
#define ROMWRIGHT_STORAGE_s__________0058127c_17_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__________0058127c_17_1 {
    char whole[17];
    unsigned char u1[17];
    signed char s1[17];
};
typedef char romwright_storage_s__________0058127c_17_1_size_check[(sizeof(union romwright_storage_s__________0058127c_17_1) == 17) ? 1 : -1];
typedef char romwright_storage_s__________0058127c_17_1_u1_width_check[(sizeof(((union romwright_storage_s__________0058127c_17_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__________0058127c_17_1_s1_width_check[(sizeof(((union romwright_storage_s__________0058127c_17_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__________0058127c_17_1 s__________0058127c; /* 0x58127c */


void FUN_00353d1c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 + 2;
    *(unsigned char *)((*(unsigned int *)&s__________0058127c.u1[0]) + temp_v0 * 0x30 + 0x2844) = 0;
    *(unsigned char *)((*(unsigned int *)&s__________0058127c.u1[0]) + temp_v0 * 0x30 + 0x2874) = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 0x20);
  return;
}

} /* extern "C" */
