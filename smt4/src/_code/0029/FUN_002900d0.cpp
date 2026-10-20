#include "romwright_types.h"

extern "C" {

int FUN_0028975c(int, int, int);

/* Supplied declaration required: FUN_0028975c. */
extern int FUN_002b6b20(void);


void FUN_002900d0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002b6b20();
  if (((*(unsigned short *)(temp_v0 + 0x608) & 1) != 0) &&
     (temp_v1 = FUN_002b6b20(), (*(unsigned short *)(temp_v1 + 0x608) & 1) != 0)) {
    if (*(unsigned short *)(temp_v1 + 0x46) == 0x2a3) {
      FUN_0028975c(0x262,0,1);
    }
    if (*(unsigned short *)(temp_v1 + 0x46) == 0x2a5) {
      FUN_0028975c(0x263,0,1);
    }
    *(unsigned short *)(temp_v1 + 0x46) = 0;
  }
  *(unsigned short *)(temp_v0 + 0x608) = *(unsigned short *)(temp_v0 + 0x608) & 0xfffe;
  *(unsigned short *)(temp_v0 + 0x46) = 0;
  *(unsigned short *)(temp_v0 + 0x604) = 0;
  return;
}

} /* extern "C" */
