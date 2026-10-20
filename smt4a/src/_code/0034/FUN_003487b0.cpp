#include "romwright_types.h"

extern "C" {

int FUN_001801a4(void);
int FUN_002c52e0(int);
int FUN_003315c4(void);
int FUN_00370fe8(unsigned int);

extern int FUN_00162880(void);
/* Supplied declaration required: FUN_001801a4. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_002c52e0. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003315c4. */
/* Supplied declaration required: FUN_00370fe8. */


unsigned char FUN_003487b0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  FUN_001801a4();
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    FUN_002c52e0(3);
    FUN_00370fe8(temp_v0);
  }
  temp_v1 = FUN_00162880();
  if (temp_v1 != 0) {
    FUN_003315c4();
  }
  return temp_v1 != 0;
}

} /* extern "C" */
