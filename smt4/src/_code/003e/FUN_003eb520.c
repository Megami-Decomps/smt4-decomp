/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb520` (_code @ 0x3eb520, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int FUN_0033b618(); /* 0x33b618 */
extern unsigned int DAT_00464fe8; /* 0x464fe8 */
extern unsigned int DAT_00464fec; /* 0x464fec */
extern unsigned char DAT_004e0e90; /* 0x4e0e90 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_0035f1f4(unsigned char *);


unsigned long long FUN_003eb520(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_00464fe8 = 0;
  DAT_00464fec = 0;
  temp_v0 = FUN_0035f1f4(&DAT_004e0e90);
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned char *)(temp_v0 + 0x38) = 1;
  return romwright_piece_4_4(FUN_0033b618,temp_v0 - 8);
}
