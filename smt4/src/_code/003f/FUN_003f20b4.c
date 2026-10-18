/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f20b4` (_code @ 0x3f20b4, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00420ef4; /* 0x420ef4 */
extern unsigned int DAT_004eac24; /* 0x4eac24 */
extern unsigned int DAT_004eac28; /* 0x4eac28 */
extern unsigned int DAT_004eac2c; /* 0x4eac2c */
extern unsigned int DAT_004eac30; /* 0x4eac30 */
extern unsigned char DAT_004eac34; /* 0x4eac34 */
extern unsigned int DAT_004eac38; /* 0x4eac38 */
extern unsigned char DAT_004eac3c; /* 0x4eac3c */


void FUN_003f20b4(unsigned int *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (unsigned int)&DAT_00420ef4;
  param_1[0x15] = 0;
  DAT_004eac24 = 0;
  DAT_004eac28 = 0;
  DAT_004eac2c = 0;
  DAT_004eac30 = 0;
  DAT_004eac34 = 0;
  DAT_004eac38 = 0;
  DAT_004eac3c = 0;
  return;
}
