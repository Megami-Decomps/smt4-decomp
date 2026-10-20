/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b910` (_code @ 0x10b910, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringConstruct(unsigned char [8], unsigned char *);
int onlineStringDestroy(unsigned char [8]);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateTimed(int, int);
int onlineObjectThreadRootStart(int, int, int, int);
int FUN_002f5898(int, unsigned int);
int FUN_002f5908(unsigned char *, unsigned char [4]);

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_0010b9ec; /* 0x10b9ec */
extern unsigned char LAB_0010ba0c; /* 0x10ba0c */
extern unsigned char DAT_00558878; /* 0x558878 */
extern unsigned char DAT_00630314; /* 0x630314 */

extern int operatorNew(unsigned int);
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: onlineStringConstruct. */
/* Supplied declaration required: onlineStringDestroy. */
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: onlineJobSetStateTimed. */
/* Supplied declaration required: onlineObjectThreadRootStart. */
extern int FUN_002f587c(void);
/* Supplied declaration required: FUN_002f5898. */
extern unsigned int *FUN_002f58d0(int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002f5908. */


void FUN_0010b910(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  char *pcVar4;
  unsigned int temp_v2 [2];
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [16];
  unsigned char temp_v6 [16];
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v0 = FUN_002f587c();
    if (temp_v0 != 0) {
      pcVar4 = (char *)((*(int *)((unsigned char *)&DAT_00630314 + 0x8)) + temp_v0);
    }
    else {
      pcVar4 = (char *)0x630320;
    }
    if (*pcVar4 != '\0') {
      onlineJobSetStateTimed(param_1,0x32);
    }
    else {
      temp_v0 = operatorNew(0x34);
      if (temp_v0 != 0) {
        onlineStringConstruct(temp_v4,&LAB_0010b9ec);
        puVar2 = (unsigned int *)FUN_002f58d0(temp_v0,temp_v4,*(unsigned int *)(param_1 + 0xac));
        puVar2[0xb] = 0;
        *puVar2 = (unsigned int)&DAT_00558878;
        puVar2[10] = 0;
        puVar2[9] = 0;
        *(unsigned int **)(param_1 + 0x78) = puVar2;
        onlineStringDestroy(temp_v4);
        temp_v0 = *(int *)(param_1 + 0x78);
      }
      else {
        *(unsigned int *)(param_1 + 0x78) = 0;
        temp_v0 = 0;
      }
      *(unsigned int *)(temp_v0 + 0x20) = *(unsigned int *)(param_1 + 0xb0);
      temp_v3[0] = 1;
      FUN_002f5908(&DAT_00630314,temp_v3);
      temp_v0 = *(int *)(param_1 + 0x78);
      *(unsigned int *)(temp_v0 + 0x24) = 0x10b8a9;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(int *)(temp_v0 + 0x2c) = param_1;
      *(unsigned int *)(temp_v0 + 0x30) = 0;
      onlineObjectThreadRootStart(temp_v0,0,0,temp_v0 + 0x34);
      temp_v1 = FUN_002ea3c0(temp_v5,0x10ba71,0,&LAB_0010ba0c);
      FUN_002ea3d0(param_1,temp_v1);
    }
  }
  else {
    temp_v2[0] = 0x80010004;
    temp_v1 = FUN_002e7908(temp_v6,temp_v2);
    FUN_002f5898(param_1,temp_v1);
  }
  return;
}

} /* extern "C" */
