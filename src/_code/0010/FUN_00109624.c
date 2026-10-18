/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00109624` (_code @ 0x109624, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char LAB_00109684; /* 0x109684 */
extern int FUN_001181f4(); /* 0x1181f4 */
extern unsigned int DAT_004e3f4c; /* 0x4e3f4c */
extern unsigned int DAT_004e3f50; /* 0x4e3f50 */
extern unsigned int DAT_004e3f54; /* 0x4e3f54 */
extern unsigned int DAT_004e3f58; /* 0x4e3f58 */
extern unsigned int DAT_004e3f5c; /* 0x4e3f5c */
extern unsigned int DAT_004e3f60; /* 0x4e3f60 */

/* Supplied declaration required: FUN_002c5978. */


void FUN_00109624(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  DAT_004e3f54 = 0xffffffff;
  DAT_004e3f5c = 0;
  DAT_004e3f58 = 0xffffffff;
  DAT_004e3f60 = 0;
  DAT_004e3f4c = param_2;
  DAT_004e3f50 = param_3;
  FUN_002c5978(&LAB_00109684,param_1,0,0,FUN_001181f4,0,0);
  return;
}
