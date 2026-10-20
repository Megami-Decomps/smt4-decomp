#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int FUN_003ef960(unsigned int, int);

extern unsigned int btlGetMainState(void);
extern int dataTableGetEntries(void);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003ef960. */


unsigned int FUN_003c48fc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  FUN_003ef960(temp_v2,5);
  temp_v3 = dataTableGetEntries();
  temp_v4 = 0;
  switch (temp_v1) {
  case 1:
    temp_v4 = *(unsigned short *)(temp_v3 + temp_v0 * 6);
    break;
  case 2:
    temp_v4 = *(unsigned short *)(temp_v3 + temp_v0 * 6 + 2);
    break;
  case 3:
    temp_v4 = *(unsigned short *)(temp_v3 + temp_v0 * 6 + 4);
    break;
  }
  scrSetResult(temp_v4);
  return 1;
}

} /* extern "C" */
