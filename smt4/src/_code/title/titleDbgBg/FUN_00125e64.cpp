/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00125e64` (_code @ 0x125e64, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aed34(int, int);
int FUN_002be5a4(int, unsigned int, unsigned char *);
int FUN_002bed3c(void);
int FUN_002bf288(int, int, int, int, int, int);
int FUN_002bf538(void);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_00126024; /* 0x126024 */
extern unsigned char LAB_00126030; /* 0x126030 */
extern unsigned char LAB_00126040; /* 0x126040 */
extern int DAT_0044e2e8; /* 0x44e2e8 */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002aed34. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf538. */
extern int jyoucyuGetTableEntry(unsigned int);
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned int FUN_00125e64(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v2 = g_titleScene;
  temp_v0 = DAT_0044e2e8;
  if (*(int *)(DAT_0044e2e8 + 8) == 1) {
    temp_v1 = FUN_002c5d80(1,0);
    piVar6 = (int *)(temp_v2 + 0x124c);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1268))();
      *(unsigned char *)(temp_v2 + 0x1264) = 0;
    }
    FUN_002bf538();
    FUN_002bed3c();
    FUN_002bf288(2,0,0,0,0,0xb);
    temp_v2 = g_titleScene;
    piVar6 = (int *)(g_titleScene + 0x124c);
    temp_v1 = *piVar6;
    temp_v3 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1268))();
      *(unsigned char *)(temp_v2 + 0x1264) = 0;
    }
    temp_v2 = jyoucyuGetTableEntry(0);
    if (temp_v2 != 0) {
      FUN_002be5a4(3,0xffffffff,&LAB_00126024);
    }
    else {
      FUN_002be5a4(3,0xffffffff,&LAB_00126030);
    }
    FUN_002be5a4(3,0xffffffff,&LAB_00126040);
    FUN_002aed34(1,temp_v0 + 0x10);
  }
  return 0;
}

} /* extern "C" */
