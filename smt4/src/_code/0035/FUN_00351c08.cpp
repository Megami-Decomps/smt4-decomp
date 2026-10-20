/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351c08` (_code @ 0x351c08, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001467a4(void);
int FUN_0023a244(void);
int FUN_00351e54(int, int);
int FUN_00352008(int, int, int);
int FUN_00359f90(void);

extern signed char DAT_0044e348; /* 0x44e348 */

extern int FUN_0011c834(void);
/* Supplied declaration required: FUN_001467a4. */
/* Supplied declaration required: FUN_0023a244. */
extern int FUN_00351dfc(int, unsigned int);
/* Supplied declaration required: FUN_00351e54. */
extern int FUN_00351ef0(int, unsigned int *);
/* Supplied declaration required: FUN_00352008. */
/* Supplied declaration required: FUN_00359f90. */
extern int FUN_0035adf0(unsigned int);
extern void nn_cfg_CTR_Initialize(void);


int FUN_00351c08(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [2];
  
  if (param_2 == (unsigned int *)0x0) {
    return -0x1fbf6001;
  }
  temp_v0 = param_1;
  nn_cfg_CTR_Initialize();
  FUN_00359f90();
  FUN_001467a4();
  if (temp_v0 != 0) {
    temp_v1[0] = param_4;
    temp_v0 = FUN_00351ef0(param_1,temp_v1);
    if (-1 < temp_v0) {
      if ((temp_v1[0] & 0xff) != 0) {
        FUN_00351e54(param_1,param_1);
      }
      else {
        temp_v0 = 0;
        if ((DAT_0044e348 == '\0') && (temp_v0 = FUN_0011c834(), -1 < temp_v0)) {
          temp_v0 = FUN_0035adf0(1);
          if (temp_v0 >= 0) {
            DAT_0044e348 = '\x01';
          }
          else {
            FUN_0023a244();
          }
        }
        if (temp_v0 < 0) {
          return temp_v0;
        }
        FUN_00352008(param_1,param_1,0);
      }
      temp_v0 = FUN_00351dfc(param_1,*param_2);
    }
    return temp_v0;
  }
  return -0x36df607c;
}

} /* extern "C" */
