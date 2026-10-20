#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_0037f7d0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = FUN_00236038();
  temp_v2 = FUN_004ee568(DAT_0057113c);
  temp_v3 = *(unsigned int *)(temp_v2 + 0x28);
  temp_v0 = *(unsigned short *)(temp_v3 + temp_v1 * 2 + 0x152);
  temp_v4 = (temp_v0 & 0xfc00) != 0;
  if (temp_v4) {
    temp_v3 = 2;
  }
  if (!temp_v4 || temp_v3 == temp_v0 >> 10) {
    FUN_003283ac(1);
    return 1;
  }
  FUN_003283ac(0);
  return 1;
}

} /* extern "C" */
