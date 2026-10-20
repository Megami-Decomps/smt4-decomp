/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b563c` (_code @ 0x2b563c, 0x1d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001480c8(void);
int FUN_002bb150(int, int);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
int asdFatalError(void);
int SBORROW4(...);
int software_interrupt(int);

/* stack frame of param_8: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_8_stack;

extern unsigned int DAT_0044e370; /* 0x44e370 */
extern unsigned int DAT_0044e374; /* 0x44e374 */
extern unsigned int DAT_0044e378; /* 0x44e378 */
extern unsigned int DAT_0044e37c; /* 0x44e37c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001480c8. */
extern int FUN_001482f8(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002bb100(void);
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: asdFatalError. */


int FUN_002b563c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
                unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 7 native warning(s); review required */
  long long temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  if (DAT_0044e378 != param_7 || DAT_0044e37c != param_8) {
    temp_v1 = (param_7 ^ DAT_0044e370) | (param_8 ^ DAT_0044e374);
    if (temp_v1 != 0) {
      software_interrupt(0x28);
      temp_v5 = param_8 ^ DAT_0044e374;
    }
    else {
      temp_v1 = 0;
      temp_v5 = temp_v1;
    }
  }
  else {
    temp_v1 = 0;
    temp_v5 = temp_v1;
  }
  while( 1 ) {
    if (param_4 >= 0x1001) {
      asdFatalError();
    }
    temp_v6 = param_4;
    temp_v4 = param_3;
    if (param_3 == 0 || param_4 == 0) {
      temp_v6 = 0;
      temp_v4 = temp_v6;
    }
    FUN_002bb378();
    temp_v2 = FUN_002bb100();
    temp_v3 = FUN_001482f8(temp_v2,param_1,param_2,temp_v4,temp_v6,param_5);
    if ((-1 < temp_v3) && ((param_2 & 0x10000) != 0)) {
      FUN_001480c8();
    }
    nn_applet_CTR_detail_CloseSession();
    if (((-1 < temp_v3) || (temp_v3 != -0x375f33fe)) ||
       (DAT_0044e378 == param_7 && DAT_0044e37c == param_8)) break;
    temp_v4 = (param_8 ^ DAT_0044e374) | (DAT_0044e370 ^ param_7);
    if (temp_v4 != 0) {
      software_interrupt(0x28);
      temp_v6 = param_8 - (temp_v5 + (temp_v4 < temp_v1));
      temp_v0 = (unsigned long long)(temp_v4 - temp_v1) * 3 +
              (((unsigned long long)
                (unsigned int)(((int)temp_v6 >> 0x1f) * -0x452cb512 +
                      (int)((unsigned long long)temp_v6 * 0xbad34aee >> 0x20)) << 0x20) |
              (((unsigned long long)temp_v6 * 0xbad34aee) & 0xffffffff)) +
              romwright_piece_4_4(temp_v6 * 3,(int)((unsigned long long)(temp_v4 - temp_v1) * 0xbad34aee >> 0x20));
      temp_v3 = (int)((unsigned long long)temp_v0 >> 0x20);
      temp_v7 = param_7 < (unsigned int)temp_v0;
      if ((int)(param_8 - (temp_v3 + (unsigned int)temp_v7)) < 0 !=
          (SBORROW4(param_8,temp_v3) != SBORROW4(param_8 - temp_v3,(unsigned int)temp_v7))) {
        return -0x375f33fe;
      }
    }
    FUN_002bb150(10000000,0);
  }
  return temp_v3;
}

} /* extern "C" */
