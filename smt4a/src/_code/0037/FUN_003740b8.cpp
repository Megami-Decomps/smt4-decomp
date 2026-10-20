#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_00236038(int);
int FUN_003f0e20(int, int);
int FUN_004bcd1c(unsigned int, unsigned int);
int FUN_004bd2b4(unsigned int);

/* Supplied declaration required: FUN_0014aa78. */
extern unsigned int FUN_001ab854(int);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004bcd1c. */
/* Supplied declaration required: FUN_004bd2b4. */


unsigned int FUN_003740b8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  if (temp_v0 < 0x6d) {
    FUN_0014aa78();
    temp_v2 = FUN_0014aa78();
    temp_v2 = FUN_003f0e20(temp_v2,temp_v0);
    temp_v3 = *(unsigned int *)(temp_v2 + 0x3fc);
  }
  else {
    temp_v3 = FUN_001ab854(temp_v0 - 0x6d);
  }
  FUN_004bcd1c(temp_v3,temp_v1);
  FUN_004bd2b4(temp_v3);
  return 1;
}

} /* extern "C" */
