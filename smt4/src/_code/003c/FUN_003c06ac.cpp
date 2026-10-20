/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c06ac` (_code @ 0x3c06ac, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00256898(int, int);
int FUN_002568c4(int);
int FUN_0027da30(int, int);
int FUN_00297468(...);
int devilGetRecord(void);
int FUN_002be624(...);
int FUN_003dadd8(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_btlMain; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_00256898. */
/* Supplied declaration required: FUN_002568c4. */
extern int FUN_00256940(int, int, unsigned int);
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_003dadd8. */


void FUN_003c06ac(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [128];
  
  temp_v1 = *param_1;
  FUN_0027da30(temp_v1,param_1[8]);
  temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
  devilGetRecord();
  temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 0x31);
  if (temp_v3 == 99) {
    temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 0x30);
  }
  FUN_002be624(temp_v4,"battle/talk/Tone%s.tbb",*(unsigned int *)(temp_v3 * 4 + 0x439b70));
  FUN_00297468(temp_v4,param_1 + 2,0);
  temp_v0 = *(unsigned char *)(temp_v2 + 0x30);
  param_1[0x32] = (unsigned int)temp_v0;
  FUN_002be624(temp_v4,"battle/talk/TalkTone%s.mbm",*(unsigned int *)((unsigned int)temp_v0 * 4 + 0x439b70));
  FUN_00297468(temp_v4,param_1 + 5,0);
  FUN_00297468("battle/talk/talk.bf",param_1 + 3,0);
  FUN_003dadd8(DAT_00435d18);
  param_1[6] = 1;
  if ((-1 < *(int *)(g_btlMain + 0x760)) &&
     (temp_v1 = FUN_00256940(g_btlMain,*param_1,1), temp_v1 != 0)) {
    FUN_002568c4(0);
  }
  FUN_00256898(1,0);
  return;
}

} /* extern "C" */
