/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335518` (_code @ 0x335518, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002402c4(int, unsigned char [132]);
int FUN_002a7218(void);
int FUN_002b06c4(unsigned int);
int FUN_002be624(...);
int FUN_002bf694(int *, unsigned char [132]);
int FUN_002c415c(void);
int FUN_002c4938(unsigned char [132], int);

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002402c4. */
extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002b06c4. */
extern int FUN_002b6a54(int, int);
extern int FUN_002b6ad0(void);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c4938. */
extern int FUN_00385f34(int, unsigned short);


void FUN_00335518(int *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [132];
  
  if (param_1[1] != 0) {
    FUN_002a7218();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    FUN_002c415c();
    *param_1 = 0;
  }
  param_1[3] = 1;
  temp_v0 = 0;
  if (((**(unsigned char **)(param_2 + 0x28) & 8) != 0) && (temp_v1 = FUN_002b6ad0(), temp_v1 != 0)) {
    temp_v0 = 1;
  }
  *(unsigned int *)(DAT_00433158 + 0x444) = 0xffffffff;
  temp_v1 = *(int *)(param_2 + 0x28);
  if (temp_v0) {
    temp_v1 = FUN_002b6a54((int)*(short *)(temp_v1 + 4),(int)*(short *)(temp_v1 + 6));
    FUN_002c4938(temp_v3,0x80);
    FUN_002be624(temp_v3,"battle/AI/%s.bf",temp_v1 + 0x48);
    temp_v1 = FUN_002939f4();
    FUN_002402c4(temp_v1,temp_v3);
    if (temp_v1 == 0) {
      FUN_002be624(temp_v3,"battle/AI/tmp.bf");
    }
    FUN_002bf694(param_1 + 4,temp_v3);
  }
  else {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
    FUN_002b06c4(temp_v2);
    FUN_002c4938(temp_v3,0x80);
    FUN_002be624(temp_v3,"battle/AI/%s.bf",temp_v2 + 0x8a);
    temp_v1 = FUN_002939f4();
    FUN_002402c4(temp_v1,temp_v3);
    if (temp_v1 == 0) {
      FUN_002be624(temp_v3,"battle/AI/tmp.bf");
    }
    FUN_002bf694(param_1 + 4,temp_v3);
    temp_v1 = FUN_00385f34(DAT_00433158,*(unsigned short *)(*(int *)(param_2 + 0x28) + 2));
    if (temp_v1 != 0) {
      *(unsigned int *)(DAT_00433158 + 0x444) = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x28) + 2);
      return;
    }
  }
  return;
}

} /* extern "C" */
