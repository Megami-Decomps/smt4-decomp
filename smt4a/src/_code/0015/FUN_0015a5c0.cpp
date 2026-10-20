/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a5c0` (_code @ 0x15a5c0, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e800(int, int);
int FUN_00170414(int);
int FUN_00170474(int);
int FUN_00170e58(void);
int FUN_00170ebc(int);
int FUN_0017145c(int, int);
int FUN_00171660(void);
int FUN_0018b868(void);
int FUN_0018b964(void);
int FUN_00195fc8(void);
int FUN_001bcd48(int, int);
int software_interrupt(int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_0015a410(void);
extern int FUN_0015a75c(void);
/* Supplied declaration required: FUN_0016e800. */
/* Supplied declaration required: FUN_00170414. */
extern int FUN_00170464(void);
/* Supplied declaration required: FUN_00170474. */
/* Supplied declaration required: FUN_00170e58. */
/* Supplied declaration required: FUN_00170ebc. */
/* Supplied declaration required: FUN_0017145c. */
extern int FUN_001715d0(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00171660. */
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_001bcd48. */


int FUN_0015a5c0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0015a75c();
  if ((temp_v0 == 0) && (temp_v0 = FUN_0015a410(), temp_v0 == 0)) {
    FUN_00195fc8();
  }
  temp_v0 = FUN_00170464();
  if (temp_v0 != 9) {
    FUN_0017145c(0,0);
    FUN_00170474(9);
    while( 1 ) {
      FUN_0018b868();
      temp_v0 = 1;
      FUN_00171660();
      FUN_0018b964();
      if ((temp_v0 != -0x375f3010 && temp_v0 != -0x1f5f33f8) && temp_v0 != -0x375f33fe) break;
      FUN_001bcd48(10000000,0);
    }
    if (temp_v0 < 0) {
      FUN_0016e800(temp_v0,0x15a678);
    }
  }
  FUN_00170414(1);
  FUN_00170ebc(0);
  while( 1 ) {
    FUN_0018b868();
    temp_v0 = FUN_001715d0(param_1,param_2,param_3);
    FUN_0018b964();
    if ((temp_v0 != -0x375f3010 && temp_v0 != -0x1f5f33f8) && temp_v0 != -0x375f33fe) break;
    FUN_001bcd48(10000000,0);
  }
  if (temp_v0 < 0) {
    FUN_0016e800(temp_v0,0x15a6d0);
  }
  FUN_00170e58();
  software_interrupt(3);
  return temp_v0;
}

} /* extern "C" */
