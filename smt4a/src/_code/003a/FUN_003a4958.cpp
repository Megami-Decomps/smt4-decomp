/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a4958` (_code @ 0x3a4958, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcat(...);
int FUN_001bcfb4(unsigned char [68], int, unsigned int, int, int *, int);
int FUN_002e342c(unsigned char [68], int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: libc_strcat. */
extern int *FUN_001861c4(void);
/* Supplied declaration required: FUN_001bcfb4. */
extern int wstrlen(unsigned int);
/* Supplied declaration required: FUN_002e342c. */


/* WARNING: Removing unreachable block (ram,0x001ad080) */
/* WARNING: Removing unreachable block (ram,0x001ad084) */
/* WARNING: Removing unreachable block (ram,0x001ad088) */

int * FUN_003a4958(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  char *pcVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [68];
  
  piVar2 = (int *)FUN_001861c4();
  temp_v2 = piVar2[1];
  FUN_002e342c(temp_v3,*piVar2 + 0xc);
  pcVar3 = *(char **)(temp_v2 + 8);
  if (*pcVar3 != '-') {
    libc_strcat(temp_v3);
  }
  else {
    libc_strcat(temp_v3,*(unsigned int *)(piVar2[pcVar3[1] * -8 + 0x181] + 8));
  }
  if (*(char *)(piVar2[1] + 0xd) != '\0') {
    libc_strcat(temp_v3,0x1ad0e8);
  }
  else {
    libc_strcat(temp_v3,0x1ad0f0);
  }
  temp_v2 = wstrlen(*(unsigned int *)(temp_v2 + 8));
  if (temp_v2 == 0) {
    piVar2[2] = 0;
    return piVar2;
  }
  temp_v0 = piVar2[4];
  if ((temp_v0 & 0xfffeffff) == 0) {
    piVar2[4] = temp_v0 | 0x20;
    piVar2[4] = temp_v0 | 0x21;
    temp_v1 = 1;
    if ((temp_v0 & 0x10000) != 0) {
      temp_v1 = 3;
    }
    if (*(char *)(piVar2[1] + 0xd) != '\0') {
      if ((temp_v1 & 2) != 0) {
        temp_v1 = temp_v1 & 0xfffffffd;
      }
      else {
        temp_v1 = temp_v1 | 2;
      }
    }
    FUN_001bcfb4(temp_v3,0,temp_v1,0x1b5154,piVar2,0x80);
  }
  return piVar2;
}

} /* extern "C" */
