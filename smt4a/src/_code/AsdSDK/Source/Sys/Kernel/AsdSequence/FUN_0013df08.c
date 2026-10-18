/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013df08` (_code @ 0x13df08, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char LAB_0013df68; /* 0x13df68 */
extern int FUN_00151274(); /* 0x151274 */
extern unsigned int DAT_00640370; /* 0x640370 */
extern unsigned int DAT_00640374; /* 0x640374 */
extern unsigned int DAT_00640378; /* 0x640378 */
extern unsigned int DAT_0064037c; /* 0x64037c */
extern unsigned int DAT_00640380; /* 0x640380 */
extern unsigned int DAT_00640384; /* 0x640384 */

/* Supplied declaration required: FUN_0014e38c. */


void FUN_0013df08(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  DAT_00640378 = 0xffffffff;
  DAT_00640380 = 0;
  DAT_0064037c = 0xffffffff;
  DAT_00640384 = 0;
  DAT_00640370 = param_2;
  DAT_00640374 = param_3;
  FUN_0014e38c(&LAB_0013df68,param_1,0,0,FUN_00151274,0,0);
  return;
}
