/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038ac90` (_code @ 0x38ac90, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf710. */
extern unsigned int *FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5f7c(unsigned int, unsigned int);


unsigned int FUN_0038ac90(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  
  puVar2 = (unsigned int *)FUN_002c0ac8();
  temp_v0 = DAT_0044ea00;
  if ((*(char *)((int)puVar2 + 0x415) != '\0') && ((*puVar2 & 0x10) != 0)) {
    temp_v1 = FUN_002c5f7c(1,0);
    piVar6 = (int *)(temp_v0 + 0x124c);
    temp_v2 = *piVar6;
    temp_v3 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 + 1;
    piVar6[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002bf710();
    FUN_002bf460(2,0xe,0x14f,0,0,6);
    FUN_002bf710();
    temp_v0 = DAT_0044ea00;
    piVar6 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar6;
    temp_v2 = piVar6[temp_v1 + 2];
    *piVar6 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar6[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002bef14();
    FUN_002c1b64(DAT_0044ea00);
    FUN_002c1abc(DAT_0044ea00);
  }
  return 0;
}
