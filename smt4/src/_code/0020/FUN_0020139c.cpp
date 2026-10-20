#include "romwright_types.h"

extern "C" {

int FUN_00152bec(void);

/* Supplied declaration required: FUN_00152bec. */
extern int FUN_002893d8(void);
extern unsigned int FUN_00296cc8(void);
extern int FUN_002bf244(unsigned int);
extern int FUN_002c08f0(unsigned int);


unsigned int FUN_0020139c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002893d8();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002bf244(temp_v0);
    if (temp_v1 == 0) {
      return 1;
    }
  }
  else {
    temp_v1 = FUN_002bf244(temp_v0);
    if (temp_v1 == 0) {
      return 1;
    }
    temp_v1 = FUN_002c08f0(temp_v0);
    if (*(int *)(temp_v1 + 0x18) != 0) {
      FUN_00152bec();
    }
    *(unsigned int *)(temp_v1 + 0xc) = 0;
    *(unsigned int *)(temp_v1 + 8) = 3;
  }
  return 0;
}

} /* extern "C" */
