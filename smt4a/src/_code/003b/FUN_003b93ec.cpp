#include "romwright_types.h"

extern "C" {

unsigned int FUN_00201890(unsigned int);
int FUN_00222104(void);
int FUN_00222434(void);

/* Supplied declaration required: FUN_00201890. */
extern unsigned int FUN_00201940(unsigned int);
/* Supplied declaration required: FUN_00222104. */
/* Supplied declaration required: FUN_00222434. */


void FUN_003b93ec(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(param_2 + 0x144) != 0) {
    if (*(int *)(param_1 + 0x144) != 0) {
      FUN_00222104();
    }
    temp_v0 = FUN_00201890(*(unsigned int *)(param_2 + 0x144));
    *(unsigned int *)(param_1 + 0x144) = temp_v0;
  }
  else if (*(int *)(param_2 + 0x140) != 0) {
    if (*(int *)(param_1 + 0x140) != 0) {
      FUN_00222434();
    }
    temp_v0 = FUN_00201940(*(unsigned int *)(param_2 + 0x140));
    *(unsigned int *)(param_1 + 0x140) = temp_v0;
    return;
  }
  return;
}

} /* extern "C" */
