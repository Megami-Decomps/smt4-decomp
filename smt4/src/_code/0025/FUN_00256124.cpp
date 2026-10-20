#include "romwright_types.h"

extern "C" {

int FUN_0028975c(int, int, int);

/* Supplied declaration required: FUN_0028975c. */
extern int gameGetOptions(void);


void FUN_00256124(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = gameGetOptions();
  if ((*(unsigned short *)(temp_v0 + 0x608) & 1) != 0) {
    if (*(unsigned short *)(temp_v0 + 0x46) == 0x2a3) {
      FUN_0028975c(0x262,0,1);
    }
    if (*(unsigned short *)(temp_v0 + 0x46) == 0x2a5) {
      FUN_0028975c(0x263,0,1);
    }
    *(unsigned short *)(temp_v0 + 0x46) = 0;
  }
  return;
}

} /* extern "C" */
