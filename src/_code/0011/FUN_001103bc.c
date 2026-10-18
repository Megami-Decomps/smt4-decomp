/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001103bc` (_code @ 0x1103bc, 0x1c8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned char DAT_0044e361; /* 0x44e361 */
extern unsigned char DAT_0044e364; /* 0x44e364 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0011d4ac. */
extern int FUN_0011d728(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00129af4. */
/* Supplied declaration required: FUN_0012a6ec. */
extern int FUN_002bb410(void);
/* Supplied declaration required: FUN_002bb420. */
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002bb4c0. */
/* Supplied declaration required: FUN_002bb4d4. */
/* Supplied declaration required: FUN_002bb54c. */
extern int FUN_002bb5b4(void);
extern int FUN_002bb608(void);
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002bbd10. */
/* Supplied declaration required: FUN_002c5624. */
/* Supplied declaration required: FUN_002c57c4. */


int FUN_001103bc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002bb608();
  if ((temp_v0 == 0) && (temp_v0 = FUN_002bb420(), temp_v0 == 0)) {
    temp_v1 = -0x375f33fc;
  }
  else {
    temp_v0 = FUN_002bb420(temp_v0);
    if (temp_v0 != 0) {
      FUN_002bb4d4(0);
    }
    else {
      temp_v0 = FUN_002bb608();
      if (temp_v0 != 0) {
        DAT_0044e361 = 1;
        FUN_00129af4();
        temp_v0 = FUN_002bb5b4();
        if (temp_v0 != 0) {
          FUN_002bb54c();
          DAT_0044e364 = 1;
        }
        FUN_002bb4d4(0);
        FUN_0012a6ec();
      }
    }
    temp_v0 = FUN_002bb410();
    if (temp_v0 != 0) {
      FUN_002c57c4(1);
    }
    while( 1 ) {
      FUN_002bb6b8();
      temp_v1 = FUN_0011d728(param_1,param_2,param_3,param_4);
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
      FUN_002bbd10(temp_v1,0x110530);
    }
    FUN_002bb4c0();
    temp_v0 = FUN_002bb608();
    if (temp_v0 != 0) {
      FUN_0011d4ac(param_1);
      temp_v1 = param_1;
    }
    temp_v0 = FUN_002bb420();
    if (temp_v0 != 0) {
      software_interrupt(3);
    }
  }
  return temp_v1;
}
