/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001acf98` (_code @ 0x1acf98, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_001008a2. */
extern int *FUN_001861c4(void);
/* Supplied declaration required: FUN_001bcfb4. */
extern int FUN_002e3390(unsigned int);
/* Supplied declaration required: FUN_002e342c. */


/* WARNING: Removing unreachable block (ram,0x001ad084) */
/* WARNING: Removing unreachable block (ram,0x001ad078) */
/* WARNING: Removing unreachable block (ram,0x001ad08c) */

int * FUN_001acf98(void)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  char *pcVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [68];
  
  piVar1 = (int *)FUN_001861c4();
  temp_v2 = piVar1[1];
  FUN_002e342c(temp_v3,*piVar1 + 0xc);
  pcVar3 = *(char **)(temp_v2 + 8);
  if (*pcVar3 != '-') {
    FUN_001008a2(temp_v3);
  }
  else {
    FUN_001008a2(temp_v3,*(unsigned int *)(piVar1[pcVar3[1] * -8 + 0x181] + 8));
  }
  if (*(char *)(piVar1[1] + 0xd) != '\0') {
    FUN_001008a2(temp_v3,0x1ad0e8);
  }
  else {
    FUN_001008a2(temp_v3,0x1ad0f0);
  }
  temp_v2 = FUN_002e3390(*(unsigned int *)(temp_v2 + 8));
  if (temp_v2 == 0) {
    piVar1[2] = 0;
    return piVar1;
  }
  temp_v0 = piVar1[4];
  if ((temp_v0 & 0xfffeffff) == 0) {
    piVar1[4] = temp_v0 | 1;
    temp_v1 = 1;
    if ((temp_v0 & 0x10000) != 0) {
      temp_v1 = 3;
    }
    if (*(char *)(piVar1[1] + 0xd) != '\0') {
      if ((temp_v1 & 2) != 0) {
        temp_v1 = temp_v1 & 0xfffffffd;
      }
      else {
        temp_v1 = temp_v1 | 2;
      }
    }
    FUN_001bcfb4(temp_v3,0,temp_v1,0x1b5154,piVar1,0x80);
  }
  return piVar1;
}
