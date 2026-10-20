/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b6b1c` (_code @ 0x4b6b1c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275bc8(int, int);

typedef struct fn_004b6b1c_arg0 fn_004b6b1c_arg0;
struct fn_004b6b1c_arg0 {
    unsigned char pad_0x0[0x439c];
    int field_0x439c; /* +0x439c */
    unsigned char field_0x43a0; /* +0x43a0 */
    unsigned char pad_0x43a1[0x3];
    int field_0x43a4; /* +0x43a4 */
    int field_0x43a8; /* +0x43a8 */
};

extern int asdTMTexTableNodeIsLoaded(unsigned int, int);
/* Supplied declaration required: FUN_00275bc8. */
extern int loadSlotIsLoaded(unsigned int);


unsigned int FUN_004b6b1c(fn_004b6b1c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = param_1->field_0x439c != 0;
  temp_v0 = 0;
  if (temp_v3) {
    temp_v0 = param_1->field_0x43a4;
  }
  temp_v4 = temp_v0 != 0;
  if (temp_v3 && temp_v4) {
    temp_v0 = param_1->field_0x43a8;
  }
  if ((((temp_v3 && temp_v4) && temp_v0 != 0) && (temp_v0 = loadSlotIsLoaded(0x14), temp_v0 != 0)) &&
     (temp_v0 = loadSlotIsLoaded(0x25), temp_v0 != 0)) {
    temp_v2 = 0;
    temp_v0 = temp_v2;
    do {
      temp_v1 = asdTMTexTableNodeIsLoaded(0x1d,temp_v2);
      if (temp_v1 != 0) {
        temp_v0 = temp_v0 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 3);
    if (temp_v0 >= 3) {
      if (*(int *)&param_1->field_0x43a0 == 0) {
        temp_v0 = param_1->field_0x439c;
        FUN_00275bc8(temp_v0,param_1->field_0x43a4);
        *(int *)&param_1->field_0x43a0 = temp_v0;
        *(unsigned int *)(temp_v0 + 0x108) = 0;
      }
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
