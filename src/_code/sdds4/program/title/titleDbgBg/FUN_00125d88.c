/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00125d88` (_code @ 0x125d88, 0x1a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_00125f48; /* 0x125f48 */
extern unsigned char LAB_00125f54; /* 0x125f54 */
extern unsigned char LAB_00125f64; /* 0x125f64 */
extern int DAT_0044e2e8; /* 0x44e2e8 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002aefc8. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c583c(unsigned int);
extern int FUN_002c5f7c(unsigned int, unsigned int);


unsigned int FUN_00125d88(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v2 = DAT_0044ea00;
  temp_v0 = DAT_0044e2e8;
  if (*(int *)(DAT_0044e2e8 + 8) == 1) {
    temp_v1 = FUN_002c5f7c(1,0);
    piVar6 = (int *)(temp_v2 + 0x124c);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1268))();
      *(unsigned char *)(temp_v2 + 0x1264) = 0;
    }
    FUN_002bf710();
    FUN_002bef14();
    FUN_002bf460(2,0,0,0,0,0xb);
    temp_v2 = DAT_0044ea00;
    piVar6 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar6;
    temp_v3 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1268))();
      *(unsigned char *)(temp_v2 + 0x1264) = 0;
    }
    temp_v2 = FUN_002c583c(0);
    if (temp_v2 != 0) {
      FUN_002be77c(3,0xffffffff,&LAB_00125f48);
    }
    else {
      FUN_002be77c(3,0xffffffff,&LAB_00125f54);
    }
    FUN_002be77c(3,0xffffffff,&LAB_00125f64);
    FUN_002aefc8(1,temp_v0 + 0x10);
  }
  return 0;
}
