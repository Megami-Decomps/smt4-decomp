#include "romwright_types.h"

extern "C" {

int FUN_002e995c(unsigned char [32]);
int FUN_002fd394(int, unsigned int, unsigned char [32]);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002e995c. */
extern int *FUN_002ea704(void);
extern unsigned int FUN_002ea93c(unsigned int);
/* Supplied declaration required: FUN_002fd394. */


void FUN_00111910(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned char temp_v2 [32];
  
  FUN_002e995c(temp_v2);
  temp_v0 = FUN_002ea93c(param_2);
  piVar2 = (int *)FUN_002ea704();
  temp_v1 = (**(romwright_code **)(*piVar2 + 0x28))(piVar2);
  FUN_002fd394(*(int *)(temp_v1 + 0xc) + 0x80,temp_v0,temp_v2);
  return;
}

} /* extern "C" */
