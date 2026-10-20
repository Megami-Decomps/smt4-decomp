#include "romwright_types.h"

extern "C" {

int FUN_00227218(void);
int FUN_003d9e88(void);

extern unsigned int DAT_00434290; /* 0x434290 */
extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_00227218. */
extern int FUN_002404e8(int);
extern int FUN_0027e6bc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003d9e88. */


unsigned int FUN_003367c4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0027e6bc(DAT_00434290,0);
  if (temp_v0 > 0) {
    temp_v1 = 0;
  }
  else {
    temp_v0 = FUN_002404e8(DAT_00435d18);
    temp_v1 = temp_v0;
    if (temp_v0 != 0) {
      if (DAT_00435d18 != 0) {
        FUN_003d9e88();
      }
      *(unsigned int *)(DAT_004342c8 + 0x634) = *(unsigned int *)(DAT_004342c8 + 0x634) & 0xffffbfff;
      FUN_00227218();
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
