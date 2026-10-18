/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002222e8` (_code @ 0x2222e8, 0x224 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_0043dee8; /* 0x43dee8 */
extern unsigned int DAT_0043df00; /* 0x43df00 */
extern int DAT_0043df04; /* 0x43df04 */
extern unsigned int DAT_0043df0c; /* 0x43df0c */
extern int DAT_0043df10; /* 0x43df10 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


unsigned char FUN_002222e8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  
  temp_v0 = DAT_0043dee8;
  if (*(char *)(DAT_0043dee8 + 0x18) != '\0') {
    FUN_002bed3c();
    FUN_002c39a4(DAT_0044ea00);
    temp_v4 = DAT_0044ea00;
    temp_v1 = FUN_002c5d80(1,0);
    piVar5 = (int *)(temp_v4 + 0x124c);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v4 + 0x1268))();
      *(unsigned char *)(temp_v4 + 0x1264) = 0;
    }
    temp_v4 = DAT_0044ea00;
    temp_v1 = FUN_002c5da8(6,1,0);
    piVar5 = (int *)(temp_v4 + 0x12ac);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v4 + 0x12c8))();
      *(unsigned char *)(temp_v4 + 0x12c4) = 0;
    }
    FUN_002ba12c(DAT_0044ea00);
    temp_v4 = DAT_0043df04 * 1000;
    FUN_002bf538();
    FUN_002bf288(2,DAT_0043df00,temp_v4,0,0,0xfa);
    temp_v4 = DAT_0044ea00;
    piVar5 = (int *)(DAT_0044ea00 + 0x12ac);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v4 + 0x12c8))();
      *(unsigned char *)(temp_v4 + 0x12c4) = 0;
    }
    temp_v4 = DAT_0043df10 * 1000;
    FUN_002bf538();
    FUN_002bf288(2,DAT_0043df0c,temp_v4,0,-*(int *)(temp_v0 + 0xc),0xfb);
    FUN_002bf288(2,DAT_0043df0c,temp_v4 + 1,0,*(unsigned int *)(temp_v0 + 0xc),0xfb);
    FUN_002bed3c();
    FUN_002bf538();
    temp_v0 = DAT_0044ea00;
    piVar5 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v4 = *piVar5;
    temp_v1 = piVar5[temp_v4 + 2];
    *piVar5 = temp_v4 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v1 != piVar5[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
  }
  return 0;
}
