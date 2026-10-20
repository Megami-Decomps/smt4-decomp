/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111df0` (_code @ 0x111df0, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3d0(int, unsigned int);
int FUN_002ea446(int, int);
int FUN_002eb588(unsigned char [8]);
int FUN_002ee64c(int, int);
int FUN_002fd412(int);

extern unsigned char LAB_00111b05; /* 0x111b05 */
extern unsigned char LAB_00111ea0; /* 0x111ea0 */

extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea446. */
/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002eb5f4(void);
extern int FUN_002ee5c4(int, int);
/* Supplied declaration required: FUN_002ee64c. */
extern int FUN_002efd4a(int, unsigned char *);
/* Supplied declaration required: FUN_002fd412. */


void FUN_00111df0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar4;
  int *piVar5;
  int temp_v2;
  unsigned char temp_v3 [8];
  unsigned char temp_v4 [20];
  unsigned char *puVar3;
  
  puVar3 = temp_v3;
  temp_v0 = FUN_002eb5f4();
  if ((temp_v0 != 0) && (temp_v0 = FUN_002eb5f4(), *(int *)(temp_v0 + 0xd0) != 0)) {
    temp_v0 = FUN_002eb5f4();
    piVar5 = (int *)(param_1 + 0x1ac);
    temp_v2 = *(int *)(temp_v0 + 0xd0);
    temp_v0 = FUN_002ee5c4(temp_v2,*piVar5 + 8);
    if (temp_v0 != -1) {
      *(int *)(param_1 + 0x1b8) = temp_v0;
      puVar4 = (unsigned char *)0x111b95;
      puVar3 = temp_v3;
    }
    else {
      FUN_002eb588(temp_v3);
      temp_v0 = FUN_002efd4a(param_1 + 0x188,temp_v3);
      if ((temp_v0 == 0) &&
         ((*(char *)(param_1 + 0x1b0) != '\0' || (FUN_002ee64c(temp_v2,*piVar5 + 8), temp_v2 == 0)))) {
        FUN_002ea446(param_1,100);
        return;
      }
      FUN_002fd412(param_1);
      *piVar5 = *(int *)*piVar5;
      puVar4 = (unsigned char *)0x111a09;
      puVar3 = temp_v4;
    }
  }
  else {
    puVar4 = &LAB_00111b05;
  }
  temp_v1 = FUN_002ea3c0(puVar3,puVar4,0,&LAB_00111ea0);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}

} /* extern "C" */
