/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f37c` (_code @ 0x10f37c, 0x9a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableGetCurrent(void);
int onlineInstanceTableFind(int, unsigned int);
int FUN_002ea3c0(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002eb338(int *, unsigned char [8], int);
int onlineTimeGetNow(unsigned char [8]);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned char LAB_0010f1e9; /* 0x10f1e9 */
extern unsigned char LAB_0010f209; /* 0x10f209 */
extern unsigned char LAB_0010f41c; /* 0x10f41c */

extern unsigned int onlineSockAddrConstruct(unsigned char *);
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: onlineTimeGetNow. */
extern int FUN_002eb5f4(void);
/* Supplied declaration required: FUN_002f7c94. */


void FUN_0010f37c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [32];
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [16];
  int temp_v8 [5];
  
  temp_v0 = FUN_002eb5f4();
  if (temp_v0 != 0) {
    temp_v0 = onlineInstanceTableGetCurrent();
    onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
    if (temp_v0 != 0) {
      temp_v0 = FUN_002eb5f4();
      piVar3 = *(int **)(*(int *)(temp_v0 + 0xd0) + 8);
      if (piVar3 != (int *)0x0) {
        temp_v1 = onlineSockAddrConstruct(temp_v5);
        temp_v8[0] = param_1 + 0x70;
        (**(romwright_code **)(*piVar3 + 0x18))(piVar3,temp_v8[0],temp_v1,1);
        temp_v2 = *(unsigned int *)(temp_v8[0] + 0x44);
        temp_v1 = onlineInstanceTableGetCurrent();
        FUN_002f7c94(temp_v1,*(unsigned int *)(param_1 + 0x68),temp_v2);
        temp_v1 = FUN_002ea3c0(temp_v7,&LAB_0010f209,0,&LAB_0010f41c);
        FUN_002ea3d0(param_1,temp_v1);
        onlineTimeGetNow(temp_v6);
        FUN_002eb338(&temp_v3,temp_v6,5000);
        *(unsigned int *)(param_1 + 0xd0) = temp_v3;
        *(unsigned int *)(param_1 + 0xd4) = temp_v4;
        return;
      }
    }
  }
  temp_v1 = FUN_002ea3c0(temp_v8,&LAB_0010f1e9,0,&LAB_0010f41c);
  FUN_002ea3d0(param_1,temp_v1);
  return;
}

} /* extern "C" */
