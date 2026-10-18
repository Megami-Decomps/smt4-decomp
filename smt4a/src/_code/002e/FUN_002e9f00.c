/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9f00` (_code @ 0x2e9f00, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int FUN_00103e8e(int, unsigned int);
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9e80. */
/* Supplied declaration required: FUN_002e9e8a. */
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: FUN_002e9f64. */


unsigned int FUN_002e9f00(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *temp_v2;
  unsigned int *temp_v3;
  unsigned char temp_v4 [16];
  
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v4,temp_v0 + 0x58);
  FUN_002e9e80(&temp_v2);
  temp_v1 = FUN_002e9af4();
  FUN_002e9e8a(temp_v1,*(unsigned int *)(param_1 + 0x44),&temp_v2);
  temp_v1 = FUN_00103e8e(param_1,param_2);
  for (puVar3 = temp_v2; temp_v3 != puVar3; puVar3 = puVar3 + 1) {
    temp_v0 = FUN_002e9af4();
    FUN_002e9ec8(temp_v0,*puVar3);
    if (temp_v0 != 0) {
      FUN_002e9f00();
    }
  }
  FUN_002e9f64(&temp_v2);
  FUN_002e6e5c(temp_v4);
  return temp_v1;
}
