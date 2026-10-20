/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107298` (_code @ 0x107298, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eed54(int, int, int *);
int FUN_002eed74(int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002eed54. */
/* Supplied declaration required: FUN_002eed74. */


long long FUN_00107298(int param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (*(int *)(param_1 + 500) != 0) {
    temp_v1 = param_2[1];
    temp_v0 = *param_2;
    temp_v2 = param_2[2];
    FUN_002eed54(param_1 + 0x1e8,param_1,&temp_v0);
    FUN_002eed74(param_1 + 0x1e8);
    return romwright_piece_4_4(temp_v0,1);
  }
  return romwright_zext_4_8(param_2) << 0x20;
}

} /* extern "C" */
