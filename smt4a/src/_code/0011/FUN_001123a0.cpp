/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001123a0` (_code @ 0x1123a0, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateDone(int);
int onlineUrlDestroy(unsigned char [104]);
int onlineSockAddrConstruct2(int *, unsigned int);
int FUN_002ee568(unsigned char [104], unsigned int);
int FUN_002f2dfc(int, int, int);
int _ZN9Obj558be04stopEv(int);
int FUN_002f8208(int, int);
int FUN_002fa18c(int);
int FUN_0043d588(char *, unsigned char [8]);

/* stack frame of param_1: 10 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned char sp95; /* 0x95: local_95 */
    unsigned char sp96; /* 0x96: local_96 */
    unsigned char sp97; /* 0x97: local_97 */
    unsigned char sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
} param_1_stack;

extern unsigned char LAB_001124fc; /* 0x1124fc */

extern int *FUN_00132514(int, unsigned int);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: onlineJobSetStateDone. */
extern int FUN_002ea704(void);
extern unsigned int onlineUrlGetAddress(void);
/* Supplied declaration required: onlineUrlDestroy. */
/* Supplied declaration required: onlineSockAddrConstruct2. */
/* Supplied declaration required: FUN_002ee568. */
extern int wideBufferLength(int);
/* Supplied declaration required: FUN_002f2dfc. */
/* Supplied declaration required: _ZN9Obj558be04stopEv. */
/* Supplied declaration required: FUN_002f8208. */
/* Supplied declaration required: FUN_002fa18c. */
extern int mapIsEmpty4(int);
extern int FUN_002fd706(int);
/* Supplied declaration required: FUN_0043d588. */


void FUN_001123a0(int param_1)

{
/* irregular: 11 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar7;
  unsigned char temp_v5 [4];
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  char temp_v9;
  char temp_v10;
  char temp_v11;
  char temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned char temp_v16 [104];
  unsigned char temp_v17 [8];
  
  temp_v1 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v1,*(unsigned int *)(param_1 + 0x1f0));
  temp_v13 = temp_v1;
  if (temp_v1 != 0) {
    temp_v1 = FUN_002ea704();
    if ((((temp_v1 != 0) && (temp_v1 = FUN_002ea704(), *(char *)(temp_v1 + 0x10c) != '\0')) &&
        (FUN_0043d588(&temp_v9,temp_v17),
        (temp_v9 != '\0' || temp_v10 != '\0') || (temp_v11 != '\0' || temp_v12 != '\0'))) &&
       (temp_v15 = param_1 + 0x180, *(char *)(param_1 + 0x198) != '\0')) {
      temp_v1 = FUN_002ea704();
      temp_v8 = param_1 + 0x120;
      for (piVar7 = *(int **)(temp_v1 + 0x114); piVar7 < *(int **)(temp_v1 + 0x118); piVar7 = piVar7 + 1
          ) {
        temp_v2 = wideBufferLength(*piVar7);
        temp_v3 = temp_v8;
        if (temp_v2 != 0) {
          FUN_002ee568(temp_v16,*(unsigned int *)(*piVar7 + 4));
          temp_v7 = onlineUrlGetAddress();
          temp_v14 = temp_v3;
          temp_v6 = *(int *)(temp_v3 + 0x10);
          piVar4 = (int *)FUN_00132514(temp_v3,0);
          onlineSockAddrConstruct2(piVar4 + 2,temp_v7);
          *piVar4 = temp_v6;
          piVar4[1] = *(int *)(temp_v6 + 4);
          **(int **)(temp_v6 + 4) = (int)piVar4;
          *(int **)(temp_v6 + 4) = piVar4;
          *(int *)(temp_v14 + 0x14) = *(int *)(temp_v14 + 0x14) + 1;
          onlineUrlDestroy(temp_v16);
        }
      }
      temp_v1 = mapIsEmpty4(temp_v8);
      if (temp_v1 == 0) {
        temp_v1 = param_1 + 0x1ac;
        FUN_002f8208(temp_v1,1);
        if ((((*(unsigned short *)(param_1 + 0x13e) & 0xff) != 0 || *(unsigned short *)(param_1 + 0x13e) >> 8 != 0)
            && (temp_v3 = temp_v1, FUN_002f2dfc(temp_v1,param_1 + 0x138,0), temp_v3 != 0)) ||
           (temp_v3 = FUN_002fd706(param_1), temp_v3 != 0)) {
          temp_v0 = *(char *)(temp_v15 + 0x18);
          if ((temp_v0 != '\x03') && (temp_v0 != '\x01')) {
            if (temp_v0 != '\x02') {
              return;
            }
            temp_v4 = 0x113111;
          }
          else {
            temp_v4 = 0x112e7d;
          }
          temp_v4 = FUN_002ea3c0(temp_v5,temp_v4,0,&LAB_001124fc);
          FUN_002ea3d0(param_1,temp_v4);
          return;
        }
        _ZN9Obj558be04stopEv(temp_v1);
      }
    }
    FUN_002fa18c(temp_v13);
  }
  onlineJobSetStateDone(param_1);
  return;
}

} /* extern "C" */
