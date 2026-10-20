/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00143800` (_code @ 0x143800, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(unsigned char *);
int coproc_moveto_Data_Memory_Barrier(int);

typedef int romwright_code(...);
extern int FUN_00154320(...); /* 0x154320 */
extern unsigned int DAT_0059dba8; /* 0x59dba8 */
extern unsigned char DAT_0063f4f0; /* 0x63f4f0 */
extern unsigned char DAT_0063f4fd; /* 0x63f4fd */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
extern int FUN_001b1f04(void);


void FUN_00143800(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  nn_os_CriticalSection_Initialize(&DAT_0063f4f0);
  temp_v0 = FUN_001b1f04();
  *(unsigned int *)(temp_v0 + 0x1ec) = 0;
  coproc_moveto_Data_Memory_Barrier(0);
  *(romwright_code **)(temp_v0 + 0x1e8) = FUN_00154320;
  DAT_0059dba8 = 0x14;
  DAT_0063f4fd = 1;
  return;
}

} /* extern "C" */
