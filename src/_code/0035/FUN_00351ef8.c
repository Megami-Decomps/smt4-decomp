/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351ef8` (_code @ 0x351ef8, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
} param_4_stack;

extern signed char DAT_0044e348; /* 0x44e348 */

extern int FUN_0011c754(void);
/* Supplied declaration required: FUN_0023a3dc. */
/* Supplied declaration required: FUN_0035200c. */
/* Supplied declaration required: FUN_00352064. */
extern int FUN_00352100(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_00352218. */
extern int FUN_0035b000(unsigned int);


void FUN_00351ef8(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = param_4;
  temp_v0 = FUN_00352100(param_1,&temp_v1);
  if (-1 < temp_v0) {
    if ((temp_v1 & 0xff) != 0) {
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
        return;
      }
      FUN_00352218(param_1,param_1,0);
    }
    FUN_0035200c(param_1,*param_2);
  }
  return;
}
