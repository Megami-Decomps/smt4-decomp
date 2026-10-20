/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dd80` (_code @ 0x10dd80, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(unsigned char *);
int coproc_moveto_Data_Memory_Barrier(int);

typedef int romwright_code(...);
extern int FUN_001198a4(...); /* 0x1198a4 */
extern unsigned int DAT_0044e90c; /* 0x44e90c */
extern unsigned char DAT_004e315c; /* 0x4e315c */
extern unsigned char DAT_004e3169; /* 0x4e3169 */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
extern int nw_snd_internal_driver_SoundThread_GetInstance(void);
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */


void FUN_0010dd80(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  nn_os_CriticalSection_Initialize(&DAT_004e315c);
  temp_v0 = nw_snd_internal_driver_SoundThread_GetInstance();
  *(unsigned int *)(temp_v0 + 0x1ec) = 0;
  coproc_moveto_Data_Memory_Barrier(0);
  *(romwright_code **)(temp_v0 + 0x1e8) = FUN_001198a4;
  DAT_0044e90c = 0x14;
  DAT_004e3169 = 1;
  return;
}

} /* extern "C" */
