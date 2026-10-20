#include "romwright_types.h"

extern "C" {

int FUN_00408c3c(unsigned int);
int FUN_00418960(unsigned int);

extern unsigned int *jobGetWork(void);
/* Supplied declaration required: FUN_00408c3c. */
/* Supplied declaration required: FUN_00418960. */


unsigned int FUN_00379d18(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)jobGetWork();
  temp_v0 = *(char *)(puVar2 + 2);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x02') {
        FUN_00418960(puVar2[1]);
      }
    }
    else {
      FUN_00408c3c(*puVar2);
    }
  }
  return 0;
}

} /* extern "C" */
