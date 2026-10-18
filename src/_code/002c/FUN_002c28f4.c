/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c28f4` (_code @ 0x2c28f4, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int DAT_0044e330; /* 0x44e330 */
extern unsigned int DAT_004c6290; /* 0x4c6290 */
extern unsigned int DAT_004c6294; /* 0x4c6294 */
extern unsigned int DAT_004c6298; /* 0x4c6298 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x003bd322) */
/* WARNING: Removing unreachable block (ram,0x003bd326) */

int FUN_002c28f4(unsigned short *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int unaff_r4;
  
  if ((int)param_1 < 1) {
    *(short *)(param_2 + 0x3e) = (short)param_1;
    return unaff_r4;
  }
  if (DAT_0044e330 == 0) {
    *param_1 = (short)param_1;
    DAT_004c6294 = param_3;
    DAT_004c6298 = param_4;
    DAT_004c6290 = romwright_piece_2_2((short)((int)param_1 >> 0x12),(short)(param_2 >> 4));
    if (unaff_r4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
