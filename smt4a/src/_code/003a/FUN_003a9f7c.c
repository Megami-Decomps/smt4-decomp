/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9f7c` (_code @ 0x3a9f7c, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00573c70; /* 0x573c70 */
extern unsigned int DAT_00573c74; /* 0x573c74 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_001634b4. */
extern int FUN_001654d8(int);
/* Supplied declaration required: FUN_001879d0. */


void FUN_003a9f7c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  
  if (*(int *)(param_1 + 0x243c) != 0) {
    temp_v0 = FUN_0014aa78();
    if ((*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00573c70) == 0 &&
        (*(unsigned int *)(temp_v0 + 0x45a4) & DAT_00573c74) == 0) {
      temp_v2 = 0.29f;
      FUN_001879d0(DAT_0059dbb4);
      temp_v0 = FUN_001654d8(param_1 + 0x20f0);
      temp_v1 = 0;
      do {
        if ((temp_v1 < 4) && (*(char *)(param_1 + 0x2201) != '\0')) {
          if (temp_v1 == 0) {
            VectorSignedToFloat(temp_v0 + (int)temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001634b4(param_1 + 0x217c);
          }
          VectorSignedToFloat(temp_v0 + (int)temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001634b4(param_1 + temp_v1 * 0x8c + 0x2208);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 10);
    }
  }
  return;
}
