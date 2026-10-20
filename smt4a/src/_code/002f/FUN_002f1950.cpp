#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002eabfc(void);
extern unsigned char *FUN_002eac18(unsigned int, unsigned int);


unsigned char FUN_002f1950(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_002eabfc();
  puVar2 = (unsigned char *)FUN_002eac18(param_1,temp_v0);
  return *puVar2;
}

} /* extern "C" */
