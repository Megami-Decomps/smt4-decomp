/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023e548` (_code @ 0x23e548, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_00152f74; /* 0x152f74 */
extern unsigned char LAB_002a6594; /* 0x2a6594 */
extern unsigned char LAB_002a659c; /* 0x2a659c */

/* Supplied declaration required: FUN_002ae6c8. */
/* Supplied declaration required: FUN_002b67e0. */
extern int *FUN_002b96f0(void);
/* Supplied declaration required: FUN_002bf86c. */
extern int FUN_002c3290(unsigned int);


/* WARNING: Removing unreachable block (ram,0x002a652c) */
/* WARNING: Removing unreachable block (ram,0x002a6530) */
/* WARNING: Removing unreachable block (ram,0x002a6534) */

int * FUN_0023e548(void)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  char *pcVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [68];
  
  piVar1 = (int *)FUN_002b96f0();
  temp_v2 = piVar1[1];
  FUN_002bf86c(temp_v3,*piVar1 + 0xc);
  pcVar3 = *(char **)(temp_v2 + 8);
  if (*pcVar3 != '-') {
    FUN_002b67e0(temp_v3);
  }
  else {
    FUN_002b67e0(temp_v3,*(unsigned int *)(piVar1[pcVar3[1] * -8 + 0x181] + 8));
  }
  if (*(char *)(piVar1[1] + 0xd) != '\0') {
    FUN_002b67e0(temp_v3,&LAB_002a6594);
  }
  else {
    FUN_002b67e0(temp_v3,&LAB_002a659c);
  }
  temp_v2 = FUN_002c3290(*(unsigned int *)(temp_v2 + 8));
  if (temp_v2 == 0) {
    piVar1[2] = 0;
    return piVar1;
  }
  temp_v0 = piVar1[4];
  if ((temp_v0 & 0xfffeffff) == 0) {
    piVar1[4] = temp_v0 | 0x20;
    piVar1[4] = temp_v0 | 0x21;
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
    FUN_002ae6c8(temp_v3,0,temp_v1,&LAB_00152f74,piVar1,0x80);
  }
  return piVar1;
}
