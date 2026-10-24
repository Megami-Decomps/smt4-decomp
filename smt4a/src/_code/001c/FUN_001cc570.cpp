/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cc570` (_code @ 0x1cc570, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d0d64(...);
int __aeabi_uldivmod(...);

typedef struct fn_001cc570_arg1 fn_001cc570_arg1;
struct fn_001cc570_arg1 {
    unsigned char pad_0x0[0x4];
    uint field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x7];
    uint field_0x10; /* +0x10 */
};

typedef int romwright_code(...);
/* Supplied declaration required: FUN_001d0d64. */
/* Supplied declaration required: __aeabi_uldivmod. */


unsigned int FUN_001cc570(int *param_1,fn_001cc570_arg1 *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  if (param_2->field_0x8 == 0) {
    temp_v0 = 0;
    if ((char)param_1[0x1f] == '\0') {
      temp_v0 = param_1[0x20];
    }
    else if ((char)param_1[0x1f] == '\x01') {
      temp_v2 = param_1[0x20];
      temp_v0 = param_2->field_0x4;
      __aeabi_uldivmod((int)((unsigned long long)temp_v0 * (unsigned long long)temp_v2),
                   ((int)temp_v2 >> 0x1f) * temp_v0 + (int)((unsigned long long)temp_v0 * (unsigned long long)temp_v2 >> 0x20)
                   ,1000,0);
      if (temp_v1 != 0) {
        temp_v0 = 0xffffffff;
      }
      else {
        temp_v0 = __aeabi_uldivmod((int)((unsigned long long)temp_v0 * (unsigned long long)temp_v2),
                             ((int)temp_v2 >> 0x1f) * temp_v0 +
                             (int)((unsigned long long)temp_v0 * (unsigned long long)temp_v2 >> 0x20),1000,0);
      }
    }
    if (param_2->field_0x10 <= temp_v0) {
      *(unsigned char *)((int)param_1 + 0xf) = 1;
      (**(romwright_code **)(*param_1 + 0x14))(param_1);
      return 0;
    }
  }
  FUN_001d0d64(param_1,param_2);
  return 1;
}

} /* extern "C" */
