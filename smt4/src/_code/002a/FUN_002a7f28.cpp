/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7f28` (_code @ 0x2a7f28, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00129bd0(void);
int FUN_0014fde4(unsigned int);
int FUN_002bb150(int, int);
int FUN_002bb180(void);
int FUN_002bb194(int);
int FUN_002bb2c8(...);
int FUN_002bb308(void);
int FUN_002bb378(void);
int FUN_002bbb2c(int, int);
int FUN_002c5434(int);
int FUN_002c55d4(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_0044e361; /* 0x44e361 */

/* Supplied declaration required: FUN_00129bd0. */
/* Supplied declaration required: FUN_0014fde4. */
extern int FUN_0014ffa8(unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002bb0d0(void);
extern int FUN_002bb0e0(void);
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002bb180. */
/* Supplied declaration required: FUN_002bb194. */
/* Supplied declaration required: FUN_002bb2c8. */
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002bbb2c. */
/* Supplied declaration required: FUN_002c5434. */
/* Supplied declaration required: FUN_002c55d4. */


int FUN_002a7f28(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002bb2c8();
  if ((temp_v0 == 0) && (temp_v0 = FUN_002bb0e0(), temp_v0 == 0)) {
    temp_v1 = -0x375f33fc;
  }
  else {
    temp_v0 = FUN_002bb2c8(temp_v0);
    if (temp_v0 != 0) {
      DAT_0044e361 = 1;
      FUN_00129bd0();
    }
    FUN_0014fde4(param_1);
    FUN_002bb194(0);
    temp_v0 = FUN_002bb0d0();
    if (temp_v0 != 0) {
      FUN_002c55d4(1);
    }
    while( 1 ) {
      FUN_002bb378();
      temp_v1 = FUN_0014ffa8(param_1,param_2,param_3,param_4);
      FUN_002bb308();
      if ((temp_v1 != -0x375f3010 && temp_v1 != -0x1f5f33f8) && temp_v1 != -0x375f33fe) break;
      FUN_002bb150(10000000,0);
    }
    if (temp_v0 != 0) {
      temp_v0 = FUN_002bb0d0();
      if (temp_v0 == 0) {
        FUN_002c5434(1);
      }
    }
    else {
      temp_v0 = FUN_002bb0d0();
      if (temp_v0 != 0) {
        FUN_002c55d4(1);
      }
    }
    if (temp_v1 < 0) {
      FUN_002bbb2c(temp_v1,0x2a8058);
    }
    FUN_002bb180();
  }
  return temp_v1;
}

} /* extern "C" */
