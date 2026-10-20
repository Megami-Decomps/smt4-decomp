/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a5ed0` (_code @ 0x2a5ed0, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdLoadFileAsync(unsigned char [68], int, unsigned int, unsigned char *, int *, int);
int FUN_002b64a0(...);
int FUN_002bf694(unsigned char [68], int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_00153068; /* 0x153068 */
extern unsigned char LAB_002a6250; /* 0x2a6250 */
extern unsigned char LAB_002a6258; /* 0x2a6258 */

/* Supplied declaration required: asdLoadFileAsync. */
/* Supplied declaration required: FUN_002b64a0. */
extern int *asdTMTexTableCallFileB(void);
/* Supplied declaration required: FUN_002bf694. */
extern int FUN_002c30c4(unsigned int);


/* WARNING: Removing unreachable block (ram,0x002a61ec) */
/* WARNING: Removing unreachable block (ram,0x002a61e0) */
/* WARNING: Removing unreachable block (ram,0x002a61f4) */

int * FUN_002a5ed0(void)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  char *pcVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [68];
  
  piVar1 = (int *)asdTMTexTableCallFileB();
  temp_v2 = piVar1[1];
  FUN_002bf694(temp_v3,*piVar1 + 0xc);
  pcVar3 = *(char **)(temp_v2 + 8);
  if (*pcVar3 != '-') {
    FUN_002b64a0(temp_v3);
  }
  else {
    FUN_002b64a0(temp_v3,*(unsigned int *)(piVar1[pcVar3[1] * -8 + 0x181] + 8));
  }
  if (*(char *)(piVar1[1] + 0xd) != '\0') {
    FUN_002b64a0(temp_v3,&LAB_002a6250);
  }
  else {
    FUN_002b64a0(temp_v3,&LAB_002a6258);
  }
  temp_v2 = FUN_002c30c4(*(unsigned int *)(temp_v2 + 8));
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
    asdLoadFileAsync(temp_v3,0,temp_v1,&LAB_00153068,piVar1,0x80);
  }
  return piVar1;
}

} /* extern "C" */
