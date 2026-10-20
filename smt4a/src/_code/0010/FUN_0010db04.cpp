/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010db04` (_code @ 0x10db04, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(unsigned char [12]);
int FUN_002f7850(int, unsigned char *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;

extern unsigned char LAB_0010db60; /* 0x10db60 */
extern unsigned char LAB_0010db69; /* 0x10db69 */

extern unsigned char *FUN_002e7908(unsigned char *, unsigned int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002f7850. */


void FUN_0010db04(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2 [16];
  unsigned char temp_v3 [12];
  int temp_v4;
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0xb0) == '\x02') {
      temp_v1 = FUN_002ea3c0(temp_v2,&LAB_0010db69,0,&LAB_0010db60);
      FUN_002ea3d0(param_1,temp_v1);
      return;
    }
    FUN_002ea41e(temp_v3);
    puVar2 = temp_v3;
  }
  else {
    temp_v4 = 0x80010004;
    puVar2 = (unsigned char *)FUN_002e7908(temp_v3,(unsigned int *)&temp_v4);
  }
  FUN_002f7850(param_1,puVar2);
  return;
}

} /* extern "C" */
