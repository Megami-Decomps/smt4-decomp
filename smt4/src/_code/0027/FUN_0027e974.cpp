#include "romwright_types.h"

extern "C" {

extern int FUN_00234660(int);
extern int FUN_00263c34(int);


int FUN_0027e974(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00234660(param_1 + 0x2e8);
  temp_v0 = FUN_00263c34(temp_v0 - 0x34);
  return temp_v0 - 0x2b4;
}

} /* extern "C" */
