/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c0e4` (_code @ 0x10c0e4, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5c90(int, unsigned int *, unsigned int, int *);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
extern int FUN_002ed280(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002f5c90. */


long long FUN_0010c0e4(int param_1,unsigned int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v1 = param_2[3];
  temp_v2 = param_2;
  if (temp_v1 < *(int *)(param_2[2] + 0x10)) {
    temp_v2 = (unsigned int *)&temp_v4;
    temp_v3 = 0;
    temp_v4 = 0;
    FUN_002f5c90(param_1,param_2,param_3,&temp_v3);
    if ((((param_1 != 0) && (temp_v0 = FUN_002ed280(param_2,0x10), temp_v0 != 0)) &&
        (temp_v0 = FUN_002ed280(param_2,temp_v3), temp_v0 != 0)) &&
       (temp_v0 = FUN_002ed280(param_2,temp_v4), temp_v0 != 0)) {
      if (param_4 != (int *)0x0) {
        *param_4 = param_2[3] - temp_v1;
      }
      return romwright_piece_4_4(temp_v2,1);
    }
  }
  return romwright_zext_4_8(temp_v2) << 0x20;
}

} /* extern "C" */
