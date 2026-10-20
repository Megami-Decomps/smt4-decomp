/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019dfe4` (_code @ 0x19dfe4, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int DAT_005b4050; /* 0x5b4050 */
extern unsigned int DAT_005b4054; /* 0x5b4054 */
extern int DAT_005b4060; /* 0x5b4060 */
extern int DAT_005b4064; /* 0x5b4064 */


unsigned int FUN_0019dfe4(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  if (((param_1 < DAT_005b4050) || (DAT_005b4060 + DAT_005b4050 < param_1)) &&
     ((param_1 < DAT_005b4054 || (DAT_005b4054 + DAT_005b4064 < param_1)))) {
    temp_v0 = *(int *)(param_1 - 4);
    *(unsigned int *)(temp_v0 + 0xc) = param_2;
    *(unsigned int *)(temp_v0 + 0x10) = param_3;
    return 1;
  }
  return 0;
}

} /* extern "C" */
