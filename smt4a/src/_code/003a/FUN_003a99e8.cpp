#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_003ef960(unsigned int, int);

extern unsigned int btlGetMainState(void);
extern int dataTableGetEntries(void);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003ef960. */


unsigned int FUN_003a99e8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  FUN_003ef960(temp_v2,9);
  temp_v3 = dataTableGetEntries();
  scrSetResult(*(unsigned short *)(temp_v3 + temp_v0 * 0xc + temp_v1 * 2));
  return 1;
}

} /* extern "C" */
