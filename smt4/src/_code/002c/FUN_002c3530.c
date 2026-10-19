/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3530` (_code @ 0x2c3530, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern int DAT_004e3a64; /* 0x4e3a64 */
extern unsigned char DAT_004e3a68; /* 0x4e3a68 */
extern unsigned char DAT_004e3aa4; /* 0x4e3aa4 */
extern unsigned char DAT_004e3ae0; /* 0x4e3ae0 */
extern unsigned int DAT_004e3b90; /* 0x4e3b90 */

/* Supplied declaration required: FUN_00119750. */


void FUN_002c3530(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = (unsigned char *)0x0;
  if (param_1 == 0) {
    param_4 = 0;
    puVar1 = &DAT_004e3a68;
  }
  else if (param_1 == 1) {
    param_4 = 0;
    puVar1 = &DAT_004e3aa4;
  }
  else if (param_1 == 2) {
    if (DAT_004e3a64 == 1) {
      return;
    }
    param_4 = 1;
    puVar1 = &DAT_004e3ae0;
  }
  FUN_00119750(puVar1,puVar1 + 0x18,(&DAT_004e3b90)[param_4],7,param_2);
  return;
}
