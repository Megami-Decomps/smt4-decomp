/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b959c` (_code @ 0x3b959c, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00581280; /* 0x581280 */
extern int DAT_00581284; /* 0x581284 */
#ifndef ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__a_a_00587f08_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__a_a_00587f08_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__a_a_00587f08_9_1_size_check[(sizeof(union romwright_storage_s__a_a_00587f08_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_u1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__a_a_00587f08_9_1_s1_width_check[(sizeof(((union romwright_storage_s__a_a_00587f08_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__a_a_00587f08_9_1 s__a_a_00587f08; /* 0x587f08 */
extern int DAT_005f17f4; /* 0x5f17f4 */
extern short DAT_005f18ba; /* 0x5f18ba */
extern short DAT_005f18bc; /* 0x5f18bc */

extern int FUN_0032530c(void);


void FUN_003b959c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = (int)DAT_005f18ba;
  temp_v0 = FUN_0032530c();
  DAT_005f17f4 = temp_v1 - (*(int *)(DAT_00581280 + 8) +
                         (temp_v0 + *(int *)((*(unsigned int *)&s__a_a_00587f08.u1[0]) + 0x10) +
                                  *(int *)(DAT_00581284 + 0x10)) / 3);
  if (DAT_005f17f4 < DAT_005f18bc) {
    DAT_005f17f4 = (int)DAT_005f18bc;
  }
  return;
}
