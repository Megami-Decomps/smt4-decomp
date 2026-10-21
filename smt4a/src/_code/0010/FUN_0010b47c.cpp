/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b47c` (_code @ 0x10b47c, 0xae bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013462c(int, unsigned int *, unsigned int *[5]);
int FUN_002e6e34(unsigned char [12], int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int onlineStringDestroy(unsigned char [16]);
int _ZN9Obj55aff4C1Ev(unsigned char [16]);
int onlineFormatWideString(unsigned char [16], unsigned char *, unsigned int);
int onlineObjectThreadRootStart(unsigned int *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
} param_2_stack;

extern unsigned char LAB_0010b52c; /* 0x10b52c */
extern unsigned char DAT_00558864; /* 0x558864 */

extern unsigned int *FUN_001104e8(int, unsigned char *);
/* Supplied declaration required: FUN_0013462c. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int operatorNew(unsigned int);
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: _ZN9Obj55aff4C1Ev. */
/* Supplied declaration required: onlineFormatWideString. */
/* Supplied declaration required: onlineObjectThreadRootStart. */


unsigned int FUN_0010b47c(int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int *temp_v3 [5];
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [16];
  
  FUN_002e6e34(temp_v4,param_1 + 4);
  if (*(char *)(param_1 + 0x34) != '\x02') {
    _ZN9Obj55b28cD1Ev(temp_v4);
    temp_v0 = 0;
  }
  else {
    *(unsigned char *)(param_1 + 0x34) = 0;
    for (temp_v2 = 0; temp_v2 < param_2; temp_v2 = temp_v2 + 1) {
      _ZN9Obj55aff4C1Ev(temp_v5);
      onlineFormatWideString(temp_v5,&LAB_0010b52c,temp_v2 + 1);
      temp_v1 = operatorNew(0x34);
      puVar3 = (unsigned int *)0x0;
      if (temp_v1 != 0) {
        puVar3 = (unsigned int *)FUN_001104e8(temp_v1,temp_v5);
        *puVar3 = (unsigned int)&DAT_00558864;
        puVar3[0xb] = 0;
        puVar3[10] = 0;
        puVar3[9] = 0;
      }
      puVar3[10] = 0;
      puVar3[0xb] = param_1;
      puVar3[0xc] = 0;
      puVar3[9] = 0x10b455;
      temp_v3[0] = puVar3;
      onlineObjectThreadRootStart(puVar3,0);
      puVar3 = *(unsigned int **)(param_1 + 0x3c);
      if (puVar3 != *(unsigned int **)(param_1 + 0x40)) {
        *(unsigned int **)(param_1 + 0x3c) = puVar3 + 1;
        if (puVar3 != (unsigned int *)0x0) {
          *puVar3 = (unsigned int)temp_v3[0];
        }
      }
      else {
        FUN_0013462c(param_1 + 0x38,puVar3,temp_v3);
      }
      onlineStringDestroy(temp_v5);
    }
    _ZN9Obj55b28cD1Ev(temp_v4);
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
