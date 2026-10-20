/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c7598` (_code @ 0x1c7598, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_LightEvent_ClearSignal(unsigned char *);
int nn_os_LightEvent_Wait(unsigned char *);
int svcSleepThread(unsigned char *, int);
int FUN_001cd7f4(void);
int FUN_001cd984(void);
int software_interrupt(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char LAB_004a95c0; /* 0x4a95c0 */
extern signed char DAT_005894e5; /* 0x5894e5 */
extern signed char DAT_005894e6; /* 0x5894e6 */
extern signed char DAT_005894e7; /* 0x5894e7 */
extern unsigned char DAT_005894e9; /* 0x5894e9 */
extern unsigned char DAT_005894ec; /* 0x5894ec */
extern unsigned char g_dspsndState; /* 0x6433d0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: nn_os_LightEvent_ClearSignal. */
/* Supplied declaration required: nn_os_LightEvent_Wait. */
/* Supplied declaration required: svcSleepThread. */
/* Supplied declaration required: FUN_001cd7f4. */
extern unsigned long long FUN_001cd8fc(unsigned char *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001cd984. */


void FUN_001c7598(int *param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned long long temp_v3;
  
  if (DAT_005894e6 != '\0') {
    temp_v3 = FUN_001cd8fc(&g_dspsndState,param_2,0x952b80,0);
    puVar2 = (unsigned char *)temp_v3;
    if (puVar2 != (unsigned char *)0x0) {
      software_interrupt(0x28);
      puVar1 = &g_dspsndState;
      FUN_001cd7f4();
      DAT_005894e9 = 0;
      software_interrupt(0x28);
      param_1[1] = temp_v0 - ((int)((unsigned long long)temp_v3 >> 0x20) + (unsigned int)(puVar1 < puVar2));
      *param_1 = (int)puVar1 - (int)puVar2;
      return;
    }
    DAT_005894e5 = '\x01';
  }
  if (DAT_005894e5 != '\0') {
    nn_os_LightEvent_Wait(&DAT_005894ec);
    nn_os_LightEvent_ClearSignal(&DAT_005894ec);
  }
  if (DAT_005894e7 == '\0') {
    puVar2 = &g_dspsndState;
    FUN_001cd984();
    software_interrupt(0x28);
    puVar1 = &g_dspsndState;
    FUN_001cd7f4();
    DAT_005894e9 = 0;
    software_interrupt(0x28);
    *param_1 = (int)puVar1 - (int)puVar2;
    param_1[1] = temp_v2 - (temp_v1 + (unsigned int)(puVar1 < puVar2));
    return;
  }
  svcSleepThread(&LAB_004a95c0,0);
  return;
}

} /* extern "C" */
