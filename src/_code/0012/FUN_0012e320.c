/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012e320` (_code @ 0x12e320, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_STORAGE_s__6_6_7_6_00472308_16_8_DEFINED
#define ROMWRIGHT_STORAGE_s__6_6_7_6_00472308_16_8_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__6_6_7_6_00472308_16_8 {
    char whole[16];
    unsigned char u1[16];
    signed char s1[16];
    unsigned short u2[8];
    short s2[8];
    unsigned int u4[4];
    int s4[4];
    float f4[4];
    unsigned long long u8[2];
    long long s8[2];
    double f8[2];
};
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_size_check[(sizeof(union romwright_storage_s__6_6_7_6_00472308_16_8) == 16) ? 1 : -1];
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_u1_width_check[(sizeof(((union romwright_storage_s__6_6_7_6_00472308_16_8 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_s1_width_check[(sizeof(((union romwright_storage_s__6_6_7_6_00472308_16_8 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_u2_width_check[(sizeof(((union romwright_storage_s__6_6_7_6_00472308_16_8 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_s2_width_check[(sizeof(((union romwright_storage_s__6_6_7_6_00472308_16_8 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_u4_width_check[(sizeof(((union romwright_storage_s__6_6_7_6_00472308_16_8 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_s4_width_check[(sizeof(((union romwright_storage_s__6_6_7_6_00472308_16_8 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_f4_width_check[(sizeof(((union romwright_storage_s__6_6_7_6_00472308_16_8 *)0)->f4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_u8_width_check[(sizeof(((union romwright_storage_s__6_6_7_6_00472308_16_8 *)0)->u8[0]) == 8) ? 1 : -1];
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_s8_width_check[(sizeof(((union romwright_storage_s__6_6_7_6_00472308_16_8 *)0)->s8[0]) == 8) ? 1 : -1];
typedef char romwright_storage_s__6_6_7_6_00472308_16_8_f8_width_check[(sizeof(((union romwright_storage_s__6_6_7_6_00472308_16_8 *)0)->f8[0]) == 8) ? 1 : -1];
#endif
extern union romwright_storage_s__6_6_7_6_00472308_16_8 s__6_6_7_6_00472308; /* 0x472308 */


unsigned int FUN_0012e320(int *param_1,unsigned int param_2)

{
  if (*(int *)*param_1 != 0x10000001) {
    if (*(int *)*param_1 == 0x10000002) {
      (*(romwright_code *)s__6_6_7_6_00472308.u4[1])(param_2);
      *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) | 1;
    }
  }
  else {
    (*(romwright_code *)s__6_6_7_6_00472308.u4[0])(param_2);
    *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) | 1;
  }
  return 0;
}
