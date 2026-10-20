/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1ab8` (_code @ 0x1b1ab8, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a5e84(...);
int FUN_001b1c40(...);
int FUN_001b1e88(...);
int builtin_strncpy(...);

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
extern int FUN_00188c94(void);
extern unsigned int FUN_00188ca4(void);
/* Supplied declaration required: FUN_001a5e84. */
extern int FUN_001a8930(int, unsigned int, unsigned int *);
extern unsigned int FUN_001a8e14(int);
/* Supplied declaration required: FUN_001b1c40. */
/* Supplied declaration required: FUN_001b1e88. */
extern unsigned int nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(unsigned char *);
extern unsigned int nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(unsigned char *);


unsigned int FUN_001b1ab8(int *param_1,unsigned int param_2,int *param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar5;
  int *piVar6;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11 [104];
  unsigned char temp_v12 [20];
  
  temp_v1 = FUN_001a8e14(param_1[1]);
  temp_v2 = (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v1);
  if (temp_v2 == 0) {
    temp_v8 = 0xffffffff;
    temp_v10 = 0;
    temp_v3 = FUN_001a8930(param_1[1],param_2,(unsigned int *)&temp_v8);
    temp_v0 = temp_v9;
    temp_v2 = 0;
    if ((temp_v3 != 0) && (temp_v2 = 0, temp_v9 != 0)) {
      temp_v8 = 0;
      piVar5 = param_1;
      temp_v9 = param_4;
      FUN_001b1c40(param_1,temp_v1,temp_v11,0x2c);
      if (piVar5 == (int *)0x2c) {
        piVar5 = (int *)nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(temp_v11);
        piVar6 = (int *)nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(temp_v11);
        if (piVar6 <= piVar5) {
          temp_v2 = (**(romwright_code **)(*param_3 + 8))(param_3,piVar5 + temp_v0 + 1);
          temp_v4 = FUN_00188ca4();
          temp_v3 = FUN_00188c94();
          temp_v7 = temp_v2 <= temp_v4;
          temp_v6 = temp_v4 == temp_v2;
          if (!temp_v7 || temp_v6) {
            temp_v5 = temp_v2 + (int)(piVar5 + temp_v0 + 1);
            temp_v7 = temp_v3 + temp_v4 <= temp_v5;
            temp_v6 = temp_v5 == temp_v3 + temp_v4;
          }
          if (!temp_v7 || temp_v6) {
            temp_v8 = 0;
            piVar6 = param_1;
            temp_v9 = param_4;
            FUN_001b1c40(param_1,temp_v1,temp_v2,piVar5);
            if (piVar6 == piVar5) {
              builtin_strncpy((char *)(temp_v2 + (int)piVar5),"CWAT",4);
              FUN_001a5e84(temp_v12,temp_v2,1);
              FUN_001b1e88(temp_v12);
              (**(romwright_code **)(*param_1 + 8))(param_1,temp_v1,temp_v2);
              return temp_v2;
            }
          }
        }
      }
      temp_v2 = 0;
    }
  }
  return temp_v2;
}

} /* extern "C" */
