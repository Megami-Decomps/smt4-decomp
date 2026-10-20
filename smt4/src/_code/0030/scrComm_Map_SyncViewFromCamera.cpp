#include "romwright_types.h"

extern "C" {

int FUN_00273c54(void);
int FUN_00273d34(void);
int FUN_00273f5c(void);
int FUN_00275e18(void);
int FUN_0027d908(void);
int FUN_0027d948(void);
int FUN_002d1b48(void);

/* Supplied declaration required: FUN_00273c54. */
/* Supplied declaration required: FUN_00273d34. */
/* Supplied declaration required: FUN_00273f5c. */
/* Supplied declaration required: FUN_00275e18. */
/* Supplied declaration required: FUN_0027d908. */
/* Supplied declaration required: FUN_0027d948. */
extern int FUN_002b879c(void);
/* Supplied declaration required: FUN_002d1b48. */
extern int MapMode_IsBusy(void);


unsigned int scrComm_Map_SyncViewFromCamera(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  FUN_00273f5c();
  FUN_0027d908();
  temp_v0 = MapMode_IsBusy();
  if (temp_v0 != 0) {
    FUN_0027d948();
    FUN_0027d908();
    FUN_00273d34();
    FUN_00273c54();
    FUN_00275e18();
  }
  else {
    temp_v0 = FUN_002b879c();
    if (temp_v0 != 0) {
      FUN_0027d948();
      FUN_0027d908();
      FUN_002d1b48();
    }
  }
  return 1;
}

} /* extern "C" */
