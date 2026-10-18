/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6c80` (_code @ 0x2b6c80, 0x114 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned int uRam000014e5; /* 0x14e5 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00140d40. */
extern int FUN_00140dac(unsigned int, int);
/* Supplied declaration required: FUN_002b06a0. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b6c80(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int iStack_24;
  int temp_v3;
  int temp_v4;
  
  if (-1 < param_1) {
    temp_v1 = 0x2b6cac;
    temp_v0 = FUN_00140dac(DAT_00433158,param_1);
    if (temp_v0 == 0) {
      if (param_1 < 0x200) {
        temp_v2 = (param_1 / 0x10) * 0x10;
        iStack_24 = temp_v2 + 0x10;
        temp_v3 = (param_1 % 0x10) * 0x20;
        temp_v4 = temp_v3 + 0x20;
        FUN_002b06a0(2,0x25,0,param_2,param_3,param_4,&temp_v2);
        return;
      }
      if (((param_1 >> 0x1f) & 1U) != 0) {
        uRam000014e5 = temp_v1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00140d40(DAT_00433158,param_1,param_2,param_3,param_4);
  }
  return;
}
