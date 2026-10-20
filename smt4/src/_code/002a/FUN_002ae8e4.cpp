#include "romwright_types.h"

extern "C" {

int FUN_0014cbcc(unsigned char [128], int, int);
int FUN_0014ed4c(void);
int FUN_002a6e00(int);
int FUN_002a6e2c(int, unsigned int);
int memClear(unsigned char [128], int);

/* Supplied declaration required: FUN_0014cbcc. */
/* Supplied declaration required: FUN_0014ed4c. */
/* Supplied declaration required: FUN_002a6e00. */
/* Supplied declaration required: FUN_002a6e2c. */
extern int FUN_002a6e7c(unsigned int, int, unsigned int, unsigned char *);
extern int FUN_002a6f48(unsigned int);
extern int asdTMTexTableCallFileB(unsigned int, unsigned int);
/* Supplied declaration required: memClear. */


int FUN_002ae8e4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [128];
  
  temp_v0 = FUN_002a6f48(param_2);
  if (temp_v0 != -1) {
    memClear(temp_v2,0x80);
    temp_v0 = FUN_002a6e7c(param_1,temp_v0,param_3,temp_v2);
    if ((temp_v0 != 0) && (temp_v1 = asdTMTexTableCallFileB(param_2,param_3), temp_v1 != 0)) {
      FUN_0014ed4c();
      FUN_0014cbcc(temp_v2,temp_v1,temp_v0);
      FUN_002a6e2c(temp_v1,param_4);
      FUN_002a6e00(temp_v1);
      return temp_v1;
    }
  }
  return 0;
}

} /* extern "C" */
