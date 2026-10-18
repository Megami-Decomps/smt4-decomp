/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a826c` (_code @ 0x2a826c, 0x14c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_0044e361; /* 0x44e361 */

/* Supplied declaration required: FUN_00129af4. */
/* Supplied declaration required: FUN_0014fce8. */
extern int FUN_0014feac(unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002bb410(void);
extern int FUN_002bb420(void);
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002bb4c0. */
/* Supplied declaration required: FUN_002bb4d4. */
/* Supplied declaration required: FUN_002bb608. */
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002bbd10. */
/* Supplied declaration required: FUN_002c5624. */
/* Supplied declaration required: FUN_002c57c4. */


int FUN_002a826c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002bb608();
  if ((temp_v0 == 0) && (temp_v0 = FUN_002bb420(), temp_v0 == 0)) {
    temp_v1 = -0x375f33fc;
  }
  else {
    temp_v0 = FUN_002bb608(temp_v0);
    if (temp_v0 != 0) {
      DAT_0044e361 = 1;
      FUN_00129af4();
    }
    FUN_0014fce8(param_1);
    FUN_002bb4d4(0);
    temp_v0 = FUN_002bb410();
    if (temp_v0 != 0) {
      FUN_002c57c4(1);
    }
    while( 1 ) {
      FUN_002bb6b8();
      temp_v1 = FUN_0014feac(param_1,param_2,param_3,param_4);
      FUN_002bb648();
      if ((temp_v1 != -0x375f3010 && temp_v1 != -0x1f5f33f8) && temp_v1 != -0x375f33fe) break;
      FUN_002bb490(10000000,0);
    }
    if (temp_v0 != 0) {
      temp_v0 = FUN_002bb410();
      if (temp_v0 == 0) {
        FUN_002c5624(1);
      }
    }
    else {
      temp_v0 = FUN_002bb410();
      if (temp_v0 != 0) {
        FUN_002c57c4(1);
      }
    }
    if (temp_v1 < 0) {
      FUN_002bbd10(temp_v1,0x2a839c);
    }
    FUN_002bb4c0();
  }
  return temp_v1;
}
