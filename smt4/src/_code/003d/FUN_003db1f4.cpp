#include "romwright_types.h"

extern "C" {

extern int FUN_002adee0(unsigned int);


unsigned int FUN_003db1f4(int param_1,int param_2)
{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *p;
  
  if (param_2 != 0 && param_2 != 0x16) {
    temp_v2 = 0;
    do {
      temp_v0 = param_1 + temp_v2 * 0x28;
      p = (unsigned int *)(temp_v0 + 400);
      if ((p[9] & 2) != 0) {
        temp_v1 = FUN_002adee0(*p);
        if (temp_v1 == 0) {
          return 0;
        }
        p[9] = p[9] | 4;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x32);
  }
  return 1;
}
} /* extern "C" */
