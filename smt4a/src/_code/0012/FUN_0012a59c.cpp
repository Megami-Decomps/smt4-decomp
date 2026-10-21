/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a59c` (_code @ 0x12a59c, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int onlineJobSetStateTimed(int, int);
int FUN_002f4c9c(...);
int onlineJobCompleteWithResult(int, unsigned int);
int rt_memcpy(unsigned int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: onlineJobSetStateTimed. */
/* Supplied declaration required: FUN_002f4c9c. */
extern int FUN_0030cad0(void);
/* Supplied declaration required: onlineJobCompleteWithResult. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0012a59c(int param_1)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int *piVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int *temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [4];
  unsigned char temp_v10 [16];
  int temp_v11;
  int temp_v12;
  unsigned int *puVar4;
  
  puVar4 = &temp_v3;
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 == 0) {
    temp_v6 = 0x80010004;
    puVar5 = (unsigned int *)&temp_v6;
    temp_v2 = FUN_002e7908(puVar4,puVar5);
    onlineJobCompleteWithResult(param_1,temp_v2);
    return;
  }
  temp_v8 = param_1 + 0x15c;
  temp_v0 = FUN_0030cad0();
  if (temp_v0 != 0) {
    temp_v6 = 0x8069000b;
  }
  else {
    temp_v12 = param_1 + 0x80;
    if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
      if (*(char *)(param_1 + 0x192) == '\0') {
LAB_0012a64c:
        piVar6 = *(int **)(temp_v12 + 0xc);
        temp_v1 = temp_v8;
        FUN_002f4c9c(temp_v8);
        temp_v0 = (**(romwright_code **)(*piVar6 + 0x10))(piVar6,*(unsigned int *)(param_1 + 0x16c),temp_v1);
        if (temp_v0 == 0) {
          onlineJobSetStateTimed(param_1,0x10);
          return;
        }
        temp_v1 = temp_v8;
        FUN_002f4c9c();
        *(unsigned int *)(param_1 + 0x18c) = temp_v1 + *(int *)(param_1 + 0x18c);
        puVar5 = (unsigned int *)&temp_v11;
        temp_v11 = 0x10001;
        puVar4 = (unsigned int *)temp_v10;
        temp_v2 = FUN_002e7908(puVar4,puVar5);
        onlineJobCompleteWithResult(param_1,temp_v2);
        return;
      }
      *(unsigned char *)(param_1 + 0x192) = 0;
      temp_v6 = *(unsigned int *)(param_1 + 0x118);
      temp_v1 = temp_v8;
      temp_v7 = *(int **)(param_1 + 0x8c);
      FUN_002f4c9c(temp_v8);
      temp_v3 = (unsigned int)*(unsigned short *)(param_1 + 0x158);
      temp_v4 = (unsigned int)*(unsigned short *)(param_1 + 0x15a);
      temp_v5 = 0;
      (**(romwright_code **)(*temp_v7 + 8))(temp_v7,temp_v6,temp_v1,*(unsigned int *)(param_1 + 0x154));
      temp_v0 = onlineInstanceTableGetCurrent();
      onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
      if (temp_v0 != 0) {
        piVar6 = *(int **)(temp_v12 + 0xc);
        temp_v1 = temp_v8;
        FUN_002f4c9c(temp_v8);
        (**(romwright_code **)(*piVar6 + 0xc))(piVar6,temp_v6,temp_v1);
        temp_v0 = onlineInstanceTableGetCurrent();
        onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
        if (temp_v0 != 0) goto LAB_0012a64c;
      }
      temp_v6 = 0x80010004;
    }
    else {
      if (*(int *)(param_1 + 0x17c) == 0) {
        return;
      }
      temp_v1 = temp_v8;
      FUN_002f4c9c();
      if (temp_v1 <= *(unsigned int *)(param_1 + 0x180)) {
        temp_v1 = temp_v8;
        FUN_002f4c9c(temp_v8);
        rt_memcpy(*(unsigned int *)(param_1 + 0x17c),*(unsigned int *)(param_1 + 0x16c),temp_v1);
        temp_v1 = temp_v8;
        FUN_002f4c9c();
        *(unsigned int *)(param_1 + 0x18c) = temp_v1 + *(int *)(param_1 + 0x18c);
        puVar5 = (unsigned int *)&temp_v6;
        temp_v6 = 0x10001;
        puVar4 = (unsigned int *)temp_v9;
        temp_v2 = FUN_002e7908(puVar4,puVar5);
        onlineJobCompleteWithResult(param_1,temp_v2);
        return;
      }
      temp_v6 = 0x80050017;
    }
  }
  puVar5 = (unsigned int *)&temp_v6;
  temp_v2 = FUN_002e7908(puVar4,puVar5);
  onlineJobCompleteWithResult(param_1,temp_v2);
  return;
}

} /* extern "C" */
