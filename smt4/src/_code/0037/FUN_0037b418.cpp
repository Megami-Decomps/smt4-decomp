/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b418` (_code @ 0x37b418, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0037a6c8(int, int, unsigned int, unsigned int, unsigned char *, int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

extern unsigned char LAB_0037b480; /* 0x37b480 */

/* Supplied declaration required: FUN_0037a6c8. */


void FUN_0037b418(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  if (((*(char *)(param_1 + 0x180) != '\0') && (param_3 >= 0x54)) && (param_2 != 0)) {
    FUN_0037a6c8(param_2,param_1 + 0x10c,param_4,param_5,&LAB_0037b480,param_1);
  }
  return;
}

} /* extern "C" */
