/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a2b80` (_code @ 0x1a2b80, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */
extern unsigned int DAT_005891d0; /* 0x5891d0 */
extern unsigned int DAT_005891d4; /* 0x5891d4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00189a38. */
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
extern int FUN_0018ba70(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_001bcd48. */


unsigned int FUN_001a2b80(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  long long temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  
  if (DAT_005891d4 != param_4 || DAT_005891d0 != param_3) {
    temp_v5 = DAT_005891c8 ^ param_3;
    temp_v1 = (DAT_005891cc ^ param_4) | temp_v5;
    if (temp_v1 != 0) {
      software_interrupt(0x28);
    }
    else {
      temp_v1 = 0;
      temp_v5 = 0;
    }
  }
  else {
    temp_v1 = 0;
    temp_v5 = 0;
  }
  while( 1 ) {
    FUN_0018b868();
    temp_v2 = FUN_0018ba70(param_1,(unsigned int *)&temp_v7);
    if (temp_v2 < 0) {
      FUN_00189a38(temp_v2,0x1a2c04);
    }
    FUN_0018b964();
    if ((char)temp_v7 != '\0') break;
    if (param_3 == DAT_005891d0 && DAT_005891d4 == param_4) {
      return 0;
    }
    temp_v3 = (param_3 ^ DAT_005891c8) | (param_4 ^ DAT_005891cc);
    if (temp_v3 != 0) {
      software_interrupt(0x28);
      temp_v4 = (param_4 ^ DAT_005891cc) - (temp_v5 + (temp_v3 < temp_v1));
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v0 = (unsigned long long)(temp_v3 - temp_v1) * 3 +
              (((unsigned long long)
                (unsigned int)(((int)temp_v4 >> 0x1f) * -0x452cb512 +
                      (int)((unsigned long long)temp_v4 * 0xbad34aee >> 0x20)) << 0x20) |
              (((unsigned long long)temp_v4 * 0xbad34aee) & 0xffffffff)) +
              romwright_piece_4_4(temp_v4 * 3,(int)((unsigned long long)(temp_v3 - temp_v1) * 0xbad34aee >> 0x20));
      temp_v2 = (int)((unsigned long long)temp_v0 >> 0x20);
      temp_v6 = param_3 < (unsigned int)temp_v0;
      if ((int)(param_4 - (temp_v2 + (unsigned int)temp_v6)) < 0 !=
          (SBORROW4(param_4,temp_v2) != SBORROW4(param_4 - temp_v2,(unsigned int)temp_v6))) {
        return 0;
      }
    }
    FUN_001bcd48(10000000,0);
  }
  return 1;
}
