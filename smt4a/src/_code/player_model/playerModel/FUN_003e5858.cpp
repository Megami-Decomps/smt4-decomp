/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5858` (_code @ 0x3e5858, 0x248 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_001aea28(unsigned int);
int FUN_003e573c(int, int, int, int);
int FUN_003fd7b4(unsigned int);
int FUN_003fe86c(unsigned int, int, int);
int FUN_0040aad4(...);
int FUN_0040ab7c(unsigned int, int);
int FUN_0040ab8c(...);
int FUN_0040ace8(unsigned int, unsigned int);

typedef int romwright_code(...);
extern unsigned char LAB_003e5aac; /* 0x3e5aac */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_003e573c. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
/* Supplied declaration required: FUN_0040ab8c. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


void FUN_003e5858(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 4) == 1)) {
    if (*(int *)(param_1 + 8) != 0) {
      temp_v0 = FUN_0040ab8c();
      if (temp_v0 != 0) {
        FUN_0040ab7c(*(unsigned int *)(param_1 + 8),2);
        FUN_0040aad4(*(unsigned int *)(param_1 + 8),0);
        temp_v2 = *(unsigned int *)(*(int *)(param_1 + 8) + 4);
        FUN_003fd7b4(temp_v2);
        FUN_003fe86c(temp_v2,0,2);
        FUN_0040ace8(DAT_0056fcc0,temp_v2);
        temp_v0 = *(int *)(*(int *)(param_1 + 8) + 4);
        *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
        *(unsigned int *)(param_1 + 4) = 0;
      }
    }
    else {
      *(unsigned int *)(param_1 + 4) = 0;
    }
  }
  temp_v0 = 0;
  do {
    temp_v3 = param_1 + temp_v0 * 0x5c;
    puVar5 = (unsigned int *)(temp_v3 + 0x1c);
    switch(*puVar5) {
    case 1:
      temp_v1 = FUN_0040ab8c(*(unsigned int *)(temp_v3 + 0x24));
      if (temp_v1 != 0) {
        FUN_0040ab7c(*(unsigned int *)(temp_v3 + 0x24),2);
        FUN_0040aad4(*(unsigned int *)(temp_v3 + 0x24),*(unsigned int *)(*(int *)(param_1 + 8) + 4));
        temp_v2 = *(unsigned int *)(*(int *)(temp_v3 + 0x24) + 4);
        FUN_003fd7b4(temp_v2);
        FUN_0040ace8(DAT_0056fcc0,temp_v2);
        *puVar5 = 0;
      }
      break;
    case 2:
      *puVar5 = 3;
      temp_v3 = *(int *)(*(int *)(temp_v3 + 0x24) + 4);
      *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
      FUN_001aea28(DAT_0056fcc0);
      break;
    case 3:
      if (*(int **)(temp_v3 + 0x24) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v3 + 0x24) + 4))();
        *(unsigned int *)(temp_v3 + 0x24) = 0;
      }
      *puVar5 = 0;
      if (*(char *)(temp_v3 + 0x38) != '\0') {
        temp_v1 = 0x20;
        FUN_00178b04(0x20,&LAB_003e5aac,0x38a);
        temp_v2 = 0;
        if (temp_v1 != 0) {
          temp_v2 = FUN_0040ac08();
        }
        *(unsigned int *)(temp_v3 + 0x24) = temp_v2;
        FUN_003e573c(param_1,temp_v0,temp_v3 + 0x38,*(unsigned short *)(temp_v3 + 0x20));
      }
      break;
    case 4:
      *puVar5 = 1;
      break;
    case 5:
      if ((*(int *)(param_1 + 4) == 0) &&
         (temp_v1 = FUN_0040ab8c(*(unsigned int *)(param_1 + 8)), temp_v1 != 0)) {
        FUN_003e573c(param_1,temp_v0,temp_v3 + 0x38,*(unsigned short *)(temp_v3 + 0x20));
      }
    }
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 3) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
