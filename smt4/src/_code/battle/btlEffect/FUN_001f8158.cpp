/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f8158` (_code @ 0x1f8158, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002218d4(void);
int FUN_002c425c(unsigned int, unsigned int);
int FUN_002c498c(int, int, int, int, int);
int FUN_002c4a08(...);
int FUN_003d971c(void);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_001e4a84(...); /* 0x1e4a84 */
extern unsigned char LAB_001f8230; /* 0x1f8230 */
extern unsigned char LAB_001f8244; /* 0x1f8244 */
extern int FUN_0020ee0c(...); /* 0x20ee0c */
extern int FUN_002c9fd0(...); /* 0x2c9fd0 */
extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_002218d4. */
/* Supplied declaration required: FUN_002c425c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_003d971c. */


void FUN_001f8158(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  
  puVar1 = &LAB_001f8230;
  FUN_002c4a08(&LAB_001f8230,2,0,0,FUN_001e4a84,FUN_002c9fd0,param_1,*param_1);
  param_1[0xe] = (unsigned int)puVar1;
  temp_v0 = 0;
  FUN_002218d4();
  param_1[0xf] = temp_v0;
  FUN_002c425c(*param_1,temp_v0);
  puVar1 = &LAB_001f8244;
  FUN_002c4a08(&LAB_001f8244,0x71,0,0,FUN_0020ee0c,0,param_1,*param_1);
  param_1[0x10] = (unsigned int)puVar1;
  temp_v0 = 0x100;
  FUN_002c498c(0x100,0x100,0,0x32a4,1);
  DAT_00435d18 = temp_v0;
  FUN_003d971c();
  return;
}

} /* extern "C" */
