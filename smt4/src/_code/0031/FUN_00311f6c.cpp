#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);
int FUN_002939f4(void);

extern unsigned long long FUN_002499b4(void);
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002939f4. */
extern int FUN_00296cc8(void);


unsigned int FUN_00311f6c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned long long temp_v4;
  
  temp_v1 = FUN_00296cc8();
  FUN_002939f4();
  temp_v4 = FUN_002499b4();
  temp_v2 = (unsigned int)((unsigned long long)temp_v4 >> 0x20);
  if ((int)temp_v4 != 0) {
    temp_v0 = *(unsigned short *)((int)temp_v4 + temp_v1 * 2 + 0x1f2);
    temp_v3 = (temp_v0 & 0xfc00) != 0;
    if (temp_v3) {
      temp_v2 = 2;
    }
    if (!temp_v3 || temp_v2 == temp_v0 >> 10) {
      FUN_0028dcb0(1);
      return 1;
    }
  }
  FUN_0028dcb0(0);
  return 1;
}

} /* extern "C" */
