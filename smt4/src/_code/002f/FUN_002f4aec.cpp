#include "romwright_types.h"

extern "C" {

int FUN_0034291c(unsigned int);
int FUN_00349214(unsigned int);

extern unsigned int *FUN_002c08f0(void);
/* Supplied declaration required: FUN_0034291c. */
/* Supplied declaration required: FUN_00349214. */


unsigned int FUN_002f4aec(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)FUN_002c08f0();
  temp_v0 = *(char *)(puVar2 + 2);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x02') {
        FUN_00349214(puVar2[1]);
      }
    }
    else {
      FUN_0034291c(*puVar2);
    }
  }
  return 0;
}

} /* extern "C" */
