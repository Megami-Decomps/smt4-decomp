#include "romwright_types.h"

extern "C" {

int FUN_00280d2c(void);

extern int jobIsValid(unsigned int);
extern int jobGetWork(unsigned int);
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_00280d2c. */
extern int FUN_002deb84(void);


unsigned int FUN_002c1f48(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = FUN_002deb84();
  if (temp_v1 != 0) {
    temp_v1 = jobIsValid(temp_v0);
    if (temp_v1 == 0) {
      return 1;
    }
  }
  else {
    temp_v1 = jobIsValid(temp_v0);
    if (temp_v1 == 0) {
      return 1;
    }
    temp_v1 = jobGetWork(temp_v0);
    if (*(int *)(temp_v1 + 0x18) != 0) {
      FUN_00280d2c();
    }
    *(unsigned int *)(temp_v1 + 0xc) = 0;
    *(unsigned int *)(temp_v1 + 8) = 3;
  }
  return 0;
}

} /* extern "C" */
