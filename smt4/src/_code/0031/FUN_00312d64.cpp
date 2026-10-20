#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int FUN_002451ac(unsigned int, unsigned int);
/* Supplied declaration required: scrSetResult. */
extern unsigned int btlGetMainState(void);
extern int FUN_002c09f4(unsigned short);
extern short dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


unsigned int FUN_00312d64(void)
{
  unsigned int temp_v1;
  
  temp_v1 = btlGetMainState();
  temp_v1 = FUN_002451ac(temp_v1,0x11);
  scrSetResult(*(unsigned short *)(dataTableGetEntries() + FUN_002c09f4(dataTableGetCount(temp_v1) - 1) * 2));
  return 1;
}
} /* extern "C" */
