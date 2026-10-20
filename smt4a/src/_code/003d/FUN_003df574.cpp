/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df574` (_code @ 0x3df574, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00186f58(void);
int FUN_001aba54(void);

/* Supplied declaration required: FUN_00186f58. */
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_003e46f4(unsigned int);


/* WARNING: Removing unreachable block (ram,0x003df5a4) */
/* WARNING: Removing unreachable block (ram,0x003df5b0) */
/* WARNING: Removing unreachable block (ram,0x003df5c0) */
/* WARNING: Removing unreachable block (ram,0x003df65c) */
/* WARNING: Removing unreachable block (ram,0x003df668) */
/* WARNING: Removing unreachable block (ram,0x003df674) */
/* WARNING: Removing unreachable block (ram,0x003df680) */
/* WARNING: Removing unreachable block (ram,0x003df684) */

void FUN_003df574(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  
  FUN_001aba54();
  if (param_1 != 0) {
    temp_v0 = FUN_003e46f4(0xc);
    if (temp_v0 != 0) {
      FUN_00186f58();
    }
    temp_v0 = FUN_003e46f4(0xd);
    if (temp_v0 != 0) {
      FUN_00186f58();
    }
    temp_v0 = FUN_003e46f4(0xe);
    if (temp_v0 != 0) {
      FUN_00186f58();
    }
    temp_v0 = FUN_003e46f4(0xf);
    if (temp_v0 != 0) {
      FUN_00186f58();
    }
  }
  return;
}

} /* extern "C" */
