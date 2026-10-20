#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int btlGetMainState(void);

extern unsigned long long btlMainFindActiveEntry(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
extern int scrGetArg(void);


unsigned int FUN_00311f6c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned long long temp_v4;
  
  temp_v1 = scrGetArg();
  btlGetMainState();
  temp_v4 = btlMainFindActiveEntry();
  temp_v2 = (unsigned int)((unsigned long long)temp_v4 >> 0x20);
  if ((int)temp_v4 != 0) {
    temp_v0 = *(unsigned short *)((int)temp_v4 + temp_v1 * 2 + 0x1f2);
    temp_v3 = (temp_v0 & 0xfc00) != 0;
    if (temp_v3) {
      temp_v2 = 2;
    }
    if (!temp_v3 || temp_v2 == temp_v0 >> 10) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
