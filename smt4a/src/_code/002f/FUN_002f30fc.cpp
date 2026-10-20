#include "romwright_types.h"

extern "C" {

extern int FUN_00128eac(int);
extern int FUN_002f8520(int);


int FUN_002f30fc(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002f8520(param_1 + 0x30);
  temp_v0 = FUN_00128eac(temp_v0 - 0x28);
  return temp_v0 - 8;
}

} /* extern "C" */
