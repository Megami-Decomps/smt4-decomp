/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd5ac` (_code @ 0x1cd5ac, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_LightEvent_ClearSignal(unsigned char *);
int nn_os_LightEvent_Wait(unsigned char *);
int svcSleepThread(unsigned char *, int);
int FUN_001cd7f4(unsigned char *);
int FUN_001cd984(unsigned char *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char LAB_004a95c0; /* 0x4a95c0 */
extern signed char DAT_005894e5; /* 0x5894e5 */
extern signed char DAT_005894e6; /* 0x5894e6 */
extern signed char DAT_005894e7; /* 0x5894e7 */
extern unsigned char DAT_005894e9; /* 0x5894e9 */
extern unsigned char DAT_005894ec; /* 0x5894ec */
extern unsigned char g_dspsndState; /* 0x6433d0 */

/* Supplied declaration required: nn_os_LightEvent_ClearSignal. */
/* Supplied declaration required: nn_os_LightEvent_Wait. */
/* Supplied declaration required: svcSleepThread. */
/* Supplied declaration required: FUN_001cd7f4. */
extern int FUN_001cd8fc(unsigned char *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001cd984. */


void FUN_001cd5ac(unsigned int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (DAT_005894e6 != '\0') {
    temp_v0 = FUN_001cd8fc(&g_dspsndState,param_2,0x952b80,0);
    if (temp_v0 != 0) {
      FUN_001cd7f4(&g_dspsndState);
      DAT_005894e9 = 0;
      return;
    }
    DAT_005894e5 = '\x01';
  }
  if (DAT_005894e5 != '\0') {
    nn_os_LightEvent_Wait(&DAT_005894ec);
    nn_os_LightEvent_ClearSignal(&DAT_005894ec);
  }
  if (DAT_005894e7 != '\0') {
    svcSleepThread(&LAB_004a95c0,0);
    return;
  }
  FUN_001cd984(&g_dspsndState);
  FUN_001cd7f4(&g_dspsndState);
  DAT_005894e9 = 0;
  return;
}

} /* extern "C" */
