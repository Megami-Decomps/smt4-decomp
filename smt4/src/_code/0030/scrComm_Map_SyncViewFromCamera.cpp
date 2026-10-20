#include "romwright_types.h"

extern "C" {

int FUN_00273c54(void);
int FUN_00273d34(void);
int FUN_00273f5c(void);
int FUN_00275e18(void);
int FUN_0027d908(void);
int FUN_0027d948(void);
int lmapMainUpdateObj(void);

/* Supplied declaration required: FUN_00273c54. */
/* Supplied declaration required: FUN_00273d34. */
/* Supplied declaration required: FUN_00273f5c. */
/* Supplied declaration required: FUN_00275e18. */
/* Supplied declaration required: FUN_0027d908. */
/* Supplied declaration required: FUN_0027d948. */
extern int lmapMainIsRunning(void);
/* Supplied declaration required: lmapMainUpdateObj. */
extern int mapMainIsBusy(void);


unsigned int scrComm_Map_SyncViewFromCamera(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  FUN_00273f5c();
  FUN_0027d908();
  temp_v0 = mapMainIsBusy();
  if (temp_v0 != 0) {
    FUN_0027d948();
    FUN_0027d908();
    FUN_00273d34();
    FUN_00273c54();
    FUN_00275e18();
  }
  else {
    temp_v0 = lmapMainIsRunning();
    if (temp_v0 != 0) {
      FUN_0027d948();
      FUN_0027d908();
      lmapMainUpdateObj();
    }
  }
  return 1;
}

} /* extern "C" */
