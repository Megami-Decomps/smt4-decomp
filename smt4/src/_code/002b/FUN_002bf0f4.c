/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf0f4` (_code @ 0x2bf0f4, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_004655c0; /* 0x4655c0 */

/* Supplied declaration required: FUN_002c4938. */


void FUN_002bf0f4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_004655c0;
  param_1 = param_1 & ~DAT_004655c0[2];
  if ((param_1 & 1) != 0) {
    *DAT_004655c0 = *DAT_004655c0 | 0x100000;
  }
  if ((param_1 & 2) != 0) {
    *puVar1 = *puVar1 | 0x10000;
  }
  if ((param_1 & 4) != 0) {
    *puVar1 = *puVar1 | 0x1800000;
  }
  if ((param_1 & 8) != 0) {
    *puVar1 = *puVar1 | 0x600000;
  }
  if ((param_1 & 0x10) != 0) {
    *puVar1 = *puVar1 | 0x10000;
  }
  if ((param_1 & 0x20) != 0) {
    *puVar1 = *puVar1 | 0x80000;
  }
  if ((param_1 & 0x40) != 0) {
    *puVar1 = *puVar1 | 0x2004038;
    FUN_002c4938(puVar1 + 0x43,0x84);
    FUN_002c4938(puVar1 + 100,0x84);
  }
  if ((param_1 & 0x80) != 0) {
    *puVar1 = *puVar1 | 0x1c00;
  }
  if ((param_1 & 0x100) != 0) {
    *puVar1 = *puVar1 | 1;
  }
  if ((param_1 & 0x200) != 0) {
    *puVar1 = *puVar1 | 0x80c2;
  }
  if ((param_1 & 0x400) != 0) {
    *puVar1 = *puVar1 | 4;
  }
  if ((param_1 & 0x800) != 0) {
    *puVar1 = *puVar1 | 0x100;
  }
  if ((param_1 & 0x1000) != 0) {
    *puVar1 = *puVar1 | 0x200;
  }
  puVar1[1] = puVar1[1] | param_1;
  return;
}
