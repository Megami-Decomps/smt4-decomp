/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1204` (_code @ 0x1a1204, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char DAT_0062d200; /* 0x62d200 */
extern unsigned char DAT_0062d201; /* 0x62d201 */
extern unsigned short DAT_0062d202; /* 0x62d202 */
extern unsigned int DAT_0062d204; /* 0x62d204 */
extern unsigned int DAT_0062d208; /* 0x62d208 */

/* Supplied declaration required: FUN_00189a80. */


void FUN_001a1204(unsigned int param_1,unsigned char param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  DAT_0062d201 = 0;
  DAT_0062d202 = 0xedac;
  DAT_0062d200 = param_2;
  DAT_0062d204 = param_1;
  DAT_0062d208 = param_3;
  FUN_00189a80();
  return;
}
