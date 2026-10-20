/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153400` (_code @ 0x153400, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a2a94(unsigned char *, int, unsigned int);
int nn_os_LightEvent_Wait(int);
int nn_os_LightEvent_Signal(int);
int coproc_moveto_Data_Synchronization(int);

typedef int romwright_code(...);
extern unsigned char g_nnSndMasterManager; /* 0x4e6f14 */
extern unsigned short DAT_004e8280; /* 0x4e8280 */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Supplied declaration required: FUN_002a2a94. */
extern int FUN_002ad3a4(void);
/* Supplied declaration required: nn_os_LightEvent_Wait. */
/* Supplied declaration required: nn_os_LightEvent_Signal. */


void FUN_00153400(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002ad3a4();
  *(unsigned char *)(temp_v0 + 0xf) = 1;
  do {
    nn_os_LightEvent_Wait(temp_v0 + 0x40);
    if (*(romwright_code **)(temp_v0 + 0x28) != (romwright_code *)0x0) {
      (**(romwright_code **)(temp_v0 + 0x28))();
    }
    FUN_002a2a94(&g_nnSndMasterManager,0,*(unsigned int *)((unsigned int)DAT_004e8280 * 8 + 0x4e8254));
    FUN_002a2a94(&g_nnSndMasterManager,1,*(unsigned int *)((unsigned int)DAT_004e8280 * 8 + 0x4e8258));
    coproc_moveto_Data_Synchronization(0);
    nn_os_LightEvent_Signal(temp_v0 + 0x48);
  } while (*(char *)(temp_v0 + 0xf) != '\0');
  return;
}

} /* extern "C" */
