#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_003ef960(unsigned int, int);

extern unsigned int btlGetMainState(void);
extern int dataTableGetEntries(void);
extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003ef960. */


unsigned int FUN_003c68e8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  FUN_003ef960(temp_v1,4);
  temp_v2 = dataTableGetEntries();
  scrSetResult(*(unsigned short *)(temp_v2 + temp_v0 * 4 + 2));
  return 1;
}

} /* extern "C" */
