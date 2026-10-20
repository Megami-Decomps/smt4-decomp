/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a5c44` (_code @ 0x1a5c44, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a5e50(unsigned char [12], unsigned int, int);
int FUN_001a5e84(unsigned char [12], int *, int);
int FUN_001b1ab8(int *, unsigned int, int *, unsigned int);
int FUN_001b1c40(int *, unsigned int, int, int *, unsigned int, unsigned int);
int FUN_001bd53c(int, int *);
int rt_memcpy(unsigned int, int *, int);

typedef int romwright_code(...);
/* stack frame of param_5: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char sp4C; /* 0x4c: local_4c */
    unsigned int sp60; /* 0x60: local_60 */
} param_5_stack;

extern int FUN_00188c94(void);
extern unsigned int FUN_00188ca4(void);
/* Supplied declaration required: FUN_001a5e50. */
/* Supplied declaration required: FUN_001a5e84. */
extern int FUN_001a8d40(unsigned char *, unsigned int);
extern unsigned int FUN_001a8e14(int);
/* Supplied declaration required: FUN_001b1ab8. */
/* Supplied declaration required: FUN_001b1c40. */
extern int *FUN_001b3c90(unsigned char *, unsigned int);
extern unsigned int FUN_001b3cb8(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_001bd53c. */
/* Supplied declaration required: rt_memcpy. */


unsigned int
FUN_001a5c44(int *param_1,unsigned int param_2,unsigned int param_3,int *param_4,unsigned int param_5)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [12];
  char temp_v6;
  int temp_v7;
  unsigned int uStack_44;
  unsigned int temp_v8;
  
  temp_v0 = FUN_001a8e14(param_1[1]);
  piVar2 = (int *)(**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v0);
  if ((piVar2 != (int *)0x0) ||
     (piVar2 = param_1, FUN_001b1ab8(param_1,param_2,param_4,param_5), piVar2 != (int *)0x0)) {
    FUN_001a5e84(temp_v5,piVar2,1);
    if ((temp_v6 != '\0') && (temp_v1 = FUN_001a8d40(temp_v5,param_3), temp_v1 != 0)) {
      return 1;
    }
    piVar2 = (int *)FUN_001b3c90(temp_v5,param_3);
    temp_v2 = (**(romwright_code **)(*param_4 + 8))(param_4,piVar2 + 8);
    if (temp_v2 != 0) {
      temp_v3 = FUN_00188ca4();
      temp_v1 = FUN_00188c94();
      if ((temp_v3 <= temp_v2) && (temp_v2 + (int)(piVar2 + 8) <= temp_v1 + temp_v3)) {
        temp_v7 = 0x56574943;
        uStack_44 = temp_v0;
        temp_v8 = param_3;
        rt_memcpy(temp_v2,&temp_v7,0x20);
        temp_v1 = temp_v2 + 0x20;
        temp_v4 = FUN_001b3cb8(temp_v5,param_3);
        FUN_001b1c40(param_1,temp_v0,temp_v1,piVar2,temp_v4,param_5);
        if (param_1 == piVar2) {
          FUN_001a5e50(temp_v5,param_3,temp_v1);
          FUN_001bd53c(temp_v1,piVar2);
          return 1;
        }
      }
    }
  }
  return 0;
}

} /* extern "C" */
