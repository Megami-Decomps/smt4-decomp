/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2728` (_code @ 0x2c2728, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int DAT_0044e330; /* 0x44e330 */
extern unsigned int DAT_004c6290; /* 0x4c6290 */
extern unsigned int DAT_004c6294; /* 0x4c6294 */
extern int DAT_004c6298; /* 0x4c6298 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002c2728(unsigned short *param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  
  if ((int)param_1 < 1) {
    *(short *)(param_2 + 0x3e) = (short)param_1;
    return unaff_r4;
  }
  if (DAT_0044e330 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = (short)param_1;
  temp_v0 = param_2 >> 4;
  DAT_004c6290 = romwright_piece_2_2((short)((int)param_1 >> 0x12),(short)temp_v0);
  DAT_004c6294 = param_3;
  DAT_004c6298 = param_4;
  if ((((param_2 >> 3) & 1U) == 0) &&
     (param_4 = param_4 + temp_v0 * 0x50, *(int *)(param_4 + 0x4cc) != 0)) {
    *(int *)(param_2 + 0x204) = param_4 + 0x4bc;
    unaff_r4 = 1;
    *(char *)(param_4 + 0x508) = (char)temp_v0;
  }
  return unaff_r4;
}
