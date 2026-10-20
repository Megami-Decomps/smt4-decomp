/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cdef8` (_code @ 0x1cdef8, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00288ef0(int *, unsigned int [4], int);
int FUN_002bf288(int, int, int, int, unsigned int, int);
int FUN_002bf538(void);
int FUN_002c39a4(int);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_0044e144; /* 0x44e144 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_00288ef0. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);


unsigned char FUN_001cdef8(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int temp_v5 [4];
  
  temp_v4 = 0;
  temp_v5[0] = 0;
  if ((*(char *)(DAT_0044e144 + 0x1e61) != '\0') &&
     (*(char *)(DAT_0044e144 + 0x1e67) == '\x03' || *(char *)(DAT_0044e144 + 0x1e67) == '\t')) {
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
    FUN_00288ef0(&temp_v4,temp_v5,9);
    FUN_002bf538();
    FUN_002bf288(2,0x1a,0,temp_v4,temp_v5[0],1);
    FUN_002bf538();
    FUN_00288ef0(&temp_v4,temp_v5,7);
    FUN_002bf538();
    FUN_002bf288(2,0x1a,1,temp_v4,temp_v5[0],1);
    FUN_002bf538();
    FUN_00288ef0(&temp_v4,temp_v5,8);
    FUN_002bf538();
    FUN_002bf288(2,0x1a,2,temp_v4,temp_v5[0],1);
    temp_v0 = DAT_0044ea00;
    piVar5 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
