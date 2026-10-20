#include "romwright_types.h"

extern "C" {

int FUN_001ab854(...);
int FUN_003283ac(unsigned int);

/* Supplied declaration required: FUN_001ab854. */
extern unsigned int FUN_001ba514(unsigned int);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_004bd340(unsigned int, unsigned int);
extern int FUN_004d0bf0(unsigned int);


unsigned int FUN_0031a044(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v4 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_004d0bf0(temp_v0 & 0xffff);
    if (temp_v1 == 0) {
      temp_v4 = 0xffffffff;
    }
    else {
      temp_v2 = FUN_001ba514(temp_v0 & 0xffff);
      temp_v3 = FUN_001ab854();
      temp_v1 = FUN_004bd340(temp_v3,2);
      if (temp_v1 != 0) {
        temp_v4 = 3;
      }
      else {
        temp_v3 = FUN_001ab854(temp_v2);
        temp_v1 = FUN_004bd340(temp_v3,1);
        if (temp_v1 != 0) {
          temp_v4 = 1;
        }
        else {
          temp_v2 = FUN_001ab854(temp_v2);
          temp_v1 = FUN_004bd340(temp_v2,10);
          if (temp_v1 != 0) {
            temp_v4 = 2;
          }
        }
      }
    }
  }
  FUN_003283ac(temp_v4);
  return 1;
}

} /* extern "C" */
