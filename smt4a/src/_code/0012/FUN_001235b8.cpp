/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001235b8` (_code @ 0x1235b8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc4(void);
int asdOperatorDeleteB(int);
int FUN_0030f20a(...);

extern unsigned char LAB_001235f4; /* 0x1235f4 */
extern unsigned char DAT_0064bf20; /* 0x64bf20 */

/* Supplied declaration required: FUN_00195fc4. */
/* Supplied declaration required: asdOperatorDeleteB. */
/* Supplied declaration required: FUN_0030f20a. */


void FUN_001235b8(int param_1,int param_2)

{
/* irregular: 4 goto(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_2 != 0) {
    FUN_0030f20a(&DAT_0064bf20,&LAB_001235f4,param_2);
    asdOperatorDeleteB(param_2);
    do {
      FUN_00195fc4();
LAB_001235e8:
      temp_v0 = 0x123610;
LAB_001235dc:
      FUN_0030f20a(&DAT_0064bf20,&LAB_001235f4,temp_v0);
    } while( 1 );
  }
  if (param_1 == 0) goto LAB_001235e8;
  if (param_1 != 1) {
    if (param_1 != 2) {
      temp_v0 = 0x123608;
      goto LAB_001235dc;
    }
    temp_v0 = 0x123634;
    goto LAB_001235dc;
  }
  temp_v0 = 0x12361c;
  goto LAB_001235dc;
}

} /* extern "C" */
