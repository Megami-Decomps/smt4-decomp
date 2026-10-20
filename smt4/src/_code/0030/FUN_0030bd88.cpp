/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030bd88` (_code @ 0x30bd88, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002497f8(unsigned int *, unsigned int *);
int FUN_002498ec(void);
int FUN_00283e48(void);
int FUN_002ae164(void);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_002497f8. */
/* Supplied declaration required: FUN_002498ec. */
/* Supplied declaration required: FUN_00283e48. */
extern int gameGetUnitRecord(void);
/* Supplied declaration required: FUN_002ae164. */
extern int idIsAbove400(unsigned int);


void FUN_0030bd88(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  short temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v1 = (unsigned int)*param_1;
  FUN_002498ec();
  temp_v2 = (unsigned int)*param_2;
  FUN_002498ec();
  temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
  temp_v6 = 0;
  temp_v7 = (unsigned int)*(unsigned short *)(temp_v2 + 0x26);
  temp_v8 = 0;
  temp_v3 = idIsAbove400(temp_v5);
  if (temp_v3 != 0) {
    temp_v1 = temp_v5;
    FUN_00283e48();
    temp_v4 = *(short *)(temp_v1 + 0x22);
  }
  else {
    temp_v1 = temp_v5;
    FUN_002ae164();
    temp_v4 = *(short *)(temp_v1 + 0x24);
  }
  temp_v3 = idIsAbove400(temp_v7);
  if (temp_v3 != 0) {
    temp_v1 = temp_v7;
    FUN_00283e48();
    temp_v0 = *(short *)(temp_v1 + 0x22);
  }
  else {
    temp_v1 = temp_v7;
    FUN_002ae164();
    temp_v0 = *(short *)(temp_v1 + 0x24);
  }
  if (temp_v0 == temp_v4) {
    if (temp_v6 < 0) {
      temp_v4 = 0;
    }
    else {
      temp_v3 = gameGetUnitRecord();
      temp_v4 = *(short *)(temp_v3 + 0x46);
    }
    if (temp_v8 < 0) {
      temp_v0 = 0;
    }
    else {
      temp_v3 = gameGetUnitRecord();
      temp_v0 = *(short *)(temp_v3 + 0x46);
    }
    if (temp_v0 == temp_v4) {
      FUN_002497f8(&temp_v5,&temp_v7);
    }
  }
  return;
}

} /* extern "C" */
