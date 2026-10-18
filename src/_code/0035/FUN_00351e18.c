/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351e18` (_code @ 0x351e18, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e348; /* 0x44e348 */

extern int FUN_0011c754(void);
/* Supplied declaration required: FUN_001466bc. */
/* Supplied declaration required: FUN_0023a3dc. */
/* Supplied declaration required: FUN_002c5fbc. */
extern int FUN_0035200c(int, unsigned int);
/* Supplied declaration required: FUN_00352064. */
extern int FUN_00352100(int, unsigned int *);
/* Supplied declaration required: FUN_00352218. */
/* Supplied declaration required: FUN_0035a1a0. */
extern int FUN_0035b000(unsigned int);


int FUN_00351e18(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [2];
  
  if (param_2 == (unsigned int *)0x0) {
    return -0x1fbf6001;
  }
  temp_v0 = param_1;
  FUN_002c5fbc();
  FUN_0035a1a0();
  FUN_001466bc();
  if (temp_v0 != 0) {
    temp_v1[0] = param_4;
    temp_v0 = FUN_00352100(param_1,temp_v1);
    if (-1 < temp_v0) {
      if ((temp_v1[0] & 0xff) != 0) {
        FUN_00352064(param_1,param_1);
      }
      else {
        temp_v0 = 0;
        if ((DAT_0044e348 == '\0') && (temp_v0 = FUN_0011c754(), -1 < temp_v0)) {
          temp_v0 = FUN_0035b000(1);
          if (temp_v0 >= 0) {
            DAT_0044e348 = '\x01';
          }
          else {
            FUN_0023a3dc();
          }
        }
        if (temp_v0 < 0) {
          return temp_v0;
        }
        FUN_00352218(param_1,param_1,0);
      }
      temp_v0 = FUN_0035200c(param_1,*param_2);
    }
    return temp_v0;
  }
  return -0x36df607c;
}
