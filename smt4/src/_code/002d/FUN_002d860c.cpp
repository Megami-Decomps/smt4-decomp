#include "romwright_types.h"

extern "C" {

int FUN_0028975c(int, unsigned int, int);
int FUN_002c09d0(int);

extern int DAT_0043e360; /* 0x43e360 */

/* Supplied declaration required: FUN_0028975c. */
extern int FUN_002b8cec(unsigned int);
extern int FUN_002bfde4(unsigned int);
/* Supplied declaration required: FUN_002c09d0. */


unsigned int FUN_002d860c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_002b8cec(3);
  if ((temp_v0 != 0) || (temp_v0 = FUN_002b8cec(0xc), temp_v0 != 0)) {
    DAT_0043e360 = DAT_0043e360 + 1;
  }
  temp_v0 = FUN_002b8cec(6);
  if ((temp_v0 != 0) || (temp_v0 = FUN_002b8cec(0xf), temp_v0 != 0)) {
    DAT_0043e360 = DAT_0043e360 + 0x10;
  }
  temp_v0 = FUN_002b8cec(4);
  if ((temp_v0 != 0) || (temp_v0 = FUN_002b8cec(0xd), temp_v0 != 0)) {
    DAT_0043e360 = DAT_0043e360 - 1;
  }
  temp_v0 = FUN_002b8cec(5);
  if ((temp_v0 != 0) || (temp_v0 = FUN_002b8cec(0xe), temp_v0 != 0)) {
    DAT_0043e360 = DAT_0043e360 - 0x10;
  }
  temp_v0 = FUN_002b8cec(8);
  if (temp_v0 != 0) {
    DAT_0043e360 = DAT_0043e360 - 0x100;
  }
  temp_v0 = FUN_002b8cec(7);
  if (temp_v0 != 0) {
    DAT_0043e360 = DAT_0043e360 + 0x100;
  }
  if (DAT_0043e360 >= 0x800) {
    DAT_0043e360 = DAT_0043e360 - 0x800;
  }
  if (DAT_0043e360 < 0) {
    DAT_0043e360 = DAT_0043e360 + 0x800;
  }
  temp_v0 = FUN_002bfde4(0);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c09d0(DAT_0043e360);
    FUN_0028975c(DAT_0043e360,temp_v1 ^ 1,1);
  }
  temp_v0 = FUN_002bfde4(1);
  if (temp_v0 != 0) {
    temp_v2 = 1;
  }
  else {
    temp_v4 = 0;
    temp_v0 = DAT_0043e360 / 0x100;
    do {
      temp_v3 = 0;
      do {
        FUN_002c09d0(temp_v3 + temp_v4 * 0x10 + temp_v0 * 0x100);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x10);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x10);
    temp_v2 = 0;
  }
  return temp_v2;
}

} /* extern "C" */
