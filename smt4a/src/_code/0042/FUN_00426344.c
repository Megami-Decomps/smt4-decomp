/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00426344` (_code @ 0x426344, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
} param_4_stack;

extern signed char DAT_005891a4; /* 0x5891a4 */

extern int FUN_0015997c(void);
/* Supplied declaration required: FUN_00426478. */
/* Supplied declaration required: FUN_004264d0. */
extern int FUN_0042656c(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_004266e4. */
extern int FUN_00432040(unsigned int);
/* Supplied declaration required: FUN_00432104. */


void FUN_00426344(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = param_4;
  temp_v0 = FUN_0042656c(param_1,&temp_v1);
  if (-1 < temp_v0) {
    if ((temp_v1 & 0xff) != 0) {
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
