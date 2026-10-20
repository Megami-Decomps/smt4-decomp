/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b69c` (_code @ 0x12b69c, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7908(...);
int FUN_002e9318(...);
int FUN_002e9520(unsigned char [8], int);
int FUN_002e9af4(void);
int FUN_002e9c0c(int);
int FUN_002e9ec8(int, unsigned int);
int FUN_002ea41e(...);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int FUN_002f7cb0(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_002f7e38(int, unsigned int);
int FUN_00306f3e(int, unsigned char *);
int FUN_00306f9a(unsigned char [8], unsigned char *, int);
int FUN_00306fe0(unsigned int, unsigned int, unsigned int);
int FUN_0030700c(unsigned char [12], unsigned int, int, unsigned char [8]);
int FUN_0030c910(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_0012b850; /* 0x12b850 */
extern unsigned char LAB_0012b860; /* 0x12b860 */
extern unsigned char LAB_0012b870; /* 0x12b870 */

extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9520. */
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea41e. */
extern int FUN_002f4e86(unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002f7e38. */
extern unsigned int FUN_002f7e4c(int, unsigned int, int, int);
/* Supplied declaration required: FUN_00306f3e. */
/* Supplied declaration required: FUN_00306f9a. */
/* Supplied declaration required: FUN_00306fe0. */
/* Supplied declaration required: FUN_0030700c. */
/* Supplied declaration required: FUN_0030c910. */


void FUN_0012b69c(int param_1)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar5;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10 [8];
  unsigned char temp_v11 [12];
  int temp_v12;
  
  piVar2 = &temp_v4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v0 = param_1 + 0x90;
    if (*(char *)(param_1 + 0xa0) == '\x02') {
      FUN_002e9c0c(temp_v0);
      temp_v1 = FUN_002e760a(0x4c);
      temp_v12 = param_1 + 0x100;
      if (temp_v1 != 0) {
        temp_v7 = *(int *)(param_1 + 0x1e8);
        temp_v9 = *(unsigned int *)(param_1 + 0x88);
        temp_v8 = *(unsigned int *)(param_1 + 0x110);
        if (temp_v7 == 0) {
          temp_v7 = *(int *)(param_1 + 0x1ec);
        }
        temp_v6 = *(unsigned int *)(param_1 + 0x78);
        temp_v4 = param_1 + 0x1d8;
        temp_v5 = *(unsigned int *)(param_1 + 0x7c);
        temp_v2 = FUN_002f7e4c(temp_v1,*(unsigned int *)(param_1 + 0x68),param_1 + 0x1c0,param_1 + 0x1cc);
      }
      else {
        temp_v2 = 0;
      }
      *(unsigned int *)(param_1 + 0x1fc) = temp_v2;
      temp_v1 = param_1 + 0x1b8;
      temp_v4 = temp_v1;
      FUN_00306f3e(temp_v1,&LAB_0012b850);
      if ((temp_v1 != 0) && (temp_v1 = temp_v4, FUN_00306f3e(temp_v4,&LAB_0012b860), temp_v1 != 0)) {
        if (*(char *)(param_1 + 0x74) != '\0') {
          puVar5 = &LAB_0012b860;
        }
        else {
          puVar5 = &LAB_0012b850;
        }
        FUN_00306f9a(temp_v10,puVar5,temp_v4);
      }
      else {
        FUN_002e9520(temp_v10,temp_v4);
      }
      temp_v2 = *(unsigned int *)(temp_v12 + 0x10);
      FUN_00306fe0(temp_v2,*(unsigned int *)(param_1 + 0x80),*(unsigned int *)(param_1 + 0x84));
      FUN_002f7e38(temp_v0,temp_v2);
      temp_v4 = *(int *)(param_1 + 0x1fc);
      temp_v5 = *(unsigned int *)(param_1 + 0x8c);
      FUN_0030700c(temp_v11,*(unsigned int *)(param_1 + 0x70),temp_v0,temp_v10);
      temp_v1 = FUN_002f4e86(temp_v11);
      if (temp_v1 != 0) {
        temp_v3 = *(unsigned int *)(param_1 + 0xd4);
        temp_v2 = FUN_002e9af4();
        FUN_002f7c94(temp_v2,*(unsigned int *)(param_1 + 0x68),temp_v3);
        FUN_002f7cb0(param_1);
        temp_v1 = FUN_002e760a(0x10);
        temp_v2 = 0;
        if (temp_v1 != 0) {
          temp_v2 = FUN_002ea3c0(temp_v1,0x12b90d,0,&LAB_0012b870);
        }
        FUN_002f7cba(param_1,temp_v0,temp_v2);
      }
      else {
        temp_v7 = -0x7ffefff3;
        temp_v2 = FUN_002e7908(&temp_v4,&temp_v7);
        FUN_0030c910(param_1,temp_v2);
      }
      FUN_002e9318(temp_v10);
      return;
    }
    FUN_002ea41e(&temp_v4,temp_v0);
    FUN_002ea41e(&temp_v4,temp_v0,temp_v4);
  }
  else {
    temp_v7 = -0x7ffefffc;
    piVar2 = (int *)FUN_002e7908(&temp_v4,&temp_v7);
  }
  FUN_0030c910(param_1,piVar2);
  return;
}

} /* extern "C" */
