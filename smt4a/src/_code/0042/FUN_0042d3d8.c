/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d3d8` (_code @ 0x42d3d8, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern signed char DAT_005b4486; /* 0x5b4486 */
extern signed char DAT_005b4487; /* 0x5b4487 */
extern signed char DAT_005b4488; /* 0x5b4488 */
extern unsigned int DAT_006426b4; /* 0x6426b4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_002e3140. */
extern int FUN_0042fbd4(void);
/* Supplied declaration required: FUN_0042fd28. */
extern unsigned int FUN_0042ff1c(unsigned int *);
extern int FUN_00430394(unsigned int);
extern int FUN_004320e4(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_0042d3d8(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  
  temp_v5 = -0x375ef410;
  if ((DAT_005b4486 != '\0') || (temp_v0 = FUN_0042fbd4(), temp_v0 != 0)) {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_006426b4);
    if (DAT_005b4487 == '\0') {
      nn_os_CriticalSection_Leave((unsigned int)&DAT_006426b4);
      return -0x375ef410;
    }
    if (DAT_005b4488 == '\0') {
      temp_v0 = FUN_004320e4(0);
      if (temp_v0 < 0) {
        nn_os_CriticalSection_Leave((unsigned int)&DAT_006426b4);
        return temp_v0;
      }
      FUN_001bcd48(16000000,0);
      DAT_005b4488 = '\x01';
    }
    if (param_2 != 0) {
      if (param_1 != 0) {
        temp_v1 = FUN_00430394(0xc);
      }
      else {
        temp_v1 = FUN_00430394(0xb);
      }
    }
    else {
      temp_v0 = 0;
      temp_v6 = 0;
      temp_v2 = FUN_0042ff1c(&temp_v6);
      temp_v4 = 0;
      if ((temp_v2 & 0x80000000) == 0) {
        temp_v4 = temp_v6;
      }
      if (param_1 != 0) {
        temp_v3 = FUN_00430394(0xc);
      }
      else {
        temp_v3 = FUN_00430394(0xb);
      }
      while( 1 ) {
        software_interrupt(0x24);
        if (-((int)temp_v4 >> 0x1f) != 0) {
          FUN_002e3140(temp_v4,-((int)temp_v4 >> 0x1f),1000000000,0);
        }
        temp_v1 = temp_v3;
        if ((((temp_v4 & 0x3ff) != 0x3fe) || (FUN_0042fd28(&temp_v7), temp_v7 == 1)) ||
           (temp_v1 = temp_v5, temp_v0 >= 0x3d)) break;
        temp_v0 = temp_v0 + 1;
      }
      if (temp_v4 != 0) {
        software_interrupt(0x23);
      }
    }
    nn_os_CriticalSection_Leave((unsigned int)&DAT_006426b4);
    temp_v5 = temp_v1;
  }
  return temp_v5;
}
