#include "romwright_types.h"

extern "C" {

int sharedRefInitEmpty(int);

extern unsigned char DAT_0055b00c; /* 0x55b00c */

/* Supplied declaration required: sharedRefInitEmpty. */
extern int destroyObj0055ae64(unsigned int *);
extern int strDestroy(int);


void FUN_00121540(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055b00c;
  temp_v0 = destroyObj0055ae64(param_1 + 0xd);
  temp_v0 = strDestroy(temp_v0 - 0x28);
  sharedRefInitEmpty(temp_v0 - 0xc);
  return;
}

} /* extern "C" */
