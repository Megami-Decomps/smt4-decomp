#include "romwright_types.h"

extern "C" {

int FUN_002ecac4(int);
int FUN_002f6bf0(unsigned int);
int FUN_002faf62(unsigned int *);

extern unsigned char DAT_005592e4; /* 0x5592e4 */

extern int FUN_002e9318(int);
extern int FUN_002ea00c(int);
extern int FUN_002ea2d2(int);
extern int FUN_002ec890(int);
/* Supplied declaration required: FUN_002ecac4. */
/* Supplied declaration required: FUN_002f6bf0. */
/* Supplied declaration required: FUN_002faf62. */
extern int FUN_002fb028(unsigned int *);


void FUN_00110244(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_005592e4;
  FUN_002f6bf0(param_1[0x1e]);
  FUN_002faf62(param_1);
  temp_v0 = FUN_002fb028(param_1 + 0x4c);
  temp_v0 = FUN_002ea00c(temp_v0 - 0x60);
  temp_v0 = FUN_002ec890(temp_v0 - 0x24);
  temp_v0 = FUN_002ea2d2(temp_v0 - 0x10);
  temp_v0 = FUN_002ea2d2(temp_v0 - 8);
  temp_v0 = FUN_002ea2d2(temp_v0 - 8);
  temp_v0 = FUN_002e9318(temp_v0 - 0xc);
  temp_v0 = FUN_002e9318(temp_v0 - 0x10);
  FUN_002ecac4(temp_v0 - 0x70);
  return;
}

} /* extern "C" */
