/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011da40` (_code @ 0x11da40, 0xae bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00116608(int, int *, unsigned int, unsigned int);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(unsigned char [12], int);
int FUN_00310ec8(int, unsigned char *);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_0011d7bd; /* 0x11d7bd */
extern unsigned char LAB_0011daf0; /* 0x11daf0 */

/* Supplied declaration required: FUN_00116608. */
extern unsigned char *FUN_002e7908(unsigned char *, int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_00310ec8. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0011da40(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  int *piVar4;
  int temp_v2 [4];
  unsigned char temp_v3 [12];
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [16];
  
  piVar4 = temp_v2;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0xa0) != '\x02') {
      FUN_002ea41e(temp_v4,param_1 + 0x90);
      if (*(char *)(param_1 + 0x160) != '\0') {
        temp_v1 = FUN_002ea3c0(temp_v5,&LAB_0011d7bd,0,&LAB_0011daf0);
        FUN_002ea3d0(param_1,temp_v1);
        return;
      }
      puVar3 = temp_v4;
      FUN_00310ec8(param_1,puVar3);
      return;
    }
    temp_v2[2] = 0;
    temp_v2[3] = 0;
    temp_v2[0] = param_1 + 0x11c;
    temp_v0 = param_1 + 0x150;
    FUN_00116608(temp_v0,temp_v2 + 2,*(unsigned int *)(param_1 + 0x120),
                 *(unsigned int *)(param_1 + 0x11c));
    if (temp_v0 == 0) {
      *(unsigned char *)(param_1 + 0x168) = 1;
      temp_v2[0] = 0x10001;
      puVar3 = temp_v4;
      puVar3 = (unsigned char *)FUN_002e7908(puVar3,piVar4);
      FUN_00310ec8(param_1,puVar3);
      return;
    }
    if (*(unsigned int *)(param_1 + 0x114) <= (unsigned int)temp_v2[3] &&
        (unsigned int)((unsigned int)temp_v2[2] <= *(unsigned int *)(param_1 + 0x110)) <=
        *(unsigned int *)(param_1 + 0x114) - temp_v2[3]) {
      *(int *)(param_1 + 0x114) = temp_v2[3];
      *(int *)(param_1 + 0x110) = temp_v2[2];
    }
    piVar4 = temp_v2 + 1;
    puVar3 = temp_v3;
    temp_v2[1] = 0x10001;
  }
  else {
    temp_v2[0] = -0x7ffefffc;
    puVar3 = temp_v4;
  }
  puVar3 = (unsigned char *)FUN_002e7908(puVar3,piVar4);
  FUN_00310ec8(param_1,puVar3);
  return;
}

} /* extern "C" */
