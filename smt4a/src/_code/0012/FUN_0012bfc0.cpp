/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012bfc0` (_code @ 0x12bfc0, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea41e(int *);
int FUN_0030c800(int, unsigned int *);
int holderSetPairAndFlush(int, unsigned int, unsigned int, unsigned int);
int wordListAt(unsigned int *, unsigned int);
int recordListAt(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_0012bce9; /* 0x12bce9 */
extern unsigned char LAB_0012c0a4; /* 0x12c0a4 */

extern unsigned int *_ZN12OnlineResultC1ERKj(unsigned int *, unsigned int *);
extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */
extern int FUN_002fd38c(unsigned int *);
extern int wordRefNotEqual(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_0030c800. */
/* Supplied declaration required: holderSetPairAndFlush. */
/* Supplied declaration required: wordListAt. */
/* Supplied declaration required: recordListAt. */


void FUN_0012bfc0(int param_1)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *temp_v6;
  unsigned int temp_v7 [5];
  unsigned char temp_v8 [20];
  
  puVar3 = (unsigned int *)&temp_v4;
  temp_v1 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v1,*(unsigned int *)(param_1 + 0x68));
  if (temp_v1 != 0) {
    temp_v0 = 0;
    if (*(char *)(param_1 + 0x90) != '\x04') {
      if (*(char *)(param_1 + 0x90) == '\x02') {
LAB_0012c018:
        temp_v1 = param_1 + 0x110;
        recordListAt(temp_v1,*(unsigned int *)(param_1 + 0x3f4));
        holderSetPairAndFlush(param_1 + 0x280,temp_v2,*(unsigned int *)(temp_v1 + 8),
                     *(unsigned int *)(temp_v1 + 0xc));
        temp_v6 = *(int **)(param_1 + 0x3ec);
        temp_v4 = *(unsigned int *)(param_1 + 0x290);
        temp_v5 = *(unsigned int *)(param_1 + 0x294);
        if (temp_v0) {
          temp_v3 = 0;
        }
        else {
          puVar3 = (unsigned int *)(param_1 + 0x3e0);
          wordListAt(puVar3,*(unsigned int *)(param_1 + 0x3f0));
          temp_v3 = *puVar3;
        }
        (**(romwright_code **)(*temp_v6 + 0xc))(temp_v6,param_1 + 0x280,temp_v3);
        if (!temp_v0) {
          *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) + 1;
        }
        *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
        temp_v3 = FUN_002ea3c0(temp_v8,&LAB_0012bce9,0,&LAB_0012c0a4);
        FUN_002ea3d0(param_1,temp_v3);
        return;
      }
      FUN_002ea41e(&temp_v4);
      temp_v1 = FUN_002fd38c((unsigned int *)&temp_v4);
      if (temp_v1 == 0x69) {
        temp_v7[0] = 0x80690001;
        temp_v1 = wordRefNotEqual((unsigned int *)&temp_v4,temp_v7);
        puVar3 = (unsigned int *)&temp_v4;
        if (temp_v1 != 0) {
          temp_v0 = 1;
          goto LAB_0012c018;
        }
      }
      FUN_0030c800(param_1,puVar3);
      return;
    }
  }
  temp_v7[0] = 0x80010004;
  puVar3 = (unsigned int *)_ZN12OnlineResultC1ERKj((unsigned int *)&temp_v4,temp_v7);
  FUN_0030c800(param_1,puVar3);
  return;
}

} /* extern "C" */
