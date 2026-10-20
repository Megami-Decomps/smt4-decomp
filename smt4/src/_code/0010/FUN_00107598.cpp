/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107598` (_code @ 0x107598, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00111bb4(void);
int FUN_00111cfc(void);
int FUN_00111ff8(void);
int FUN_00112014(void);
int FUN_0011235c(void);
int FUN_00112490(void);
int FUN_0011d12c(void);

typedef int romwright_code(...);
extern unsigned int DAT_0044e330; /* 0x44e330 */
extern romwright_code *DAT_0044e334; /* 0x44e334 */
extern unsigned int DAT_0044e340; /* 0x44e340 */
extern signed char DAT_004c62a0; /* 0x4c62a0 */

/* Supplied declaration required: FUN_00111bb4. */
/* Supplied declaration required: FUN_00111cfc. */
/* Supplied declaration required: FUN_00111ff8. */
/* Supplied declaration required: FUN_00112014. */
/* Supplied declaration required: FUN_0011235c. */
/* Supplied declaration required: FUN_00112490. */
/* Supplied declaration required: FUN_0011d12c. */


void FUN_00107598(void)

{
/* irregular: 2 unstructured edge(s); 2 goto(s); 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  if (DAT_004c62a0 != '\0') {
    FUN_00112490();
    FUN_00112014();
    FUN_00111cfc();
    FUN_0011235c();
    FUN_00111bb4();
    FUN_00111ff8();
    DAT_004c62a0 = '\0';
    FUN_0011d12c();
    temp_v0 = 0;
    do {
      puVar2 = *(unsigned int **)(temp_v0 * 4 + 0x4c62ac);
joined_r0x001075e8:
      puVar1 = puVar2;
      if (puVar1 != (unsigned int *)0x0) {
        puVar2 = (unsigned int *)puVar1[0x10];
        if (puVar1[1] != 0) {
          if (DAT_0044e334 != (romwright_code *)0x0) {
            (*DAT_0044e334)(0x10000,0x105,*puVar1);
            if (DAT_0044e334 != (romwright_code *)0x0) {
              (*DAT_0044e334)(0x10000,0x100,0,puVar1);
            }
          }
        }
        else if (DAT_0044e334 != (romwright_code *)0x0) {
          (*DAT_0044e334)(0x10000,0x100,0,puVar1);
        }
        goto joined_r0x001075e8;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x20);
    temp_v0 = 0;
    do {
      puVar2 = *(unsigned int **)(temp_v0 * 4 + 0x4c6334);
joined_r0x0010765c:
      puVar1 = puVar2;
      if (puVar1 != (unsigned int *)0x0) {
        puVar2 = (unsigned int *)puVar1[6];
        if (puVar1[1] != 0) {
          if (DAT_0044e334 != (romwright_code *)0x0) {
            (*DAT_0044e334)(puVar1[5],0x104,*puVar1);
            if (DAT_0044e334 != (romwright_code *)0x0) {
              (*DAT_0044e334)(0x10000,0x100,0,puVar1);
            }
          }
        }
        else if (DAT_0044e334 != (romwright_code *)0x0) {
          (*DAT_0044e334)(0x10000,0x100,0,puVar1);
        }
        goto joined_r0x0010765c;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x20);
    if (DAT_0044e334 != (romwright_code *)0x0) {
      (*DAT_0044e334)(0x10000,0x100,0,DAT_0044e340);
    }
    DAT_0044e340 = 0;
    DAT_0044e330 = 0;
    DAT_0044e334 = (romwright_code *)0x0;
  }
  return;
}

} /* extern "C" */
