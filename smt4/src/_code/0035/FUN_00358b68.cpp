/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358b68` (_code @ 0x358b68, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238f4c(int, int);
int FUN_002399ec(unsigned int);
int FUN_0024ee68(int);

extern signed char g_asdCecModuleFlags; /* 0x4656d0 */
extern signed char DAT_004656d1; /* 0x4656d1 */
extern signed char DAT_004656d3; /* 0x4656d3 */
extern signed char DAT_004656d4; /* 0x4656d4 */
extern unsigned int DAT_004e62b4; /* 0x4e62b4 */

/* Supplied declaration required: FUN_00238f4c. */
/* Supplied declaration required: FUN_002399ec. */
/* Supplied declaration required: FUN_0024ee68. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_00358b68(int param_1)

{
/* irregular: 3 native warning(s); review required */
  *(unsigned int *)(param_1 + 4) = 0;
  if (g_asdCecModuleFlags != '\0') {
    FUN_00238f4c(param_1,0);
  }
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004e62b4);
  if (DAT_004656d3 != '\0') {
    FUN_002399ec(*(unsigned int *)(param_1 + 0x3a8));
    DAT_004656d3 = '\0';
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004e62b4);
  nn_os_CriticalSection_Enter((unsigned int)&DAT_004e62b4);
  if (DAT_004656d4 != '\0') {
    FUN_002399ec(*(unsigned int *)(param_1 + 0x558));
    DAT_004656d4 = '\0';
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_004e62b4);
  if (DAT_004656d1 != '\0') {
    FUN_0024ee68(0);
    DAT_004656d1 = '\0';
  }
  if (*(char *)(param_1 + 8) != '\0') {
    *(unsigned char *)(param_1 + 8) = 0;
  }
  return 0;
}

} /* extern "C" */
