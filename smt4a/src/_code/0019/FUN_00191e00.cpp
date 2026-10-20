#include "romwright_types.h"

extern "C" {

int FUN_001a6d00(unsigned char [128], int, int);
int FUN_001ab914(int);
int FUN_001ad150(void);
int FUN_001ad15c(int, unsigned int);
int FUN_002e6354(unsigned char [128], int);

extern int FUN_001861c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001a6d00. */
/* Supplied declaration required: FUN_001ab914. */
/* Supplied declaration required: FUN_001ad150. */
/* Supplied declaration required: FUN_001ad15c. */
extern int FUN_001b2bd8(unsigned int, int, unsigned int, unsigned char *);
extern int FUN_001b3214(unsigned int);
/* Supplied declaration required: FUN_002e6354. */


int FUN_00191e00(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [128];
  
  temp_v0 = FUN_001b3214(param_2);
  if (temp_v0 != -1) {
    FUN_002e6354(temp_v2,0x80);
    temp_v0 = FUN_001b2bd8(param_1,temp_v0,param_3,temp_v2);
    if ((temp_v0 != 0) && (temp_v1 = FUN_001861c4(param_2,param_3), temp_v1 != 0)) {
      FUN_001ad150();
      FUN_001a6d00(temp_v2,temp_v1,temp_v0);
      FUN_001ad15c(temp_v1,param_4);
      FUN_001ab914(temp_v1);
      return temp_v1;
    }
  }
  return 0;
}

} /* extern "C" */
