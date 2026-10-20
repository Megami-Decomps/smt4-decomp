/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011394c` (_code @ 0x11394c, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001037a2(unsigned char [8], unsigned char [12]);
int FUN_00113cd0(int, unsigned char [104], int, int);
int sharedRefHolderDestroy(unsigned char [8]);
int FUN_002e99e4(unsigned char [104], int);
int bufferAssignByte(unsigned char [8], unsigned char [4]);
int FUN_002ea974(unsigned char [104]);
int onlineUrlSetAddress(unsigned char [104], unsigned int);
int onlineUrlDestroy(unsigned char [104]);
int onlineTimeGetNow(unsigned char [12]);
int strHolderAssignU32(unsigned char [8], int);
int FUN_002f2afc(unsigned char [8]);

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_2_stack;

extern unsigned char DAT_00594a58; /* 0x594a58 */

/* Supplied declaration required: FUN_001037a2. */
/* Supplied declaration required: FUN_00113cd0. */
/* Supplied declaration required: sharedRefHolderDestroy. */
/* Supplied declaration required: FUN_002e99e4. */
/* Supplied declaration required: bufferAssignByte. */
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: onlineUrlSetAddress. */
/* Supplied declaration required: onlineUrlDestroy. */
/* Supplied declaration required: onlineTimeGetNow. */
/* Supplied declaration required: strHolderAssignU32. */
/* Supplied declaration required: FUN_002f2afc. */


void FUN_0011394c(int param_1,unsigned int param_2)

{
/* irregular: 11 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned char temp_v1 [8];
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [104];
  unsigned char temp_v5 [12];
  
  FUN_002ea974(temp_v4);
  onlineUrlSetAddress(temp_v4,param_2);
  FUN_002e99e4(temp_v4,3);
  FUN_002f2afc(temp_v1);
  temp_v3[0] = 0;
  bufferAssignByte(temp_v1,temp_v3);
  strHolderAssignU32(temp_v1,param_1 + 0x14);
  onlineTimeGetNow(temp_v5);
  FUN_001037a2(temp_v1,temp_v5);
  for (temp_v0 = 0; temp_v0 < (*(unsigned int *)((unsigned char *)&DAT_00594a58 + 0x4c)); temp_v0 = temp_v0 + 1) {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 0xc))
                (piVar1,temp_v4,*(int *)(temp_v2 + 0xc) + *(int *)(temp_v2 + 0x18),
                 *(unsigned int *)(temp_v2 + 0x10),0);
    }
    else if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00113cd0(*(int *)(param_1 + 0x10),temp_v4,temp_v2,0);
    }
  }
  sharedRefHolderDestroy(temp_v1);
  onlineUrlDestroy(temp_v4);
  return;
}

} /* extern "C" */
