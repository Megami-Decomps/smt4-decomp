/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3904` (_code @ 0x2f3904, 0x1dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rectangleForwardExpanded(...);

extern int DAT_00447a28; /* 0x447a28 */

/* Supplied declaration required: rectangleForwardExpanded. */


void FUN_002f3904(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  if (temp_v2 < DAT_00447a28) {
    do {
      temp_v0 = *(int *)(*(int *)(temp_v2 * 4 + 0x4a0fe4) + 0x14);
      temp_v1 = **(int **)(temp_v0 + 0x1c);
      if (temp_v1 != 0) {
        if (temp_v1 != 1) {
          if (temp_v1 == 2) {
            rectangleForwardExpanded(0xff00ff);
            rectangleForwardExpanded(0xff00ff);
            rectangleForwardExpanded(0xff00ff);
            rectangleForwardExpanded(0xff00ff);
            rectangleForwardExpanded(0xff0000ff);
          }
        }
        else {
          if (*(int *)(temp_v0 + 4) == 0x27) {
            rectangleForwardExpanded(0xff00ff);
            rectangleForwardExpanded(0xff00ff);
            rectangleForwardExpanded(0xff00ff);
          }
          rectangleForwardExpanded(0xff00ff);
          rectangleForwardExpanded(0xff0000ff);
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < DAT_00447a28);
  }
  return;
}

} /* extern "C" */
