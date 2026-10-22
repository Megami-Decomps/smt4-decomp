#include "romwright_types.h"

extern "C" {

int _ZN9Obj5593b8D1Ev(int);

extern unsigned char DAT_0055b00c; /* 0x55b00c */

/* Supplied declaration required: _ZN9Obj5593b8D1Ev. */
extern int destroyObj0055ae64(unsigned int *);
extern int strDestroy(int);


void FUN_00121540(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055b00c;
  temp_v0 = destroyObj0055ae64(param_1 + 0xd);
  temp_v0 = strDestroy(temp_v0 - 0x28);
  _ZN9Obj5593b8D1Ev(temp_v0 - 0xc);
  return;
}

} /* extern "C" */
