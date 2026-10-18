/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1df8` (_code @ 0x2c1df8, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002c1df8_arg0 fn_002c1df8_arg0;
struct fn_002c1df8_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x1c];
    short field_0x20; /* +0x20 */
    unsigned char pad_0x22[0x4];
    byte field_0x26; /* +0x26 */
};

extern unsigned int FUN_00192748(unsigned int);
/* Supplied declaration required: FUN_00192798. */
/* Supplied declaration required: FUN_001a6f60. */
extern unsigned int FUN_0048168c(void);


void FUN_002c1df8(fn_002c1df8_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_0048168c();
  temp_v1 = FUN_001a6f60(param_1,0);
  temp_v2 = FUN_00192798();
  temp_v3 = FUN_00192748(temp_v1);
  temp_v5 = 0;
  if (temp_v5 < temp_v3) {
    do {
      if ((*(char *)(temp_v2 + 0x26) != '\0') && (temp_v4 = 1, temp_v0 >= 2)) {
        do {
          FUN_001a6f60(param_1,temp_v4);
          piVar5 = (int *)FUN_00192798();
          if (*piVar5 == (int)*(short *)(temp_v2 + 0x20)) {
            *(char *)(temp_v2 + 0x26) = (char)temp_v4;
            break;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v0);
      }
      temp_v5 = temp_v5 + 1;
      temp_v2 = temp_v2 + 0x28;
    } while (temp_v5 < temp_v3);
  }
  return;
}
