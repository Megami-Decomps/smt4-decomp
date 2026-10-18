/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb6c4` (_code @ 0x2bb6c4, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_002b90b0. */
/* Supplied declaration required: FUN_002bb648. */
extern int FUN_002c1850(unsigned int);
/* Supplied declaration required: FUN_002c52f8. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bbe48) */
/* WARNING: Removing unreachable block (ram,0x002bbe58) */
/* WARNING: Removing unreachable block (ram,0x002bc9ce) */
/* WARNING: Removing unreachable block (ram,0x002bce48) */
/* WARNING: Removing unreachable block (ram,0x002bd2dc) */
/* WARNING: Removing unreachable block (ram,0x002bd76c) */
/* WARNING: Removing unreachable block (ram,0x002bdad6) */

unsigned int FUN_002bb6c4(int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = 0;
  temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1);
  if (temp_v0 < 0) {
    if ((param_1[2] & 0xfffffffeU) != 0) {
      if ((param_1[2] & 1U) != 0) {
        FUN_002c52f8();
      }
      FUN_002b90b0(param_1[2] & 0xfffffffe);
      param_1[2] = 0;
    }
    if (temp_v0 < 0) {
      FUN_002bb648(temp_v0,0x2bb730);
    }
  }
  temp_v2 = ((temp_v1 >> 0x1f) & 1U) != 0;
  while( 1 ) {
    if (temp_v2) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = (int)param_1 * 0x78;
    }
    temp_v1 = FUN_002c1850(*(unsigned int *)(temp_v0 + 0x48));
    if (temp_v1 != 0) break;
    param_1 = (int *)((int)param_1 + 1);
    if ((int)param_1 >= 4) {
      return 0;
    }
    temp_v2 = (int *)0x3 < param_1;
  }
  if (temp_v0 == 0) {
    return 0;
  }
  return 1;
}
