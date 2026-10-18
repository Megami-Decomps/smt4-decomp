/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d470` (_code @ 0x10d470, 0x9e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern unsigned char DAT_00559114; /* 0x559114 */
extern unsigned int DAT_005949dc; /* 0x5949dc */
extern unsigned char DAT_00630344; /* 0x630344 */

/* Supplied declaration required: FUN_0010564c. */
extern int FUN_001220aa(unsigned int *);
extern int FUN_00122248(int);
extern int FUN_001224c8(int);
/* Supplied declaration required: FUN_00129288. */
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int FUN_002e9318(int);
/* Supplied declaration required: FUN_002ea0b8. */
/* Supplied declaration required: FUN_002eda80. */
/* Supplied declaration required: FUN_002f76ec. */
extern int FUN_002f7708(int);


void FUN_0010d470(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  unsigned char temp_v2 [12];
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [8];
  
  *param_1 = (unsigned int)&DAT_00559114;
  FUN_002e6e34(temp_v2,&DAT_00630344);
  DAT_005949dc = 0;
  FUN_002e6e5c(temp_v2);
  temp_v0 = FUN_001220aa(param_1 + 0x66);
  temp_v0 = temp_v0 - 0x20;
  FUN_0010564c(temp_v0);
  temp_v0 = FUN_001224c8(temp_v0 - 0x18);
  temp_v1 = FUN_00122248(temp_v0 - 0x1c);
  piVar4 = (int *)(temp_v1 - 0x1c);
  temp_v0 = *(int *)(temp_v1 - 0xc);
  if (temp_v0 != 0) {
    temp_v3 = *(unsigned int *)(temp_v0 + 8);
    temp_v4 = temp_v0;
    FUN_002eda80(temp_v5,piVar4,&temp_v3,&temp_v4);
    FUN_002f76ec(piVar4,*(unsigned int *)(temp_v1 - 0xc),0);
    while (piVar3 = (int *)*piVar4, piVar3 != (int *)0x0) {
      *piVar4 = *piVar3;
      FUN_002e6e14(piVar3[2]);
      FUN_002e6e14(piVar3);
    }
  }
  temp_v1 = temp_v1 - 0x78;
  FUN_00129288(temp_v1);
  temp_v0 = FUN_002f7708(temp_v1 - 0x5c);
  temp_v0 = FUN_002f7708(temp_v0 - 0x5c);
  temp_v0 = FUN_002e9318(temp_v0 - 8);
  FUN_002ea0b8(temp_v0 - 0xc);
  return;
}
