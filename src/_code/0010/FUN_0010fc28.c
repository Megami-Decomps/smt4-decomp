/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fc28` (_code @ 0x10fc28, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

#ifndef ROMWRIGHT_STORAGE_s__B_B_00471b5c_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__B_B_00471b5c_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__B_B_00471b5c_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__B_B_00471b5c_9_1_size_check[(sizeof(union romwright_storage_s__B_B_00471b5c_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__B_B_00471b5c_9_1_u1_width_check[(sizeof(((union romwright_storage_s__B_B_00471b5c_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__B_B_00471b5c_9_1_s1_width_check[(sizeof(((union romwright_storage_s__B_B_00471b5c_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__B_B_00471b5c_9_1 s__B_B_00471b5c; /* 0x471b5c */

/* Supplied declaration required: FUN_0011b940. */
/* Supplied declaration required: FUN_002bb648. */


void FUN_0010fc28(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(unsigned int *)&s__B_B_00471b5c.u1[0]);
  FUN_0011b940((*(unsigned int *)&s__B_B_00471b5c.u1[0]),0xf000000b);
  if ((temp_v0 < 0) && (temp_v0 < 0)) {
    FUN_002bb648();
    return;
  }
  return;
}
