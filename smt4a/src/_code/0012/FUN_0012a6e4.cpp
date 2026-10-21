/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a6e4` (_code @ 0x12a6e4, 0x156 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7908(...);
int onlineStringDestroy(...);
int onlineStringCopyConstruct(unsigned char [8], int);
int onlineInstanceTableGetCurrent(void);
int FUN_002e9c0c(int);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(...);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(...);
int FUN_002f7cba(...);
int FUN_002f7e38(int, unsigned int);
int FUN_00306f3e(int, unsigned char *);
int FUN_00306f9a(unsigned char [8], unsigned char *, int);
int FUN_00306fe0(unsigned int, unsigned int, unsigned int);
int onlineJobCompleteWithResult(...);
int FUN_00310eb4(unsigned char [12], unsigned int, int, unsigned char [8]);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_0012a59d; /* 0x12a59d */
extern unsigned char LAB_0012a874; /* 0x12a874 */
extern unsigned char LAB_0012a880; /* 0x12a880 */
extern unsigned char LAB_0012a890; /* 0x12a890 */
extern unsigned char LAB_0012a8a5; /* 0x12a8a5 */

extern int operatorNew(unsigned int);
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: onlineStringCopyConstruct. */
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
extern int refIsNonNegative(unsigned char *);
extern int FUN_002f7896(int, unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002f7e38. */
/* Supplied declaration required: FUN_00306f3e. */
/* Supplied declaration required: FUN_00306f9a. */
/* Supplied declaration required: FUN_00306fe0. */
/* Supplied declaration required: onlineJobCompleteWithResult. */
/* Supplied declaration required: FUN_00310eb4. */


void FUN_0012a6e4(int param_1)

{
/* irregular: 18 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar5;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [8];
  unsigned char temp_v9 [12];
  unsigned int temp_v10 [4];
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    temp_v0 = param_1 + 0x98;
    if (*(char *)(param_1 + 0xa8) == '\x02') {
      FUN_002e9c0c(temp_v0);
      temp_v3 = param_1 + 0x128;
      if ((*(char *)(param_1 + 0x184) != '\0') &&
         (temp_v1 = FUN_002f7896(temp_v3,&LAB_0012a874), temp_v1 != 0)) {
        temp_v2 = FUN_002ea3c0(&temp_v5,&LAB_0012a59d,0,&LAB_0012a874);
        FUN_002ea3d0(param_1,temp_v2);
        return;
      }
      temp_v1 = temp_v3;
      FUN_00306f3e(temp_v3,&LAB_0012a880);
      if ((temp_v1 != 0) && (temp_v1 = temp_v3, FUN_00306f3e(temp_v3,&LAB_0012a890), temp_v1 != 0)) {
        if (*(char *)(param_1 + 0x78) != '\0') {
          puVar5 = &LAB_0012a890;
        }
        else {
          puVar5 = &LAB_0012a880;
        }
        FUN_00306f9a(temp_v8,puVar5,temp_v3);
      }
      else {
        onlineStringCopyConstruct(temp_v8,temp_v3);
      }
      temp_v2 = *(unsigned int *)(param_1 + 0x13c);
      FUN_00306fe0(temp_v2,*(unsigned int *)(param_1 + 0x84),*(unsigned int *)(param_1 + 0x88));
      FUN_002f7e38(temp_v0,temp_v2);
      temp_v6 = *(unsigned int *)(param_1 + 0x90);
      temp_v5 = param_1 + 0x68;
      FUN_00310eb4(temp_v9,*(unsigned int *)(param_1 + 0x74),temp_v0,temp_v8);
      temp_v3 = refIsNonNegative(temp_v9);
      if (temp_v3 != 0) {
        temp_v4 = *(unsigned int *)(param_1 + 0xdc);
        temp_v2 = onlineInstanceTableGetCurrent();
        FUN_002f7c94(temp_v2,*(unsigned int *)(param_1 + 0x6c),temp_v4);
        onlineJobSetStateWaiting(param_1);
        temp_v3 = operatorNew(0x10);
        temp_v2 = 0;
        if (temp_v3 != 0) {
          temp_v2 = FUN_002ea3c0(temp_v3,&LAB_0012a8a5,0,&LAB_0012a874);
        }
        FUN_002f7cba(param_1,temp_v0,temp_v2);
      }
      else {
        temp_v7 = 0x8001000d;
        temp_v2 = FUN_002e7908(&temp_v5,&temp_v7);
        onlineJobCompleteWithResult(param_1,temp_v2);
      }
      onlineStringDestroy(temp_v8);
      return;
    }
    FUN_002ea41e(temp_v10,temp_v0);
    FUN_002ea41e(temp_v10,temp_v0,temp_v10[0]);
    puVar2 = temp_v10;
  }
  else {
    temp_v7 = 0x80010004;
    puVar2 = (unsigned int *)FUN_002e7908(&temp_v5,&temp_v7);
  }
  onlineJobCompleteWithResult(param_1,puVar2);
  return;
}

} /* extern "C" */
