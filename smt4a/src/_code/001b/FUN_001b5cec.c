/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b5cec` (_code @ 0x1b5cec, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00643380; /* 0x643380 */
extern unsigned short DAT_006446ec; /* 0x6446ec */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Supplied declaration required: FUN_001a08d8. */
/* Supplied declaration required: FUN_001af148. */
extern int FUN_001afa44(void);
/* Supplied declaration required: FUN_001cd448. */


void FUN_001b5cec(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001afa44();
  *(unsigned char *)(temp_v0 + 0xf) = 1;
  do {
    FUN_001af148(temp_v0 + 0x40);
    if (*(romwright_code **)(temp_v0 + 0x28) != (romwright_code *)0x0) {
      (**(romwright_code **)(temp_v0 + 0x28))();
    }
    FUN_001cd448(&DAT_00643380,0,*(unsigned int *)((unsigned int)DAT_006446ec * 8 + 0x6446c0));
    FUN_001cd448(&DAT_00643380,1,*(unsigned int *)((unsigned int)DAT_006446ec * 8 + 0x6446c4));
    coproc_moveto_Data_Synchronization(0);
    FUN_001a08d8(temp_v0 + 0x48);
  } while (*(char *)(temp_v0 + 0xf) != '\0');
  return;
}
