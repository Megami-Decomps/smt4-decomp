/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ba3c` (_code @ 0x35ba3c, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001656a0(...);
int FUN_00167ab4(int, int, int, int, int, int);
int FUN_00200bcc(int);
int FUN_00202178(int);
int FUN_0020e9dc(int);
int FUN_002e59f8(...);
int FUN_00300124(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char LAB_00400001; /* 0x400001 */
extern unsigned char LAB_00400003; /* 0x400003 */
extern signed char DAT_0059dbe9; /* 0x59dbe9 */
extern unsigned char DAT_0059dc7c; /* 0x59dc7c */

/* Supplied declaration required: FUN_001656a0. */
/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_00200bcc. */
/* Supplied declaration required: FUN_00202178. */
/* Supplied declaration required: FUN_0020e9dc. */
/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: FUN_00300124. */


unsigned char * FUN_0035ba3c(unsigned long long *param_1,unsigned int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  
  FUN_002e59f8(param_1,&DAT_0059dc7c,8);
  if (DAT_0059dbe9 == '\0') {
    FUN_00200bcc(param_3);
  }
  FUN_002e59f8(&DAT_0059dc7c,param_1,8);
  FUN_0020e9dc(param_3);
  temp_v3 = *param_1;
  temp_v1 = 0x43360000;
  temp_v2 = 0x42200000;
  temp_v0 = 0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x68,0x10,1);
  *(unsigned int *)(temp_v0 + 8) = temp_v1;
  *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
  *(int *)(temp_v0 + 0x10) = (int)temp_v3;
  *(int *)(temp_v0 + 0x14) = (int)((unsigned long long)temp_v3 >> 0x20);
  *(unsigned int *)(temp_v0 + 4) = 0xc;
  *(unsigned int *)(temp_v0 + 0x18) = param_2;
  FUN_00300124();
  temp_v0 = FUN_001656a0(1);
  if (temp_v0 == 0) {
    FUN_00202178(1);
    temp_v0 = FUN_001656a0();
    if (temp_v0 == 0) {
      if ((*(unsigned int *)(param_3 + 0x10) & 8) == 0) {
        return &LAB_00400001;
      }
      return &LAB_00400003;
    }
  }
  return (unsigned char *)0x400000;
}

} /* extern "C" */
