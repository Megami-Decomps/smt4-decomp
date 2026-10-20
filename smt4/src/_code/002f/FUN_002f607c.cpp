/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f607c` (_code @ 0x2f607c, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002b6b20(void);
extern int FUN_002b6b38(void);
extern int FUN_002c09f4(int);


unsigned int FUN_002f607c(void)

{
/* irregular: 2 unstructured edge(s); 1 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  int temp_v2;
  short temp_v3;
  
  temp_v3 = 2;
  temp_v0 = FUN_002b6b38();
  if (temp_v0 == 1) {
    temp_v2 = 1;
    temp_v0 = FUN_002b6b20();
    if (*(short *)(temp_v0 + 0x60a) != 0) {
      temp_v2 = 2;
    }
    if (*(short *)(temp_v0 + 0x60c) != 0) {
      temp_v2 = temp_v2 + 1;
    }
    if (*(short *)(temp_v0 + 0x60e) != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v2 = FUN_002c09f4(temp_v2);
    temp_v1 = *(short *)(temp_v0 + 0x60a);
    if (temp_v1 != 0) {
      if (temp_v2 == 0) {
        temp_v3 = temp_v1;
        FUN_0028dcb0(temp_v3);
        return 1;
      }
      temp_v2 = temp_v2 - 1;
    }
    temp_v1 = *(short *)(temp_v0 + 0x60c);
    if (temp_v1 != 0) {
      if (temp_v2 == 0) {
        temp_v3 = temp_v1;
        FUN_0028dcb0(temp_v3);
        return 1;
      }
      temp_v2 = temp_v2 - 1;
    }
    temp_v1 = *(short *)(temp_v0 + 0x60e);
    if ((temp_v1 != 0) && (temp_v2 == 0)) {
      temp_v3 = temp_v1;
    }
  }
  FUN_0028dcb0(temp_v3);
  return 1;
}

} /* extern "C" */
