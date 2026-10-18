/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6228` (_code @ 0x2a6228, 0x1b8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
} param_4_stack;

extern unsigned char LAB_00151bdc; /* 0x151bdc */
extern unsigned char LAB_002a63e0; /* 0x2a63e0 */
extern unsigned char LAB_002a63e8; /* 0x2a63e8 */
extern unsigned int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_0014ec5c. */
/* Supplied declaration required: FUN_00151a9c. */
extern int FUN_002a71c0(unsigned int, int, unsigned int, unsigned char *);
extern int FUN_002a728c(unsigned int);
/* Supplied declaration required: FUN_002b67e0. */
extern int *FUN_002b96f0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf86c. */
extern int FUN_002c3290(unsigned int);
/* Supplied declaration required: FUN_002c4b30. */


int * FUN_002a6228(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  char *pcVar5;
  int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [128];
  unsigned char temp_v6 [132];
  
  temp_v0 = FUN_002a728c(param_2);
  if (temp_v0 == -1) {
    return (int *)0x0;
  }
  FUN_002c4b30(temp_v5,0x80);
  temp_v0 = FUN_002a71c0(param_1,temp_v0,param_3,temp_v5);
  if (temp_v0 == 0) {
    return (int *)0x0;
  }
  *(unsigned char *)(temp_v0 + 0xd) = 0;
  *(unsigned int *)(temp_v0 + 8) = 0;
  piVar2 = (int *)FUN_002b96f0(param_2,param_3);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  temp_v3 = piVar2[1];
  FUN_0014ec5c();
  FUN_002bf86c(temp_v4,*piVar2 + 0xc);
  pcVar5 = *(char **)(temp_v3 + 8);
  if (*pcVar5 != '-') {
    FUN_002b67e0(temp_v4);
  }
  else {
    FUN_002b67e0(temp_v4,*(unsigned int *)(piVar2[pcVar5[1] * -8 + 0x181] + 8));
  }
  if (*(char *)(piVar2[1] + 0xd) != '\0') {
    FUN_002b67e0(temp_v4,&LAB_002a63e0);
  }
  else {
    FUN_002b67e0(temp_v4,&LAB_002a63e8);
  }
  temp_v3 = FUN_002c3290(*(unsigned int *)(temp_v3 + 8));
  if (temp_v3 == 0) {
    piVar2[2] = 0;
    return piVar2;
  }
  FUN_002bf86c(temp_v6,temp_v5);
  temp_v1 = piVar2[4];
  if ((temp_v1 & 0xfffeffff) != 0) {
    return piVar2;
  }
  if (param_4 == 0x20000) {
    temp_v1 = temp_v1 | 0x20;
    piVar2[4] = temp_v1;
  }
  else if (param_4 == 0x30000) {
    temp_v1 = temp_v1 | 0x40;
    piVar2[4] = temp_v1;
  }
  piVar2[4] = temp_v1 | 1;
  temp_v2 = 1;
  if ((temp_v1 & 0x10000) != 0) {
    temp_v2 = 3;
  }
  if (*(char *)(piVar2[1] + 0xd) != '\0') {
    if ((temp_v2 & 2) != 0) {
      temp_v2 = temp_v2 & 0xfffffffd;
    }
    else {
      temp_v2 = temp_v2 | 2;
    }
  }
  FUN_00151a9c(DAT_00433130,temp_v6,temp_v4,0,temp_v2,&LAB_00151bdc,piVar2,0x80,temp_v0);
  return piVar2;
}
