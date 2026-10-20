/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343d04` (_code @ 0x343d04, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(int, int);
int FUN_0031416c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0040ae70(unsigned int, int);
int FUN_0040b0f8(unsigned int, unsigned char *);
int FUN_0040ba38(void);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_00343e48; /* 0x343e48 */
extern unsigned char DAT_00557c60; /* 0x557c60 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: asdOperatorNew. */
extern int lmapMainIsRunning(void);
/* Supplied declaration required: FUN_0031416c. */
extern int lmapSceneGetScript(void);
extern unsigned int *FUN_003e5d10(void);
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(unsigned int);
/* Supplied declaration required: FUN_0040b0f8. */
/* Supplied declaration required: FUN_0040ba38. */


void FUN_00343d04(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  temp_v1 = lmapSceneGetScript();
  if ((temp_v1 != 0) || (temp_v1 = lmapMainIsRunning(), temp_v1 != 0)) {
    FUN_0031416c(200,200,200,0x82,0x82,0x82,0x1e,0x1e,0x1e,0x96,0x96,0x96);
  }
  temp_v1 = 0x130;
  asdOperatorNew(0x130,param_1);
  puVar3 = (unsigned int *)0x0;
  if (temp_v1 != 0) {
    puVar3 = (unsigned int *)FUN_003e5d10();
    *puVar3 = (unsigned int)&DAT_00557c60;
  }
  *(unsigned int **)(param_1 + 0x1c) = puVar3;
  FUN_0040ba38();
  *(unsigned char *)(param_1 + 0x2c) = 0;
  temp_v1 = lmapMainIsRunning();
  if ((temp_v1 == 0) && (temp_v1 = lmapSceneGetScript(), temp_v1 == 0)) {
    *(unsigned char *)(param_1 + 0x2c) = 1;
    temp_v0 = DAT_0056fcc0;
    temp_v1 = FUN_0040af60(DAT_0056fcc0);
    if (temp_v1 == 0) {
      FUN_0040b0f8(temp_v0,&LAB_00343e48);
      FUN_0040ae70(temp_v0,1);
      return;
    }
  }
  return;
}

} /* extern "C" */
