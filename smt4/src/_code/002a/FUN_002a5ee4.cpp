/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a5ee4` (_code @ 0x2a5ee4, 0x1b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014ed4c(void);
int FUN_00151b98(unsigned int, unsigned char [132], unsigned char [128], int, unsigned int, unsigned char *, int *, int, int);
int libc_strcat(...);
int libc_strcpy(...);
int memClear(unsigned char [128], int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
} param_4_stack;

extern unsigned char LAB_00151cd8; /* 0x151cd8 */
extern unsigned char LAB_002a609c; /* 0x2a609c */
extern unsigned char LAB_002a60a4; /* 0x2a60a4 */
extern unsigned int g_aocDisplay; /* 0x433130 */

/* Supplied declaration required: FUN_0014ed4c. */
/* Supplied declaration required: FUN_00151b98. */
extern int FUN_002a6e7c(unsigned int, int, unsigned int, unsigned char *);
extern int FUN_002a6f48(unsigned int);
/* Supplied declaration required: libc_strcat. */
extern int *asdTMTexTableCallFileB(unsigned int, unsigned int);
/* Supplied declaration required: libc_strcpy. */
extern int libc_strlen(unsigned int);
/* Supplied declaration required: memClear. */


int * FUN_002a5ee4(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

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
  
  temp_v0 = FUN_002a6f48(param_2);
  if (temp_v0 == -1) {
    return (int *)0x0;
  }
  memClear(temp_v5,0x80);
  temp_v0 = FUN_002a6e7c(param_1,temp_v0,param_3,temp_v5);
  if (temp_v0 == 0) {
    return (int *)0x0;
  }
  *(unsigned char *)(temp_v0 + 0xd) = 0;
  *(unsigned int *)(temp_v0 + 8) = 0;
  piVar2 = (int *)asdTMTexTableCallFileB(param_2,param_3);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  temp_v3 = piVar2[1];
  FUN_0014ed4c();
  libc_strcpy(temp_v4,*piVar2 + 0xc);
  pcVar5 = *(char **)(temp_v3 + 8);
  if (*pcVar5 != '-') {
    libc_strcat(temp_v4);
  }
  else {
    libc_strcat(temp_v4,*(unsigned int *)(piVar2[pcVar5[1] * -8 + 0x181] + 8));
  }
  if (*(char *)(piVar2[1] + 0xd) != '\0') {
    libc_strcat(temp_v4,&LAB_002a609c);
  }
  else {
    libc_strcat(temp_v4,&LAB_002a60a4);
  }
  temp_v3 = libc_strlen(*(unsigned int *)(temp_v3 + 8));
  if (temp_v3 == 0) {
    piVar2[2] = 0;
    return piVar2;
  }
  libc_strcpy(temp_v6,temp_v5);
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
  FUN_00151b98(g_aocDisplay,temp_v6,temp_v4,0,temp_v2,&LAB_00151cd8,piVar2,0x80,temp_v0);
  return piVar2;
}

} /* extern "C" */
