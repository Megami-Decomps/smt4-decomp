/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385a10` (_code @ 0x385a10, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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

/* Supplied declaration required: FUN_00281b94. */


void FUN_00385a10(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v1 = (*(unsigned int *)&s__a_a_00587f08.u1[0]) + temp_v2 * 0x58;
    if (*(char *)(temp_v1 + 0xa4) != '\0') {
      temp_v0 = *(short *)(temp_v1 + 200);
      if (((!(temp_v0 == 3 || temp_v0 == 4)) && (!(temp_v0 == 5 || temp_v0 == 8))) &&
         (!(temp_v0 == 9 || temp_v0 == 10))) {
        if ((temp_v0 == 7 || temp_v0 == 0xd) || (temp_v0 == 0xf || temp_v0 == 0x10)) {
          FUN_00281b94(0);
        }
      }
      else {
        FUN_00281b94(0);
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x20);
  return;
}
