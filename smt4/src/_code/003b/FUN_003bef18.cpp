#include "romwright_types.h"

extern "C" {

extern int flagWordTestBit(int, unsigned int);
extern int FUN_002a8740(void);
extern int FUN_002a8764(void);


void FUN_003bef18(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_002a8764();
  for (temp_v3 = 0; temp_v3 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x910b); temp_v3++) {
    if (*(signed char *)(temp_v0 + temp_v3 + 0x90f0) >= 0) {
      temp_v1 = FUN_002a8740();
      temp_v2 = flagWordTestBit(temp_v1,10);
      if (temp_v2 == 0) {
        *(unsigned char *)(temp_v1 + 0x600) = 0;
      }
      else {
        *(char *)(temp_v1 + 0x600) = *(char *)(temp_v1 + 0x600) + '\x01';
      }
    }
  }
  return;
}

} /* extern "C" */
