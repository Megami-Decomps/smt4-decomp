#include "romwright_types.h"

extern "C" {

extern int FUN_002a8740(int);
extern int FUN_002a8764(void);
extern int FUN_002a8778(void);


int FUN_002b066c(unsigned int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_002a8778();
  if (0 < temp_v0) {
    do {
      temp_v0 = FUN_002a8764();
      temp_v0 = FUN_002a8740((int)*(signed char *)(temp_v0 + temp_v1 + 0x90f0));
      if (*(unsigned short *)(temp_v0 + 0x46) == param_1) {
        return temp_v0;
      }
      temp_v1 = temp_v1 + 1;
      temp_v0 = FUN_002a8778();
    } while (temp_v1 < temp_v0);
  }
  return 0;
}

} /* extern "C" */
