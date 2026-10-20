/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b628` (_code @ 0x10b628, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010b5bc(unsigned int, int *);
int FUN_002e9318(int *);

typedef int romwright_code(...);
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern int DAT_00599378; /* 0x599378 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0010b5bc. */
/* Supplied declaration required: FUN_002e9318. */
extern int FUN_002f4d8c(unsigned int *, unsigned int **);


unsigned long long FUN_0010b628(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *temp_v1;
  int uStack_1c;
  unsigned int uStack_18;
  int temp_v2;
  
  uStack_1c = param_2;
  uStack_18 = param_3;
  while( 1 ) {
    temp_v1 = *(unsigned int **)(DAT_00599378 + 0x10);
    temp_v2 = *temp_v1;
    temp_v0 = FUN_002f4d8c((unsigned int *)&temp_v2,&temp_v1);
    if (temp_v0 == 0) break;
    (**(romwright_code **)(**(int **)(**(int **)(DAT_00599378 + 0x10) + 8) + 0xc))(&uStack_1c);
    FUN_0010b5bc(param_1,&uStack_1c);
    FUN_002e9318(&uStack_1c);
  }
  return romwright_piece_4_4(uStack_1c,temp_v1);
}

} /* extern "C" */
