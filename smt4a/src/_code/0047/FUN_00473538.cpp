/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473538` (_code @ 0x473538, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN18WindowStatusResultC1Ej(...);
int FUN_002e3140(...);
int FUN_002fb0d4(...);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern int FUN_004733cc(...); /* 0x4733cc */
extern unsigned char LAB_00514aa4; /* 0x514aa4 */
extern unsigned char LAB_00514b44; /* 0x514b44 */
extern unsigned char LAB_00514b94; /* 0x514b94 */
extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
extern unsigned int *_ZN18WindowStatusResultC1Ev(unsigned char *);
extern int legacyResourceIdRemap(int);
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */
extern int FUN_0047d754(int);


void FUN_00473538(unsigned char *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3 [5];
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  unsigned char *temp_v6;
  int temp_v7;
  
  piVar2 = temp_v3;
  *param_1 = 1;
  puVar1 = (unsigned int *)_ZN18WindowStatusResultC1Ev(param_1 + 4);
  puVar1[2] = 0;
  puVar1[3] = 0;
  _ZN18WindowStatusResultC1Ej(temp_v3,0);
  temp_v2 = piVar2[1];
  *puVar1 = *piVar2;
  puVar1[1] = temp_v2;
  temp_v0 = g_aocMain;
  if (*(int *)(param_2 + 4) != 0) {
    if ((*(int *)(param_2 + 4) == 1) && (temp_v0 = FUN_0047d754(g_aocMain + 0x88), temp_v0 != 0)) {
      temp_v0 = legacyResourceIdRemap(param_2 + 0xc);
      if (temp_v0 >= 0) {
        *(unsigned char *)(puVar1 + -1) = 0;
      }
      else {
        *(unsigned char *)(puVar1 + -1) = 100;
        temp_v2 = *(unsigned int *)(param_2 + 0x10);
        *puVar1 = *(unsigned int *)(param_2 + 0xc);
        puVar1[1] = temp_v2;
      }
    }
  }
  else {
    *(unsigned int *)(param_2 + 4) = 1;
    temp_v1 = temp_v0 + 0x88;
    temp_v0 = *(int *)(temp_v0 + 0x94);
    temp_v3[4] = 4;
    temp_v4 = &LAB_00514aa4;
    temp_v5 = &LAB_00514b94;
    temp_v6 = &LAB_00514b44;
    temp_v3[3] = 0;
    temp_v3[0] = *(int *)(temp_v0 + 0xc) + *(int *)(temp_v0 + 8);
    temp_v3[1] = 0x11;
    temp_v3[2] = 0xfffffffe;
    temp_v7 = param_2;
    FUN_002fb0d4(temp_v1,temp_v3 + 4,FUN_004733cc,&temp_v7);
    if ((temp_v1 & 0x7e00000) != 0x600000) {
      if ((int)temp_v1 < 0) {
        FUN_002e3140();
      }
      return;
    }
  }
  return;
}

} /* extern "C" */
