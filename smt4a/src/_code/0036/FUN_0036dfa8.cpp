#include "romwright_types.h"

extern "C" {

int asdMemFree(int);
int FUN_0019a7f4(int, int);
int FUN_00237210(unsigned int);
int asdTMTexTableFreeEntry(int);

extern unsigned char DAT_0057f208; /* 0x57f208 */

extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */


void FUN_0036dfa8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobGetWork();
  FUN_00237210(*(unsigned int *)(temp_v0 + 0xc));
  FUN_00237210(*(unsigned int *)(temp_v0 + 0x10));
  FUN_0019a7f4(0x22,0);
  asdTMTexTableFreeEntry(0x22);
  asdMemFree(temp_v0);
  (*(unsigned int *)((unsigned char *)&DAT_0057f208 + 0x8)) = 0;
  return;
}

} /* extern "C" */
