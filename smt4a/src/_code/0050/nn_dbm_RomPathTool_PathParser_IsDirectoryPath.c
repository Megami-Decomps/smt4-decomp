/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_dbm_RomPathTool_PathParser_IsDirectoryPath` (_code @ 0x501fe4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char nn_dbm_RomPathTool_PathParser_IsDirectoryPath(int param_1)

{
/* irregular: irregular input(s): in_r2 */
  short temp_v0;
  short *psVar2;
  unsigned int in_r2;
  unsigned char temp_v1;
  
  psVar2 = *(short **)(param_1 + 8);
  temp_v0 = *psVar2;
  if (temp_v0 == 0) {
    in_r2 = (unsigned int)(unsigned short)psVar2[-1];
  }
  if (temp_v0 != 0 || in_r2 != 0x2f) {
    if (temp_v0 == 0x2e) {
      in_r2 = (unsigned int)(unsigned short)psVar2[1];
    }
    if (temp_v0 != 0x2e || in_r2 != 0) {
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
