/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020f5e8` (_code @ 0x20f5e8, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_00439ce4; /* 0x439ce4 */
extern unsigned int DAT_0049356c; /* 0x49356c */
extern unsigned int DAT_00493570; /* 0x493570 */

/* Supplied declaration required: FUN_001c0a44. */
extern int FUN_002bf244(unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0020f5e8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  temp_v0 = FUN_002c08f0();
  temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v0 + 0x34));
  if (temp_v1 != 0) {
    FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x34),0);
  }
  temp_v0 = 0;
  do {
    FUN_001c0a44((&DAT_0049356c)[temp_v0 * 2],1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  temp_v0 = 0;
  do {
    if ((int *)(&DAT_00493570)[temp_v0 * 2] != (int *)0x0) {
      (**(romwright_code **)(*(int *)(&DAT_00493570)[temp_v0 * 2] + 8))();
    }
    puVar3 = (unsigned int *)(&DAT_0049356c)[temp_v0 * 2];
    if (puVar3 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar3)(puVar3);
      (**(romwright_code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
      (&DAT_0049356c)[temp_v0 * 2] = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  if (DAT_00439ce4 != (int *)0x0) {
    (**(romwright_code **)(*DAT_00439ce4 + 4))();
  }
  DAT_00439ce4 = (int *)0x0;
  return;
}
