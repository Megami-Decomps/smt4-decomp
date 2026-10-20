#include "romwright_types.h"

extern "C" {

int FUN_00282924(int, int);
int btlGetMainState(void);
int FUN_002954bc(unsigned int);
int scrGetArg(int);
int FUN_003bc8f8(unsigned int, unsigned int);

/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_002954bc. */
/* Supplied declaration required: scrGetArg. */
extern unsigned int FUN_002a8740(int);
/* Supplied declaration required: FUN_003bc8f8. */


unsigned int FUN_002f1484(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  if (temp_v0 < 0x6d) {
    btlGetMainState();
    temp_v2 = btlGetMainState();
    temp_v2 = FUN_00282924(temp_v2,temp_v0);
    temp_v3 = *(unsigned int *)(temp_v2 + 0x27c);
  }
  else {
    temp_v3 = FUN_002a8740(temp_v0 - 0x6d);
  }
  FUN_003bc8f8(temp_v3,temp_v1);
  FUN_002954bc(temp_v3);
  return 1;
}

} /* extern "C" */
