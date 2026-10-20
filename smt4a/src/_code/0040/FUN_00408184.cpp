/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00408184` (_code @ 0x408184, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0040a378(unsigned int);
int FUN_0040a3a0(unsigned int);
int FUN_0040a3c8(unsigned int);
int FUN_0040a5e4(unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int gameGetCounters(void);
/* Supplied declaration required: FUN_0040a378. */
/* Supplied declaration required: FUN_0040a3a0. */
/* Supplied declaration required: FUN_0040a3c8. */
/* Supplied declaration required: FUN_0040a5e4. */


void FUN_00408184(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = gameGetCounters();
  puVar2 = (unsigned int *)(temp_v0 + param_1 * 4);
  if (param_2 < ~*puVar2) {
    *puVar2 = *puVar2 + param_2;
  }
  else {
    *puVar2 = 0xffffffff;
  }
  temp_v0 = gameGetCounters();
  puVar2 = (unsigned int *)(temp_v0 + param_1 * 4 + 0x200);
  if (param_2 < ~*puVar2) {
    *puVar2 = *puVar2 + param_2;
  }
  else {
    *puVar2 = 0xffffffff;
  }
  if (param_1 == 2) {
    FUN_0040a3c8(param_2);
    return;
  }
  if (param_1 == 9) {
    FUN_0040a5e4(param_2);
    return;
  }
  if (param_1 == 0x13) {
    FUN_0040a378(param_2);
    return;
  }
  if (param_1 != 0x26) {
    return;
  }
  FUN_0040a3a0(param_2);
  return;
}

} /* extern "C" */
