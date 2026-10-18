/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f2f0` (_code @ 0x23f2f0, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_001e1774. */
/* Supplied declaration required: FUN_002072d0. */
/* Supplied declaration required: FUN_00219744. */
/* Supplied declaration required: FUN_002273ac. */
extern int FUN_0023f1d0(unsigned int *);
/* Supplied declaration required: FUN_00252630. */
/* Supplied declaration required: FUN_002899c4. */
extern unsigned int FUN_00293c98(void);
extern int FUN_002bf41c(unsigned int);
extern unsigned int FUN_002c0ba8(void);
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002ef664. */
/* Supplied declaration required: FUN_0033a9b4. */


int FUN_0023f2f0(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  if (param_1[3] != 0) {
    temp_v0 = param_1[5];
  }
  if (param_1[3] != 0 && temp_v0 != 0) {
    temp_v0 = FUN_002c2bd0(0);
    if ((temp_v0 == 3) && (temp_v0 = FUN_002c2bd0(1), temp_v0 == 3)) {
      temp_v1 = FUN_00293c98();
      FUN_0033a9b4();
      FUN_00252630();
      FUN_00219744(temp_v1);
      FUN_002072d0(temp_v1);
      FUN_001e1774(temp_v1);
      if (DAT_004342c8 != 0) {
        FUN_002273ac();
      }
      if ((param_1[1] & 1) != 0) {
        *param_1 = 6;
        temp_v0 = FUN_0023f1d0(param_1);
        return temp_v0;
      }
      temp_v1 = FUN_002c0ba8();
      temp_v2 = 0x17;
      FUN_002ef664(0x17,temp_v1);
      param_1[6] = temp_v2;
      FUN_002899c4(0x817,1);
      *param_1 = 5;
      temp_v0 = FUN_002bf41c(param_1[6]);
      if (temp_v0 == 0) {
        *param_1 = 6;
        temp_v0 = FUN_0023f1d0(param_1);
        return temp_v0;
      }
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
