/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b7b0` (_code @ 0x11b7b0, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011ca08(int, int);
int sharedRefRelease(int);
int sharedRefAddRef(int);
int FUN_002eb338(int *, unsigned char [12], unsigned int);
int onlineTimeGetNow(unsigned char [12]);
int FUN_002f2da0(int *, int, int **);

typedef int romwright_code(...);
/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

#ifndef ROMWRIGHT_STORAGE_s______00594975_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s______00594975_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s______00594975_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s______00594975_9_1_size_check[(sizeof(union romwright_storage_s______00594975_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s______00594975_9_1_u1_width_check[(sizeof(((union romwright_storage_s______00594975_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s______00594975_9_1_s1_width_check[(sizeof(((union romwright_storage_s______00594975_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s______00594975_9_1 s______00594975; /* 0x594975 */
extern unsigned short DAT_00594984; /* 0x594984 */
extern unsigned int DAT_00594a20; /* 0x594a20 */

/* Supplied declaration required: FUN_0011ca08. */
/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: sharedRefAddRef. */
/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: onlineTimeGetNow. */
extern int wordRefsDiffer_002eb690(int *, int *);
extern int FUN_002f2a70(int);
/* Supplied declaration required: FUN_002f2da0. */


void FUN_0011b7b0(int param_1,int *param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *temp_v4;
  int temp_v5;
  int iStack_44;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9 [3];
  unsigned char temp_v10 [12];
  int temp_v11;
  int *piStack_18;
  
  temp_v6 = param_2[2];
  temp_v11 = param_1;
  piStack_18 = param_2;
  while( 1 ) {
    temp_v7 = param_2[4];
    temp_v2 = wordRefsDiffer_002eb690(&temp_v6,&temp_v7);
    temp_v1 = temp_v6;
    if (temp_v2 == 0) break;
    if (((s______00594975.whole[0] == '\0') || (temp_v2 = FUN_002f2a70(temp_v6), temp_v2 == 0)) ||
       (*(char *)(temp_v1 + 0x131) != '\0')) {
      temp_v5 = temp_v6;
      (**(romwright_code **)(*param_2 + 0x14))(temp_v9,param_2,&temp_v5);
      temp_v6 = temp_v9[0];
    }
    else {
      sharedRefAddRef(temp_v1);
      temp_v3 = temp_v6;
      (**(romwright_code **)(*param_2 + 0x14))(&temp_v8,param_2,&temp_v3);
      temp_v6 = temp_v8;
      if (*(char *)(temp_v1 + 0x138) != '\x02') {
        *(unsigned char *)(temp_v1 + 0x138) = 0;
      }
      temp_v0 = DAT_00594a20;
      temp_v4 = (int *)(temp_v1 + 0x140);
      onlineTimeGetNow(temp_v10);
      FUN_002eb338(&temp_v5,temp_v10,temp_v0);
      *temp_v4 = temp_v5;
      temp_v4[1] = iStack_44;
      FUN_0011ca08(temp_v11,temp_v1);
      if ((unsigned int)DAT_00594984 < *(unsigned int *)(temp_v11 + 0x10)) {
        temp_v4 = *(int **)(temp_v11 + 8);
        FUN_002f2da0(&iStack_44,temp_v11,&temp_v4);
      }
      sharedRefRelease(temp_v1);
    }
  }
  return;
}

} /* extern "C" */
