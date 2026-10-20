#include "romwright_types.h"

extern "C" {

int FUN_00270028(int);
int FUN_00275dec(void);
int FUN_0028dc68(int);
int FUN_0028dc98(...);
int FUN_002b8e84(int);

/* Supplied declaration required: FUN_00270028. */
/* Supplied declaration required: FUN_00275dec. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028dc68. */
/* Supplied declaration required: FUN_0028dc98. */
/* Supplied declaration required: FUN_002b8e84. */


unsigned char FUN_002fb4fc(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 == 0) {
    FUN_0028dc98(1);
    FUN_00275dec();
    FUN_00270028(3);
    return 0;
  }
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 1) {
    temp_v0 = FUN_002893d8();
    if (temp_v0 >= 3) {
      FUN_0028dc98(0xffffffff);
      FUN_0028dc68(0);
    }
    return temp_v0 >= 3;
  }
  FUN_002b8e84(0x1000184);
  FUN_00270028(1);
  return 0;
}

} /* extern "C" */
