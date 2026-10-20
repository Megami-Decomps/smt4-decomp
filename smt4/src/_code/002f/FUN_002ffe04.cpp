#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(unsigned int);
long long aeabi_idivmod(int, unsigned int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(void);
/* Supplied declaration required: aeabi_idivmod. */


unsigned int FUN_002ffe04(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002939f4();
  temp_v2 = (unsigned int)((unsigned long long)aeabi_idivmod(*(unsigned char *)(temp_v1 + 0x44b4) + 1,temp_v0) >> 0x20);
  FUN_0028dcb0(temp_v2);
  return 1;
}

} /* extern "C" */
