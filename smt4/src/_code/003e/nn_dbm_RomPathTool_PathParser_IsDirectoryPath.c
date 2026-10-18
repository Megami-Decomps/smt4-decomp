/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_dbm_RomPathTool_PathParser_IsDirectoryPath` (_code @ 0x3e0bfc, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int
nn_dbm_RomPathTool_PathParser_IsDirectoryPath(int param_1,unsigned int param_2,unsigned int param_3)

{
  short temp_v0;
  short *psVar2;
  unsigned char temp_v1;
  
  psVar2 = *(short **)(param_1 + 8);
  temp_v0 = *psVar2;
  if (temp_v0 == 0) {
    param_3 = (unsigned int)(unsigned short)psVar2[-1];
  }
  if (temp_v0 != 0 || param_3 != 0x2f) {
    if (temp_v0 == 0x2e) {
      param_3 = (unsigned int)(unsigned short)psVar2[1];
    }
    if (temp_v0 != 0x2e || param_3 != 0) {
      temp_v1 = temp_v0 != 0x2e;
      if (!temp_v1) {
        temp_v0 = psVar2[1];
      }
      if ((temp_v1 || temp_v0 != 0x2e) || (psVar2[2] != 0)) {
        return 0;
      }
    }
  }
  return 1;
}
