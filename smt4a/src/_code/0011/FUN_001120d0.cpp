/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001120d0` (_code @ 0x1120d0, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00121bf8(void);
int FUN_002ea3d0(int, unsigned int);
int FUN_002eb5f4(void);

extern unsigned char LAB_00111b05; /* 0x111b05 */
extern unsigned char LAB_00112134; /* 0x112134 */

/* Supplied declaration required: FUN_00121bf8. */
extern int FUN_001321d2(int);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002eb5f4. */
extern int FUN_002fd634(int);


void FUN_001120d0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar4;
  unsigned char temp_v2 [16];
  unsigned char temp_v3 [20];
  unsigned char *puVar3;
  
  puVar3 = temp_v2;
  temp_v0 = FUN_002eb5f4();
  if (temp_v0 != 0) {
    FUN_002eb5f4();
    FUN_00121bf8();
    temp_v0 = FUN_001321d2(param_1 + 400);
    if ((temp_v0 != 0) || (temp_v0 = FUN_002fd634(param_1 + 0x9c), temp_v0 != 0)) {
      *(unsigned int *)(param_1 + 0x98) = 0;
    }
    puVar4 = (unsigned char *)0x112049;
  }
  else {
    puVar4 = &LAB_00111b05;
    puVar3 = temp_v3;
  }
  temp_v1 = FUN_002ea3c0(puVar3,puVar4,0,&LAB_00112134);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}

} /* extern "C" */
