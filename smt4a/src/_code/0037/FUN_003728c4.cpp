#include "romwright_types.h"

extern "C" {

int FUN_004de8b8(unsigned int, int, int, int);

extern unsigned int DAT_0057113c; /* 0x57113c */

/* Supplied declaration required: FUN_004de8b8. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_003728c4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_004ee568(DAT_0057113c);
  int p = *(int *)(temp_v0 + 0x28);
  *(unsigned short *)(p + 0x1be) = 0xb;
  FUN_004de8b8(DAT_0057113c,0xf,0,1);
  return 1;
}

} /* extern "C" */
