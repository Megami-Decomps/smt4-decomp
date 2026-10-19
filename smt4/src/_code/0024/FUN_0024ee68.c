/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024ee68` (_code @ 0x24ee68, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004656ca; /* 0x4656ca */
extern signed char DAT_004656cb; /* 0x4656cb */
extern signed char DAT_004656cc; /* 0x4656cc */
extern signed char DAT_004656ce; /* 0x4656ce */
extern unsigned int DAT_004e629c; /* 0x4e629c */

extern int FUN_00239a54(void);
extern unsigned int FUN_003594f0(unsigned int);
extern unsigned int FUN_0035ae74(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_0024ee68(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0xc8a10bf0;
  if ((DAT_004656ca != '\0') || (temp_v0 = FUN_00239a54(), temp_v0 != 0)) {
    nn_os_CriticalSection_Enter((unsigned int)&DAT_004e629c);
    temp_v1 = 0;
    if (param_1 != 0) {
      temp_v0 = FUN_00239a54();
      if (temp_v0 == 0 && DAT_004656ce == '\0') {
        temp_v1 = 0xc8810bea;
        nn_os_CriticalSection_Leave((unsigned int)&DAT_004e629c);
        return temp_v1;
      }
      temp_v1 = FUN_003594f0(0xe);
    }
    if (DAT_004656cb == '\0') {
      nn_os_CriticalSection_Leave((unsigned int)&DAT_004e629c);
      return 0xc8a10bf0;
    }
    if (DAT_004656cc != '\0') {
      temp_v1 = FUN_0035ae74(0);
      if ((temp_v1 & 0x80000000) != 0) {
        nn_os_CriticalSection_Leave((unsigned int)&DAT_004e629c);
        return temp_v1;
      }
      DAT_004656cc = '\0';
    }
    nn_os_CriticalSection_Leave((unsigned int)&DAT_004e629c);
  }
  return temp_v1;
}
