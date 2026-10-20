/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001095ec` (_code @ 0x1095ec, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010af50(void);
int FUN_00114bf4(void);
int FUN_002e6e14(...);
int FUN_002e7232(...);
int FUN_002efbd8(unsigned int *);
int FUN_002efcb8(unsigned int *);
int FUN_002efcfc(int *, int);
int FUN_002efd12(int, unsigned int *);
int FUN_002efd60(int *);
int FUN_002efdb4(int);
int FUN_002efe80(unsigned int);
int FUN_002f27de(int);
int FUN_002f2834(int);
int FUN_002f2878(unsigned int *);
int FUN_002f28bc(void);
int FUN_002f292c(int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_00558b3c; /* 0x558b3c */

extern int FUN_0010600c(unsigned int *);
/* Supplied declaration required: FUN_0010af50. */
extern int FUN_0010f1d0(int);
/* Supplied declaration required: FUN_00114bf4. */
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002e7232. */
extern int FUN_002eda5a(int);
/* Supplied declaration required: FUN_002efbd8. */
/* Supplied declaration required: FUN_002efcb8. */
/* Supplied declaration required: FUN_002efcfc. */
/* Supplied declaration required: FUN_002efd12. */
/* Supplied declaration required: FUN_002efd60. */
/* Supplied declaration required: FUN_002efdb4. */
/* Supplied declaration required: FUN_002efe80. */
/* Supplied declaration required: FUN_002f27de. */
/* Supplied declaration required: FUN_002f2834. */
/* Supplied declaration required: FUN_002f2878. */
/* Supplied declaration required: FUN_002f28bc. */
extern int FUN_002f2910(int);
/* Supplied declaration required: FUN_002f292c. */


void FUN_001095ec(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  *param_1 = (unsigned int)&DAT_00558b3c;
  temp_v2 = param_2;
  temp_v3 = param_3;
  temp_v4 = param_4;
  FUN_002efbd8(param_1);
  if (param_1[0x2b] != 0) {
    FUN_002efe80(param_1[1] + 0x14);
    FUN_002e7232(param_1[0x2b]);
    param_1[0x2b] = 0;
  }
  for (piVar4 = (int *)param_1[0x27]; (int *)param_1[0x28] != piVar4; piVar4 = piVar4 + 1) {
    FUN_002efcfc(&temp_v2,*piVar4);
    temp_v3 = temp_v2;
    puVar3 = (unsigned int *)&temp_v3;
    while( 1 ) {
      temp_v0 = *piVar4;
      FUN_002efd12(temp_v0,puVar3);
      if (temp_v0 == 0) break;
      FUN_002efcb8(param_1);
      FUN_002efd60(&temp_v2);
      puVar3 = (unsigned int *)&temp_v4;
      temp_v4 = temp_v2;
    }
    FUN_002efdb4(*piVar4);
    FUN_002f27de(*piVar4);
    if (*piVar4 != 0) {
      FUN_0010af50();
      FUN_002e6e14();
    }
  }
  for (piVar4 = (int *)param_1[0x24]; (int *)param_1[0x25] != piVar4; piVar4 = piVar4 + 1) {
    FUN_002f2834(*piVar4);
    if (*piVar4 != 0) {
      FUN_00114bf4();
      FUN_002e6e14();
    }
  }
  for (piVar4 = (int *)param_1[0x4c]; (int *)param_1[0x4d] != piVar4; piVar4 = piVar4 + 1) {
    if (*piVar4 != 0) {
      FUN_002e7232();
    }
  }
  param_1 = param_1 + 0xd0;
  FUN_002f2878(param_1);
  temp_v0 = FUN_0010600c(param_1 + -0x50);
  temp_v0 = FUN_0010f1d0(temp_v0 - 0x18);
  temp_v0 = temp_v0 - 0x70;
  FUN_002f28bc();
  FUN_002e6e14(*(unsigned int *)(temp_v0 - 0x14));
  temp_v0 = FUN_002eda5a(temp_v0 - 0x3c);
  temp_v0 = FUN_002f2910(temp_v0 - 0xc);
  for (temp_v1 = *(int *)(temp_v0 - 0x94); temp_v1 != *(int *)(temp_v0 - 0x90); temp_v1 = temp_v1 + 4) {
  }
  FUN_002e6e14();
  for (temp_v1 = *(int *)(temp_v0 - 0xa0); temp_v1 != *(int *)(temp_v0 - 0x9c); temp_v1 = temp_v1 + 4) {
  }
  FUN_002e6e14();
  FUN_002f292c(temp_v0 - 0x130);
  return;
}

} /* extern "C" */
