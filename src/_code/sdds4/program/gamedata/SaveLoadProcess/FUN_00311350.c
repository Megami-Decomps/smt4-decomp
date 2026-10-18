/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311350` (_code @ 0x311350, 0x134 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned short DAT_0043e2f6; /* 0x43e2f6 */
extern int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_00193b54(void);
/* Supplied declaration required: FUN_002ba46c. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);


unsigned int FUN_00311350(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  float temp_v4;
  
  temp_v0 = FUN_00193b54();
  if (temp_v0 != 0) {
    FUN_002c3ba8(DAT_0044ea00);
    temp_v0 = DAT_0044ea00;
    temp_v1 = FUN_002c5f7c(1,0);
    piVar5 = (int *)(temp_v0 + 0x124c);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002bf710();
    FUN_002bef14();
    temp_v4 = 0.27f;
    FUN_002ba46c(DAT_0044ea00);
    FUN_002bf460(2,0xe,DAT_0043e2f6 + 0x185,(int)temp_v4,0,6);
    temp_v0 = DAT_0044ea00;
    piVar5 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002bf710();
    FUN_002bef14();
  }
  return 0;
}
