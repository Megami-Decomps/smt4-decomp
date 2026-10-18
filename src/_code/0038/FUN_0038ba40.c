/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038ba40` (_code @ 0x38ba40, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0038ba40_arg0 fn_0038ba40_arg0;
struct fn_0038ba40_arg0 {
    unsigned char pad_0x0[0x45];
    byte field_0x45; /* +0x45 */
    unsigned char pad_0x46[0x2];
    int field_0x48; /* +0x48 */
    int field_0x4c; /* +0x4c */
};

/* Supplied declaration required: FUN_002ac068. */
extern unsigned int FUN_002c0c74(void);
/* Supplied declaration required: FUN_002c0cc4. */


unsigned int FUN_0038ba40(fn_0038ba40_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  if (param_1->field_0x4c != 0) {
    temp_v3 = param_1->field_0x45 != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = param_1->field_0x48;
    }
    if (temp_v3 && temp_v0 != 0) {
      FUN_002ac068(temp_v0,0);
      FUN_002c0cc4();
    }
    temp_v3 = param_1->field_0x45 != 0;
    temp_v0 = 0;
    if (temp_v3) {
      temp_v0 = param_1->field_0x48;
    }
    if (temp_v3 && temp_v0 != 0) {
      FUN_002ac068(temp_v0,0);
      temp_v1 = FUN_002c0c74();
      if (temp_v1 != 0) {
        param_3 = param_1->field_0x4c;
      }
      temp_v2 = 0;
      if (temp_v2 < temp_v1) {
        do {
          if ((*(char *)(param_3 + temp_v2 * 0x10 + 0xc) != '\0') &&
             (*(int *)(param_3 + temp_v2 * 0x10) == 0)) {
            return 0;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < temp_v1);
      }
    }
  }
  return 1;
}
