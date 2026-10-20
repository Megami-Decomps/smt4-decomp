#include "romwright_types.h"

extern "C" {

int FUN_00399b30(int);
int FUN_0039bbd4(int);
int FUN_003c28a8(int, int);
int NaviMain_Start(int, int);

extern int DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_00399b30. */
/* Supplied declaration required: FUN_0039bbd4. */
/* Supplied declaration required: FUN_003c28a8. */
/* Supplied declaration required: NaviMain_Start. */


void NaviMode_Enter(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  NaviMain_Start(1,0);
  temp_v0 = DAT_0044cdf0;
  if (DAT_0044cdf0 != 0) {
    FUN_003c28a8(DAT_0044cdf0 + 0x12334,8);
    FUN_00399b30(temp_v0 + 0x40);
    FUN_0039bbd4(temp_v0 + 0x40);
  }
  temp_v0 = DAT_0044cdf0;
  *(unsigned char *)(temp_v0 + 10) = 1;
  return;
}

} /* extern "C" */
