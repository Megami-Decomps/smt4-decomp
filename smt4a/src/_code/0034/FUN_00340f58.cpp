/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340f58` (_code @ 0x340f58, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_STORAGE_s____Z____005b40ce_10_2_DEFINED
#define ROMWRIGHT_STORAGE_s____Z____005b40ce_10_2_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s____Z____005b40ce_10_2 {
    char whole[10];
    unsigned char u1[10];
    signed char s1[10];
    unsigned short u2[5];
    short s2[5];
};
typedef char romwright_storage_s____Z____005b40ce_10_2_size_check[(sizeof(union romwright_storage_s____Z____005b40ce_10_2) == 10) ? 1 : -1];
typedef char romwright_storage_s____Z____005b40ce_10_2_u1_width_check[(sizeof(((union romwright_storage_s____Z____005b40ce_10_2 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s____Z____005b40ce_10_2_s1_width_check[(sizeof(((union romwright_storage_s____Z____005b40ce_10_2 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s____Z____005b40ce_10_2_u2_width_check[(sizeof(((union romwright_storage_s____Z____005b40ce_10_2 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_s____Z____005b40ce_10_2_s2_width_check[(sizeof(((union romwright_storage_s____Z____005b40ce_10_2 *)0)->s2[0]) == 2) ? 1 : -1];
#endif
extern union romwright_storage_s____Z____005b40ce_10_2 s____Z____005b40ce; /* 0x5b40ce */
extern unsigned short DAT_005b40da; /* 0x5b40da */
extern unsigned char DAT_005b40dc; /* 0x5b40dc */


void FUN_00340f58(void)

{
  DAT_005b40dc = 0;
  s____Z____005b40ce.whole[0] = '-';
  s____Z____005b40ce.whole[1] = '\0';
  s____Z____005b40ce.whole[4] = '-';
  s____Z____005b40ce.whole[5] = '\0';
  s____Z____005b40ce.whole[8] = '-';
  s____Z____005b40ce.whole[9] = '\0';
  DAT_005b40da = 0x2d;
  return;
}

} /* extern "C" */
