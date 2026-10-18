/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1418` (_code @ 0x1e1418, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_001e1418(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  float temp_v4;
  
  FUN_002c39a4(DAT_0044ea00);
  temp_v0 = DAT_0044ea00;
  temp_v1 = FUN_002c5d80(1,0);
  piVar5 = (int *)(temp_v0 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  temp_v4 = 0.33f;
  FUN_002ba12c(DAT_0044ea00);
  FUN_002bf288(2,2,0x1ffb8,(int)temp_v4 - 0x38,0xfffffff8,1);
  FUN_002bed3c();
  FUN_002bf538();
  temp_v0 = DAT_0044ea00;
  piVar5 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  return 0;
}
