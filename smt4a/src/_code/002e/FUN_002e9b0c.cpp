#include "romwright_types.h"

extern "C" {

int FUN_001140e8(unsigned int, unsigned int);

/* Supplied declaration required: FUN_001140e8. */
extern unsigned int FUN_002e9af4(void);


void FUN_002e9b0c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002e9af4();
  FUN_001140e8(temp_v0,*(unsigned int *)(param_1 + 0x44));
  *(unsigned int *)(param_1 + 0x44) = 0;
  return;
}

} /* extern "C" */
