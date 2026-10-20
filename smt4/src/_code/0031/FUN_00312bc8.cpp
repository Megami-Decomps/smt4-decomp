#include "romwright_types.h"

extern "C" {

int FUN_002451ac(unsigned int, int);
int scrSetResult(int);

/* Supplied declaration required: FUN_002451ac. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int btlGetMainState(void);
extern int scrGetArg(unsigned int);
extern int dataTableGetEntries(void);


unsigned int FUN_00312bc8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  FUN_002451ac(temp_v2,9);
  temp_v3 = dataTableGetEntries();
  scrSetResult(*(unsigned short *)(temp_v3 + temp_v0 * 0xc + temp_v1 * 2));
  return 1;
}

} /* extern "C" */
