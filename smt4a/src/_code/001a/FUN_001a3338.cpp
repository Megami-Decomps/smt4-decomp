/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a3338` (_code @ 0x1a3338, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018b868(void);
int FUN_0018b964(void);
int FUN_00195fc8(void);
int FUN_001a2f70(void);
int FUN_001bcd48(int, int);
int SBORROW4(...);
int software_interrupt(int);

/* stack frame of param_8: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_8_stack;

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
extern unsigned int FUN_0018b70c(void);
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_001a2f70. */
extern int FUN_001a352c(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001bcd48. */


int FUN_001a3338(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
                unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 7 native warning(s); review required */
  long long temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  if (DAT_005891d0 != param_7 || DAT_005891d4 != param_8) {
    temp_v6 = param_7 ^ DAT_005891c8;
    temp_v7 = (param_8 ^ DAT_005891cc) | temp_v6;
    if (temp_v7 != 0) {
      software_interrupt(0x28);
    }
    else {
      temp_v6 = 0;
      temp_v7 = 0;
    }
  }
  else {
    temp_v6 = 0;
    temp_v7 = 0;
  }
  while( 1 ) {
    if (param_4 >= 0x1001) {
      FUN_00195fc8();
    }
    temp_v4 = param_4;
    temp_v3 = param_3;
    if (param_3 == 0 || param_4 == 0) {
      temp_v4 = 0;
      temp_v3 = temp_v4;
    }
    FUN_0018b868();
    temp_v1 = FUN_0018b70c();
    temp_v2 = FUN_001a352c(temp_v1,param_1,param_2,temp_v3,temp_v4,param_5);
    if ((-1 < temp_v2) && ((param_2 & 0x10000) != 0)) {
      FUN_001a2f70();
    }
    FUN_0018b964();
    if (((-1 < temp_v2) || (temp_v2 != -0x375f33fe)) ||
       (DAT_005891d0 == param_7 && DAT_005891d4 == param_8)) break;
    temp_v3 = (param_8 ^ DAT_005891cc) | (param_7 ^ DAT_005891c8);
    if (temp_v3 != 0) {
      software_interrupt(0x28);
      temp_v4 = DAT_005891cc - (temp_v6 + (temp_v3 < temp_v7));
      temp_v0 = (unsigned long long)(temp_v3 - temp_v7) * 3 +
              (((unsigned long long)
                (unsigned int)(((int)temp_v4 >> 0x1f) * -0x452cb512 +
                      (int)((unsigned long long)temp_v4 * 0xbad34aee >> 0x20)) << 0x20) |
              (((unsigned long long)temp_v4 * 0xbad34aee) & 0xffffffff)) +
              romwright_piece_4_4(temp_v4 * 3,(int)((unsigned long long)(temp_v3 - temp_v7) * 0xbad34aee >> 0x20));
      temp_v2 = (int)((unsigned long long)temp_v0 >> 0x20);
      temp_v5 = param_7 < (unsigned int)temp_v0;
      if ((int)(param_8 - (temp_v2 + (unsigned int)temp_v5)) < 0 !=
          (SBORROW4(param_8,temp_v2) != SBORROW4(param_8 - temp_v2,(unsigned int)temp_v5))) {
        return -0x375f33fe;
      }
    }
    FUN_001bcd48(10000000,0);
  }
  return temp_v2;
}

} /* extern "C" */
