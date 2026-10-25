#include "battle/BtlMainAccess.h"
#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);
int scrGetArg(int);
int dataTableGetCount(unsigned int);

extern unsigned int btlMainGetDataTable(unsigned int, unsigned int);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);


unsigned int FUN_00312da8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = reinterpret_cast<unsigned int>(btlGetMainState());
  temp_v2 = btlMainGetDataTable(temp_v2,0xe);
  temp_v3 = dataTableGetEntries();
  dataTableGetCount(temp_v2);
  temp_v4 = 0xffffffff;
  switch(temp_v1) {
  case 0:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc);
    break;
  case 1:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 2);
    break;
  case 2:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 4);
    break;
  case 3:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 6);
    break;
  case 4:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 8);
    break;
  case 5:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 10);
  }
  scrSetResult(temp_v4);
  return 1;
}

} /* extern "C" */
