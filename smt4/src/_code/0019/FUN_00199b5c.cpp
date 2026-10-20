#include "romwright_types.h"

extern "C" {

extern int jobFind(unsigned int);


unsigned int FUN_00199b5c(int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  
  puVar2 = *(unsigned int **)(param_1 + 4);
  if ((puVar2 != (unsigned int *)0x0) &&
     ((temp_v0 = jobFind(*puVar2), temp_v0 != 0 || (*(char *)(puVar2 + 1) == '\0')))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
