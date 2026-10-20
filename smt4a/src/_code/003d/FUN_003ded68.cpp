/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ded68` (_code @ 0x3ded68, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);

extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(int);
extern int FUN_003df390(int);
extern int partyEntryFlagsBit3(void);
extern int partyEntryFlagsBit1(int);


unsigned int FUN_003ded68(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = partyEntryFlagsBit3();
  if (((temp_v0 == 0) &&
      (((temp_v0 = partyEntryFlagsBit1(param_1), temp_v0 == 0 || (temp_v0 = FUN_001ada74(param_1), temp_v0 == 0))
       && (temp_v0 = FUN_003df390(param_1), temp_v0 != 0)))) && (FUN_001ad9b4(), param_1 != 0)) {
    temp_v0 = FUN_001801a4();
    if ((*(short *)(param_1 + 0x120) != 0) &&
       ((int)*(short *)(param_1 + 0x120) <= (int)(unsigned int)*(unsigned short *)(temp_v0 + 0x62))) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
