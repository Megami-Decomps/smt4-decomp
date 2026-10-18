/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00112268` (_code @ 0x112268, 0x128 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e334; /* 0x44e334 */
extern int DAT_004655c0; /* 0x4655c0 */
extern int DAT_004655f0; /* 0x4655f0 */

/* Supplied declaration required: FUN_00123aac. */


void FUN_00112268(void)

{
/* irregular: 5 unstructured edge(s); 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = DAT_004655c0;
  if (DAT_004655f0 == 0) {
    return;
  }
  temp_v2 = 0;
  do {
    temp_v3 = *(int *)(DAT_004655f0 + temp_v2 * 4);
joined_r0x00112298:
    temp_v0 = temp_v3;
    if (temp_v0 != 0) {
      temp_v3 = *(int *)(temp_v0 + 0xc);
      if (*(int *)(temp_v0 + 4) != 0) {
        if (*(int *)(temp_v0 + 4) == 1) {
          if (*(int *)(temp_v0 + 8) == 0) {
            if (DAT_0044e334 != (romwright_code *)0x0) {
              (*DAT_0044e334)(0x10000,0x100,0,temp_v0);
            }
          }
          else if (DAT_0044e334 != (romwright_code *)0x0) {
            (*DAT_0044e334)(0x10000,0x100,0);
            if (DAT_0044e334 != (romwright_code *)0x0) {
              (*DAT_0044e334)(0x10000,0x100,0,temp_v0);
            }
          }
        }
      }
      else if (*(int *)(temp_v0 + 8) != 0) {
        FUN_00123aac(temp_v0);
        if (DAT_0044e334 != (romwright_code *)0x0) {
          (*DAT_0044e334)(0x10000,0x100,0,*(unsigned int *)(temp_v0 + 8));
          if (DAT_0044e334 != (romwright_code *)0x0) {
            (*DAT_0044e334)(0x10000,0x100,0,temp_v0);
          }
        }
      }
      else if (DAT_0044e334 != (romwright_code *)0x0) {
        (*DAT_0044e334)(0x10000,0x100,0,temp_v0);
      }
      goto joined_r0x00112298;
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x200) {
      if (DAT_0044e334 != (romwright_code *)0x0) {
        (*DAT_0044e334)(0x10000,0x100,0,*(unsigned int *)(DAT_004655f0 + 0x800));
      }
      *(unsigned int *)(temp_v1 + 0x5dc) = 0;
      *(unsigned int *)(temp_v1 + 0x5d8) = 0;
      DAT_004655f0 = 0;
      return;
    }
  } while( 1 );
}
