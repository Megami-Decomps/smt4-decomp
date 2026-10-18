/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a594` (_code @ 0x33a594, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_0023e688. */
/* Supplied declaration required: FUN_0027e00c. */
extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_003ccb70. */
/* Supplied declaration required: FUN_003cf664. */
/* Supplied declaration required: FUN_003db7e8. */
/* Supplied declaration required: FUN_003dc104. */


void FUN_0033a594(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0027eb98(DAT_0043427c);
  FUN_003cf664(DAT_0043427c,temp_v0,1);
  temp_v1 = 0;
  temp_v2 = 0x6d;
  do {
    temp_v2 = temp_v2 - 1;
    temp_v3 = param_1 + temp_v1 * 0x1c;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v3 + 0x2318) = 0xffffffff;
    *(unsigned int *)(temp_v3 + 0x231c) = 0xffffffff;
    *(unsigned int *)(temp_v3 + 0x2330) = 0xffffffff;
  } while (temp_v2 != 0);
  FUN_003db7e8(DAT_00435d18);
  FUN_0023e688(DAT_0043427c,temp_v0,5,0);
  FUN_003ccb70(DAT_0043427c,temp_v0,1);
  FUN_0027e00c(DAT_00435d18);
  FUN_003dc104(DAT_00435d18,*(unsigned int *)(temp_v0 + 0x594));
  return;
}
