/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351ce8` (_code @ 0x351ce8, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023a244(void);
int FUN_00351dfc(unsigned int, unsigned int);
int FUN_00351e54(unsigned int, unsigned int);
int FUN_00352008(unsigned int, unsigned int, int);

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
} param_4_stack;

extern signed char DAT_0044e348; /* 0x44e348 */

extern int FUN_0011c834(void);
/* Supplied declaration required: FUN_0023a244. */
/* Supplied declaration required: FUN_00351dfc. */
/* Supplied declaration required: FUN_00351e54. */
extern int FUN_00351ef0(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_00352008. */
extern int FUN_0035adf0(unsigned int);


void FUN_00351ce8(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = param_4;
  temp_v0 = FUN_00351ef0(param_1,&temp_v1);
  if (-1 < temp_v0) {
    if ((temp_v1 & 0xff) != 0) {
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
        return;
      }
      FUN_00352008(param_1,param_1,0);
    }
    FUN_00351dfc(param_1,*param_2);
  }
  return;
}

} /* extern "C" */
