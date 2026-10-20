/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004929d8` (_code @ 0x4929d8, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0038594c(void);

#ifndef ROMWRIGHT_STORAGE_s__Vd_____00587f2c_18_2_DEFINED
#define ROMWRIGHT_STORAGE_s__Vd_____00587f2c_18_2_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__Vd_____00587f2c_18_2 {
    char whole[18];
    unsigned char u1[18];
    signed char s1[18];
    unsigned short u2[9];
    short s2[9];
};
typedef char romwright_storage_s__Vd_____00587f2c_18_2_size_check[(sizeof(union romwright_storage_s__Vd_____00587f2c_18_2) == 18) ? 1 : -1];
typedef char romwright_storage_s__Vd_____00587f2c_18_2_u1_width_check[(sizeof(((union romwright_storage_s__Vd_____00587f2c_18_2 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__Vd_____00587f2c_18_2_s1_width_check[(sizeof(((union romwright_storage_s__Vd_____00587f2c_18_2 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__Vd_____00587f2c_18_2_u2_width_check[(sizeof(((union romwright_storage_s__Vd_____00587f2c_18_2 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_s__Vd_____00587f2c_18_2_s2_width_check[(sizeof(((union romwright_storage_s__Vd_____00587f2c_18_2 *)0)->s2[0]) == 2) ? 1 : -1];
#endif
extern union romwright_storage_s__Vd_____00587f2c_18_2 s__Vd_____00587f2c; /* 0x587f2c */

extern char *FUN_00327638(int);
/* Supplied declaration required: FUN_0038594c. */


char * FUN_004929d8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  
  if (param_2 >= 100) {
    temp_v0 = 0;
    do {
      if (*(short *)(s__Vd_____00587f2c.whole + temp_v0 * 0x22 + 4) == -1) {
        return (char *)(*(unsigned int *)&s__Vd_____00587f2c.u1[0]);
      }
      if (*(short *)(s__Vd_____00587f2c.whole + temp_v0 * 0x22 + 4) == param_2) {
        return s__Vd_____00587f2c.whole + temp_v0 * 0x22 + 6;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 999);
  }
  else {
    temp_v0 = 0;
    FUN_0038594c();
    if (0 < param_1) {
      do {
        pcVar2 = (char *)FUN_00327638(temp_v0);
        if (*(short *)(pcVar2 + 0x20) == -1) {
          return (char *)(*(unsigned int *)&s__Vd_____00587f2c.u1[0]);
        }
        if (*(short *)(pcVar2 + 0x20) == param_2) {
          return pcVar2;
        }
        temp_v0 = temp_v0 + 1;
        FUN_0038594c();
      } while (temp_v0 < (int)pcVar2);
    }
  }
  return (char *)(*(unsigned int *)&s__Vd_____00587f2c.u1[0]);
}

} /* extern "C" */
