/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460e04` (_code @ 0x460e04, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00460500(int, int, unsigned int, unsigned int, unsigned char *, int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

extern unsigned char LAB_00460e6c; /* 0x460e6c */

/* Supplied declaration required: FUN_00460500. */


void FUN_00460e04(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  if (((*(char *)(param_1 + 400) != '\0') && (param_3 >= 0x54)) && (param_2 != 0)) {
    FUN_00460500(param_2,param_1 + 0x11c,param_4,param_5,&LAB_00460e6c,param_1);
  }
  return;
}

} /* extern "C" */
