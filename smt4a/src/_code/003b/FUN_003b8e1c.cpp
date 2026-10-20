#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);
int FUN_001add24(int);
int FUN_00333474(void);
int FUN_003f86f8(int);

/* Supplied declaration required: dataTableGet. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_001add24. */
extern int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_00333474. */
/* Supplied declaration required: FUN_003f86f8. */


unsigned int FUN_003b8e1c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  FUN_003f86f8(0x4b);
  for (; temp_v0 <= temp_v1; temp_v0 = temp_v0 + 1) {
    dataTableGet(0x4b,0);
    temp_v2 = dataTableGetEntries();
    temp_v2 = temp_v2 + temp_v0 * 100;
    if (temp_v2 != 0) {
      *(unsigned short *)(temp_v2 + 0x34) = *(unsigned short *)(temp_v2 + 0x60);
      FUN_00333474();
    }
  }
  FUN_001add24(0x4b);
  return 1;
}

} /* extern "C" */
