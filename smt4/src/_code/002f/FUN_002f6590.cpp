#include "romwright_types.h"

extern "C" {

int FUN_002a780c(unsigned int);
int FUN_002b8cc8(void);
int asdMemFree(unsigned int *);
int FUN_002c424c(unsigned int *, int, unsigned int);
int jobStop(unsigned int, int);

extern unsigned int *DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002c424c. */
/* Supplied declaration required: jobStop. */


void FUN_002f6590(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0044e190;
  temp_v0 = 0;
  for (temp_v0 = 0; temp_v0 < (int)(unsigned int)*(unsigned char *)(puVar1 + 0x120); temp_v0++) {
    FUN_002b8cc8();
  }
  *(unsigned char *)(puVar1 + 0x120) = 0;
  FUN_002c424c(puVar1 + 0x10b,0x29,0xffffffff);
  FUN_002a780c(puVar1[0x8a8]);
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0044e190 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
