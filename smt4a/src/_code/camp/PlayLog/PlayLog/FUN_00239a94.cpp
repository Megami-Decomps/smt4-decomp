#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int FUN_0019a5a0(int);
int FUN_0019a7f4(int, int);
int FUN_001add24(int);
int FUN_002e132c(int);

extern int DAT_0057f278; /* 0x57f278 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_002e132c. */


void FUN_00239a94(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f278;
  FUN_0019a7f4(0x25,0);
  FUN_002e132c(0x25);
  FUN_001add24(0x37);
  temp_v1 = 0;
  if (temp_v1 < *(short *)(temp_v0 + 0x358)) {
    do {
      FUN_001641c4();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(temp_v0 + 0x358));
  }
  if (temp_v0 != 0) {
    FUN_0019a5a0(temp_v0);
    DAT_0057f278 = 0;
  }
  return;
}

} /* extern "C" */
