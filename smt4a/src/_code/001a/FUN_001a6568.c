/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6568` (_code @ 0x1a6568, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
} param_4_stack;

extern unsigned char LAB_001a6720; /* 0x1a6720 */
extern unsigned char LAB_001a6728; /* 0x1a6728 */
extern unsigned char LAB_001b32a4; /* 0x1b32a4 */
extern unsigned int DAT_0057027c; /* 0x57027c */

/* Supplied declaration required: FUN_001008a2. */
extern int *FUN_001861c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001ad150. */
extern int FUN_001b2bd8(unsigned int, int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_001b3008. */
extern int FUN_001b3214(unsigned int);
extern int FUN_002e3390(unsigned int);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */


int * FUN_001a6568(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

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
  
  temp_v0 = FUN_001b3214(param_2);
  if (temp_v0 == -1) {
    return (int *)0x0;
  }
  FUN_002e6354(temp_v5,0x80);
  temp_v0 = FUN_001b2bd8(param_1,temp_v0,param_3,temp_v5);
  if (temp_v0 == 0) {
    return (int *)0x0;
  }
  *(unsigned char *)(temp_v0 + 0xd) = 0;
  *(unsigned int *)(temp_v0 + 8) = 0;
  piVar2 = (int *)FUN_001861c4(param_2,param_3);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  temp_v3 = piVar2[1];
  FUN_001ad150();
  FUN_002e342c(temp_v4,*piVar2 + 0xc);
  pcVar5 = *(char **)(temp_v3 + 8);
  if (*pcVar5 != '-') {
    FUN_001008a2(temp_v4);
  }
  else {
    FUN_001008a2(temp_v4,*(unsigned int *)(piVar2[pcVar5[1] * -8 + 0x181] + 8));
  }
  if (*(char *)(piVar2[1] + 0xd) != '\0') {
    FUN_001008a2(temp_v4,&LAB_001a6720);
  }
  else {
    FUN_001008a2(temp_v4,&LAB_001a6728);
  }
  temp_v3 = FUN_002e3390(*(unsigned int *)(temp_v3 + 8));
  if (temp_v3 == 0) {
    piVar2[2] = 0;
    return piVar2;
  }
  FUN_002e342c(temp_v6,temp_v5);
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
  FUN_001b3008(DAT_0057027c,temp_v6,temp_v4,0,temp_v2,&LAB_001b32a4,piVar2,0x80,temp_v0);
  return piVar2;
}
