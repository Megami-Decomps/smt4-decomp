#include "romwright_types.h"

extern "C" {

int FUN_002c0a9c(int, int, int);

/* Supplied declaration required: FUN_002c0a9c. */
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


void FUN_00107210(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  int temp_v3;
  
  temp_v0 = dataTableGet(2,3);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      puVar4 = (unsigned char *)(temp_v1 + temp_v3 * 2);
      FUN_002c0a9c(*puVar4,puVar4[1],0);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return;
}

} /* extern "C" */
