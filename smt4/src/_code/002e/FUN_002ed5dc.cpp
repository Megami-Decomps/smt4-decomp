#include "romwright_types.h"

extern "C" {

int FUN_002a780c(unsigned int);
int asdTMTexTableFreeEntry(int);
int FUN_002ae898(int, int);
int asdMemFree(int);

extern unsigned char DAT_0043dc20; /* 0x43dc20 */

/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_002ae898. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */


void FUN_002ed5dc(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobGetWork();
  FUN_002a780c(*(unsigned int *)(temp_v0 + 0xc));
  FUN_002a780c(*(unsigned int *)(temp_v0 + 0x10));
  FUN_002ae898(0x2d,0);
  asdTMTexTableFreeEntry(0x2d);
  asdMemFree(temp_v0);
  (*(unsigned int *)((unsigned char *)&DAT_0043dc20 + 0x8)) = 0;
  return;
}

} /* extern "C" */
