#include "romwright_types.h"

extern "C" {

int FUN_002451ac(unsigned int, int);
int scrSetResult(int);

/* Supplied declaration required: FUN_002451ac. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int btlGetMainState(void);
extern int scrGetArg(void);
extern int dataTableGetEntries(void);


unsigned int FUN_0032521c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  FUN_002451ac(temp_v1,4);
  temp_v2 = dataTableGetEntries();
  scrSetResult(*(unsigned short *)(temp_v2 + temp_v0 * 4 + 2));
  return 1;
}

} /* extern "C" */
