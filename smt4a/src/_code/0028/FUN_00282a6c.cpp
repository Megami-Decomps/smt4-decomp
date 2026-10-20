#include "romwright_types.h"

extern "C" {

int scrSetResult(void);
int FUN_0035c3d0(unsigned int, unsigned int, unsigned int, unsigned int);

extern unsigned int scrGetArg(unsigned int);
extern int FUN_002deb84(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_0035c3d0. */
extern int FUN_0035c688(unsigned int);


unsigned char FUN_00282a6c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = FUN_002deb84();
  if (temp_v1 != 0) {
    temp_v1 = FUN_0035c688(temp_v0);
    return temp_v1 != 0;
  }
  temp_v2 = scrGetArg(1);
  temp_v3 = scrGetArg(2);
  temp_v4 = scrGetArg(3);
  FUN_0035c3d0(temp_v0,temp_v2,temp_v3,temp_v4);
  scrSetResult();
  return 0;
}

} /* extern "C" */
