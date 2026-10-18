/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001284e4` (_code @ 0x1284e4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_STORAGE_DAT_0044e45a_2_2_DEFINED
#define ROMWRIGHT_STORAGE_DAT_0044e45a_2_2_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_0044e45a_2_2 {
    unsigned short whole;
    unsigned char u1[2];
    signed char s1[2];
    unsigned short u2[1];
    short s2[1];
};
typedef char romwright_storage_DAT_0044e45a_2_2_size_check[(sizeof(union romwright_storage_DAT_0044e45a_2_2) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_u1_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_s1_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_u2_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_s2_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->s2[0]) == 2) ? 1 : -1];
#endif
extern union romwright_storage_DAT_0044e45a_2_2 DAT_0044e45a; /* 0x44e45a */
extern unsigned char DAT_004c64a4; /* 0x4c64a4 */


void FUN_001284e4(void)

{
  int temp_v0;
  
  if ((char)DAT_0044e45a.whole != '\0') {
    temp_v0 = 0;
    do {
      if (*(romwright_code **)(&DAT_004c64a4 + temp_v0 * 4) != (romwright_code *)0x0) {
        (**(romwright_code **)(&DAT_004c64a4 + temp_v0 * 4))();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    DAT_0044e45a.s1[0] = '\0';
  }
  return;
}
