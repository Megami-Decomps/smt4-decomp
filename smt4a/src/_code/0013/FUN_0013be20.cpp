/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013be20` (_code @ 0x13be20, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00148f48(void);
int FUN_00149090(void);
int FUN_0014938c(void);
int FUN_001493a8(void);
int FUN_001496f0(void);
int FUN_00149824(void);
int FUN_0015a270(void);

typedef int romwright_code(...);
extern unsigned int DAT_0058918c; /* 0x58918c */
extern romwright_code *DAT_00589190; /* 0x589190 */
extern unsigned int DAT_0058919c; /* 0x58919c */
extern signed char DAT_0061a480; /* 0x61a480 */

/* Supplied declaration required: FUN_00148f48. */
/* Supplied declaration required: FUN_00149090. */
/* Supplied declaration required: FUN_0014938c. */
/* Supplied declaration required: FUN_001493a8. */
/* Supplied declaration required: FUN_001496f0. */
/* Supplied declaration required: FUN_00149824. */
/* Supplied declaration required: FUN_0015a270. */


void FUN_0013be20(void)

{
/* irregular: 2 unstructured edge(s); 2 goto(s); 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  if (DAT_0061a480 != '\0') {
    FUN_00149824();
    FUN_001493a8();
    FUN_00149090();
    FUN_001496f0();
    FUN_00148f48();
    FUN_0014938c();
    DAT_0061a480 = '\0';
    FUN_0015a270();
    temp_v0 = 0;
    do {
      puVar2 = *(unsigned int **)(temp_v0 * 4 + 0x61a48c);
joined_r0x0013be70:
      puVar1 = puVar2;
      if (puVar1 != (unsigned int *)0x0) {
        puVar2 = (unsigned int *)puVar1[0x10];
        if (puVar1[1] != 0) {
          if (DAT_00589190 != (romwright_code *)0x0) {
            (*DAT_00589190)(0x10000,0x105,*puVar1);
            if (DAT_00589190 != (romwright_code *)0x0) {
              (*DAT_00589190)(0x10000,0x100,0,puVar1);
            }
          }
        }
        else if (DAT_00589190 != (romwright_code *)0x0) {
          (*DAT_00589190)(0x10000,0x100,0,puVar1);
        }
        goto joined_r0x0013be70;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x20);
    temp_v0 = 0;
    do {
      puVar2 = *(unsigned int **)(temp_v0 * 4 + 0x61a514);
joined_r0x0013bee4:
      puVar1 = puVar2;
      if (puVar1 != (unsigned int *)0x0) {
        puVar2 = (unsigned int *)puVar1[6];
        if (puVar1[1] != 0) {
          if (DAT_00589190 != (romwright_code *)0x0) {
            (*DAT_00589190)(puVar1[5],0x104,*puVar1);
            if (DAT_00589190 != (romwright_code *)0x0) {
              (*DAT_00589190)(0x10000,0x100,0,puVar1);
            }
          }
        }
        else if (DAT_00589190 != (romwright_code *)0x0) {
          (*DAT_00589190)(0x10000,0x100,0,puVar1);
        }
        goto joined_r0x0013bee4;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x20);
    if (DAT_00589190 != (romwright_code *)0x0) {
      (*DAT_00589190)(0x10000,0x100,0,DAT_0058919c);
    }
    DAT_0058919c = 0;
    DAT_0058918c = 0;
    DAT_00589190 = (romwright_code *)0x0;
  }
  return;
}

} /* extern "C" */
