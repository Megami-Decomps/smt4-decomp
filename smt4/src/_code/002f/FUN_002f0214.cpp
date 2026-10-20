#include "romwright_types.h"

extern "C" {

int FUN_0024c614(unsigned int, int, int);

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_0024c614. */
extern int FUN_0027e928(unsigned int);


unsigned int FUN_002f0214(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0027e928(DAT_0043427c);
  int p = *(int *)(temp_v0 + 0x28);
  *(unsigned short *)(p + 0x14c) = 0xb;
  FUN_0024c614(DAT_0043427c,0xf,0);
  return 1;
}

} /* extern "C" */
