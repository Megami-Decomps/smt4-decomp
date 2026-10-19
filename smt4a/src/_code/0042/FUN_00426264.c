/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00426264` (_code @ 0x426264, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005891a4; /* 0x5891a4 */

extern int FUN_0015997c(void);
/* Supplied declaration required: FUN_001a0eb0. */
/* Supplied declaration required: FUN_00426478. */
/* Supplied declaration required: FUN_004264d0. */
extern int FUN_0042656c(int, unsigned int *);
/* Supplied declaration required: FUN_004266e4. */
/* Supplied declaration required: FUN_004310c0. */
extern int FUN_00432040(unsigned int);
/* Supplied declaration required: FUN_00432104. */
extern void nn_cfg_CTR_Initialize(void);


void FUN_00426264(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [2];
  
  if (param_2 == (unsigned int *)0x0) {
    return;
  }
  temp_v0 = param_1;
  nn_cfg_CTR_Initialize();
  FUN_004310c0();
  FUN_001a0eb0();
  if (temp_v0 != 0) {
    temp_v1[0] = param_4;
    temp_v0 = FUN_0042656c(param_1,temp_v1);
    if (-1 < temp_v0) {
      if ((temp_v1[0] & 0xff) != 0) {
        FUN_004264d0(param_1,param_1);
      }
      else {
        temp_v0 = 0;
        if ((DAT_005891a4 == '\0') && (temp_v0 = FUN_0015997c(), -1 < temp_v0)) {
          temp_v0 = FUN_00432040(1);
          if (temp_v0 >= 0) {
            DAT_005891a4 = '\x01';
          }
          else {
            FUN_00432104();
          }
        }
        if (temp_v0 < 0) {
          return;
        }
        FUN_004266e4(param_1,param_1,0);
      }
      FUN_00426478(param_1,*param_2);
    }
    return;
  }
  return;
}
