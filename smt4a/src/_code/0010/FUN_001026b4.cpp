/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001026b4` (_code @ 0x1026b4, 0x172 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e32a4(int, unsigned char *, unsigned char *, unsigned int, unsigned int);
int FUN_002e40ec(...);
int FUN_002e410c(unsigned int *, unsigned int, unsigned int);
int FUN_002e5780(unsigned int *);
int FUN_002e5f10(...);

/* stack frame of param_7: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_7_stack;

extern unsigned char LAB_00102828; /* 0x102828 */
extern unsigned char DAT_0064c010; /* 0x64c010 */

/* Supplied declaration required: FUN_002e32a4. */
/* Supplied declaration required: FUN_002e40ec. */
/* Supplied declaration required: FUN_002e410c. */
extern unsigned int *FUN_002e4e86(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002e5780. */
/* Supplied declaration required: FUN_002e5f10. */


int FUN_001026b4(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,unsigned int param_6,
                unsigned int param_7)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int *puStack_24;
  unsigned int uStack_20;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  temp_v0 = *(unsigned int *)(*param_1 - 4);
  puStack_24 = param_1;
  uStack_20 = param_2;
  temp_v10 = param_3;
  temp_v11 = param_4;
  if ((temp_v0 < param_2) || (param_5 < param_6)) {
    temp_v1 = param_5;
    if (param_5 < temp_v0) {
      temp_v1 = temp_v0;
    }
    temp_v4 = param_6;
    if (temp_v0 < param_2) {
      temp_v4 = param_2;
    }
    FUN_002e32a4(9,&LAB_00102828,&LAB_00102828,temp_v4,temp_v1);
  }
  temp_v0 = *(int *)(*param_1 - 4) - param_2;
  if (temp_v10 < temp_v0) {
    temp_v0 = temp_v10;
  }
  temp_v1 = param_5 - param_6;
  if (param_7 < param_5 - param_6) {
    temp_v1 = param_7;
  }
  temp_v4 = *(int *)(*param_1 - 4) - temp_v0;
  if (-temp_v1 - 0xf < temp_v4) {
    FUN_002e32a4(8,&LAB_00102828,&LAB_00102828,temp_v4,-temp_v1 - 0xf);
  }
  temp_v4 = *param_1;
  temp_v2 = *(unsigned int *)(temp_v4 - 4);
  temp_v5 = (temp_v2 - temp_v0) + temp_v1;
  if (temp_v5 != 0) {
    temp_v3 = (temp_v2 - temp_v0) - param_2;
    temp_v8 = param_2 + temp_v10;
    temp_v9 = temp_v11 + param_6;
    if (((*(int *)(temp_v4 - 0xc) + 1U >= 2) || (temp_v5 > *(unsigned int *)(temp_v4 - 8))) ||
       ((temp_v11 != 0 && ((temp_v11 >= temp_v4 && (temp_v4 + temp_v2 > temp_v11)))))) {
      temp_v6 = (temp_v2 >> 1) + temp_v2 + (temp_v2 >> 3);
      if (temp_v6 < temp_v2 + 0x80) {
        temp_v6 = temp_v2 + 0x80;
      }
      temp_v7 = temp_v5;
      puVar2 = (unsigned int *)FUN_002e4e86(&temp_v6,&temp_v7);
      puVar3 = param_1;
      FUN_002e410c(param_1,*puVar2,temp_v5);
      if (param_2 != 0) {
        FUN_002e40ec(puVar3 + 3,*param_1,param_2);
      }
      if (temp_v1 != 0) {
        FUN_002e40ec((int)puVar3 + param_2 + 0xc,temp_v9,temp_v1);
      }
      if (temp_v3 != 0) {
        FUN_002e40ec((int)puVar3 + temp_v1 + param_2 + 0xc,*param_1 + temp_v8,temp_v3);
      }
      FUN_002e5780(param_1);
      *param_1 = (unsigned int)(puVar3 + 3);
    }
    else {
      if (temp_v3 != 0) {
        FUN_002e5f10(temp_v4 + param_2 + temp_v1,temp_v4 + temp_v8,temp_v3);
      }
      if (temp_v1 != 0) {
        FUN_002e5f10(*param_1 + param_2,temp_v9,temp_v1);
      }
      *(unsigned int *)(*param_1 - 4) = temp_v5;
      *(unsigned char *)(temp_v5 + *param_1) = 0;
    }
  }
  else {
    FUN_002e5780(param_1);
    *param_1 = (unsigned int)&DAT_0064c010;
  }
  return *param_1 + param_2;
}

} /* extern "C" */
