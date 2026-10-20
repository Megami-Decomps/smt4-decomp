#include "romwright_types.h"

extern "C" {

int FUN_003de188(int, int);
int FUN_00487110(int);
int FUN_0048a378(int);
int FUN_004cf978(int, int);

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_003de188. */
/* Supplied declaration required: FUN_00487110. */
/* Supplied declaration required: FUN_0048a378. */
/* Supplied declaration required: FUN_004cf978. */


void FUN_00212118(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_003de188(1,0);
  temp_v0 = DAT_00587f28;
  if (DAT_00587f28 != 0) {
    FUN_004cf978(DAT_00587f28 + 0x206bc,8);
    FUN_00487110(temp_v0 + 0x68);
    FUN_0048a378(temp_v0 + 0x68);
  }
  temp_v0 = DAT_00587f28;
  *(unsigned char *)(temp_v0 + 10) = 1;
  return;
}

} /* extern "C" */
