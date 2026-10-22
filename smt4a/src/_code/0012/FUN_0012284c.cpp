/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012284c` (_code @ 0x12284c, 0x192 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010a108(unsigned int);
int FUN_0010d0cc(void);
int FUN_00122250(unsigned int, unsigned int, char *, int);
int sharedRefRelease(void);
int FUN_002e78d0(unsigned int, unsigned int, int);
int FUN_002e7908(...);
int _ZN9Obj55aff4C1EPKc(unsigned char [8], int);
int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int vectorCopyHeader(int, unsigned int);
int FUN_002ea12c(void);
int FUN_002ea704(void);
int FUN_002f3378(unsigned char [36]);
int _ZN9Obj558b24D1Ev(unsigned char [36]);
int FUN_002f4f20(int, int);
int FUN_002fd784(unsigned int, unsigned char [36]);
int FUN_00442100(void);

/* stack frame of param_10: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp70; /* 0x70: local_70 */
} param_10_stack;

extern char *DAT_0059494c; /* 0x59494c */
extern char *DAT_00594950; /* 0x594950 */

extern unsigned int FUN_00104694(void);
/* Supplied declaration required: FUN_0010a108. */
/* Supplied declaration required: FUN_0010d0cc. */
/* Supplied declaration required: FUN_00122250. */
extern unsigned int onlineContextGetInstance(void);
/* Supplied declaration required: sharedRefRelease. */
extern int operatorNew(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: _ZN9Obj55aff4C1EPKc. */
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: vectorCopyHeader. */
/* Supplied declaration required: FUN_002ea12c. */
/* Supplied declaration required: FUN_002ea704. */
/* Supplied declaration required: FUN_002f3378. */
/* Supplied declaration required: _ZN9Obj558b24D1Ev. */
/* Supplied declaration required: FUN_002f4f20. */
extern int onlineOwnerHasPendingJob(int);
extern unsigned int FUN_002f815c(void);
/* Supplied declaration required: FUN_002fd784. */
extern int onlineOwnerHasPendingJob2(int);
extern int childOwnerHasActiveChild(int);
/* Supplied declaration required: FUN_00442100. */
extern int FUN_004421dc(unsigned int, char *, char *);


void FUN_0012284c(unsigned int param_1,int param_2,int param_3,char *param_4,int param_5,int param_6,
                 int param_7,int param_8,unsigned int param_9,unsigned int param_10)

{
/* irregular: 1 unstructured edge(s); 16 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  int temp_v3;
  int iStack_6c;
  unsigned int uStack_68;
  unsigned char temp_v4 [36];
  int temp_v5;
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [16];
  unsigned int temp_v8;
  int iStack_20;
  int iStack_1c;
  char *temp_v9;
  
  piVar5 = &temp_v3;
  *(unsigned int *)(param_2 + 0x13c) = 0;
  *(unsigned int *)(param_2 + 300) = 200;
  *(unsigned int *)(param_2 + 0x128) = 0;
  temp_v5 = 0x10001;
  temp_v8 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  temp_v9 = param_4;
  temp_v0 = FUN_002e7908(temp_v7,&temp_v5);
  vectorCopyHeader(param_2 + 0x130,temp_v0);
  if (((param_3 != 0) && (param_5 != 0)) && ((param_6 == 0 || (param_7 != 0)))) {
    pcVar4 = temp_v9;
    pcVar6 = DAT_0059494c;
    if ((DAT_0059494c <= temp_v9) && (pcVar4 = DAT_00594950, temp_v9 <= DAT_00594950)) {
      pcVar4 = "0x%08x is the game server ID for NEX sample demo server. ";
      pcVar6 = temp_v9;
    }
    if (param_8 != 0) {
      temp_v3 = -0x7ffefffe;
    }
    else {
      temp_v1 = FUN_004421dc(0,pcVar4,pcVar6);
      if (temp_v1 != 0) {
        temp_v2 = (unsigned int)*(unsigned char *)(param_2 + 0x141);
        if ((temp_v2 != 0) || (FUN_00442100(), temp_v2 != 0)) {
          if ((param_10 != 0) && (FUN_002ea12c(), temp_v2 != param_10)) {
            temp_v3 = -0x7f9afff7;
          }
          else {
            if (*(int *)(param_2 + 0x11c) != 0) {
              if (*(char *)(*(int *)(param_2 + 0x11c) + 0x22) != '\x05') {
                temp_v3 = -0x7ffefffc;
                FUN_002e7908(temp_v8,&temp_v3);
                return;
              }
              sharedRefRelease();
              *(unsigned int *)(param_2 + 0x11c) = 0;
            }
            temp_v1 = childOwnerHasActiveChild(param_2);
            if ((((temp_v1 == 0) && (*(int *)(param_2 + 0x78) == 0)) &&
                (temp_v1 = onlineOwnerHasPendingJob2(param_2), temp_v1 == 0)) &&
               (temp_v1 = onlineOwnerHasPendingJob(param_2), temp_v1 == 0)) {
              temp_v0 = FUN_002f815c();
              FUN_002ea704();
              FUN_0010a108(temp_v0);
              *(short *)(param_2 + 0x7c) = (short)temp_v0;
              FUN_002f3378(temp_v4);
              temp_v0 = FUN_002ea704();
              FUN_002fd784(temp_v0,temp_v4);
              _ZN9Obj55aff4C1EPKc(temp_v6,param_5);
              FUN_0010d0cc();
              _ZN9Obj55aff4D1Ev(temp_v6);
              temp_v1 = FUN_002e789a(param_3);
              if (temp_v1 != 0) {
                temp_v1 = operatorNew(0x2b8);
                temp_v0 = 0;
                if (temp_v1 != 0) {
                  temp_v0 = FUN_00104694();
                }
                *(unsigned int *)(param_2 + 0x11c) = temp_v0;
                temp_v3 = param_6;
                iStack_6c = param_7;
                uStack_68 = param_9;
                FUN_00122250(temp_v0,*(unsigned int *)(param_3 + 0x44),temp_v9,param_2);
                FUN_002f4f20(*(int *)(param_2 + 0x11c) + 4,1);
                temp_v0 = onlineContextGetInstance();
                FUN_002e78d0(temp_v0,*(unsigned int *)(param_2 + 0x11c),0);
                piVar5 = &temp_v5;
                temp_v5 = 0x10001;
              }
              else {
                temp_v3 = -0x7ffefff3;
              }
              FUN_002e7908(temp_v8,piVar5);
              _ZN9Obj558b24D1Ev(temp_v4);
              return;
            }
            temp_v3 = -0x7ffefffc;
          }
        }
        else {
          temp_v3 = -0x7f9afffe;
        }
      }
      else {
        temp_v3 = -0x7f9b0000;
      }
    }
  }
  else {
    temp_v3 = -0x7ffefff6;
  }
  FUN_002e7908(temp_v8,&temp_v3);
  return;
}

} /* extern "C" */
