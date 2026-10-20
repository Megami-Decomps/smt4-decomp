/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00267074` (_code @ 0x267074, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0039ae38(int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_7: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_7_stack;

extern int g_naviMain; /* 0x44cdf0 */

/* Supplied declaration required: FUN_0039ae38. */


void FUN_00267074(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  if (g_naviMain == 0) {
    return;
  }
  FUN_0039ae38(g_naviMain + 0x40,param_1,1,param_2,param_3,param_4,param_5,param_6,param_7);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
