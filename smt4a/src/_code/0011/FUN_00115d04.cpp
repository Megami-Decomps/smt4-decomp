/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115d04` (_code @ 0x115d04, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateDone(int);
int FUN_002fa18c(int);

extern unsigned char LAB_0010dc81; /* 0x10dc81 */
extern unsigned char LAB_00115d5c; /* 0x115d5c */

extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: onlineJobSetStateDone. */
/* Supplied declaration required: FUN_002fa18c. */
extern int FUN_002ffdb0(int);


void FUN_00115d04(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar5;
  unsigned char temp_v3 [16];
  unsigned char temp_v4 [16];
  unsigned char *puVar4;
  
  puVar4 = temp_v3;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x114));
  if (temp_v0 != 0) {
    temp_v1 = FUN_002ffdb0(param_1);
    if (temp_v1 == 0) {
      FUN_002fa18c(temp_v0);
      onlineJobSetStateDone(param_1);
      return;
    }
    puVar5 = (unsigned char *)0x115d61;
  }
  else {
    puVar5 = &LAB_0010dc81;
    puVar4 = temp_v4;
  }
  temp_v2 = FUN_002ea3c0(puVar4,puVar5,0,&LAB_00115d5c);
  FUN_002ea3d0(param_1,temp_v2);
  return;
}

} /* extern "C" */
