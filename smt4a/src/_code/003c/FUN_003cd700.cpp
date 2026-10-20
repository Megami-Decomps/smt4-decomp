#include "romwright_types.h"

extern "C" {

int FUN_0019e52c(int);
int scrSetResult(void);

/* Supplied declaration required: FUN_0019e52c. */
extern int FUN_002a4878(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: scrSetResult. */
extern int FUN_003e4d68(unsigned int);


unsigned int FUN_003cd700(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(param_1 + 4);
  if (*(char *)(temp_v2 + 4) == '\x01') {
    temp_v0 = *(int *)(temp_v2 + 0x32c);
  }
  else {
    temp_v0 = FUN_002a4878(temp_v2 + 0x260);
    temp_v1 = FUN_002a4894(temp_v2 + 0x260);
    temp_v0 = temp_v0 + temp_v1 * 4;
  }
  temp_v2 = FUN_003e4d68(*(unsigned int *)(temp_v2 + temp_v0 * 4 + 0x2c4) & 0xffff);
  FUN_0019e52c(*(unsigned short *)(temp_v2 + 300));
  scrSetResult();
  return 1;
}

} /* extern "C" */
