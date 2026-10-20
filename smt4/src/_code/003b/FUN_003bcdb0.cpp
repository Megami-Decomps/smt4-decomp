/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcdb0` (_code @ 0x3bcdb0, 0x338 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a8c8(unsigned int *, int, int);
int FUN_00282924(...);
int FUN_002939f4(void);
int FUN_0033b1ac(unsigned int *, int);

/* Supplied declaration required: FUN_0022a8c8. */
extern unsigned short FUN_00245cc0(unsigned int);
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_002939f4. */
extern int FUN_002a8740(void);
/* Supplied declaration required: FUN_0033b1ac. */


void FUN_003bcdb0(int param_1,int param_2,unsigned short param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  int temp_v3;
  
  puVar3 = (unsigned int *)FUN_002939f4();
  puVar4 = puVar3;
  FUN_00282924(puVar3,param_1);
  if (puVar4 != (unsigned int *)0x0) {
    if ((*puVar4 & 0x20) == 0) {
      if (param_2 != 0) {
        if ((((param_3 & 2) != 0 || (param_3 & 0x20) != 0) ||
            ((param_3 & 0x40) != 0 || (param_3 & 0x80) != 0)) ||
           (((param_3 & 0x100) != 0 || (param_3 & 0x200) != 0 ||
            (((param_3 & 0x400) != 0 || (param_3 & 4) != 0) || (param_3 & 8) != 0)))) {
          FUN_0022a8c8(puVar3,param_1,0);
        }
        *(unsigned short *)((int)puVar4 + 0x1c6) = *(unsigned short *)((int)puVar4 + 0x1c6) | param_3;
        if (puVar4[0x9e] != 0) {
          temp_v0 = *(unsigned short *)(puVar4[0x9e] + 0x72) | param_3;
          *(unsigned short *)(puVar4[0x9e] + 0x72) = temp_v0;
          *(unsigned short *)(puVar4[0x9e] + 0x72) = temp_v0 & 0xfbff;
        }
        if (puVar4[0x9f] != 0) {
          *(unsigned short *)(puVar4[0x9f] + 0x44) = *(unsigned short *)(puVar4[0x9f] + 0x44) | param_3;
        }
        if (puVar4[0xa0] != 0) {
          *(unsigned short *)(puVar4[0xa0] + 0x44) = *(unsigned short *)(puVar4[0xa0] + 0x44) | param_3;
        }
        if ((*puVar4 & 2) != 0) {
          *(unsigned short *)((int)puVar4 + 0x1c6) = *(unsigned short *)((int)puVar4 + 0x1c6) & 0xfbff;
        }
        if ((*puVar4 & 0x10) != 0) {
          *(unsigned short *)((int)puVar4 + 0x1c6) = *(unsigned short *)((int)puVar4 + 0x1c6) & 0xfbff;
          return;
        }
      }
      else {
        *(unsigned short *)((int)puVar4 + 0x1c6) = *(unsigned short *)((int)puVar4 + 0x1c6) & ~param_3;
        temp_v2 = puVar4[0x9e];
        if (temp_v2 != 0) {
          *(unsigned short *)(temp_v2 + 0x72) = *(unsigned short *)(temp_v2 + 0x72) & ~param_3;
        }
        temp_v2 = puVar4[0x9f];
        if (temp_v2 != 0) {
          *(unsigned short *)(temp_v2 + 0x44) = *(unsigned short *)(temp_v2 + 0x44) & ~param_3;
        }
        temp_v2 = puVar4[0xa0];
        if (temp_v2 != 0) {
          *(unsigned short *)(temp_v2 + 0x44) = *(unsigned short *)(temp_v2 + 0x44) & ~param_3;
        }
        if ((param_3 & 0x80) != 0) {
          temp_v1 = FUN_00245cc0(0x16);
          temp_v3 = FUN_002939f4();
          FUN_00282924(temp_v3,param_1);
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v3 + 0x9e) = temp_v1;
          }
        }
        if ((param_3 & 0x40) != 0) {
          temp_v1 = FUN_00245cc0(0x17);
          temp_v3 = FUN_002939f4();
          FUN_00282924(temp_v3,param_1);
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v3 + 0xa0) = temp_v1;
          }
        }
        if ((param_3 & 0x100) != 0) {
          temp_v1 = FUN_00245cc0(0x18);
          temp_v3 = FUN_002939f4();
          FUN_00282924(temp_v3,param_1);
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v3 + 0xa2) = temp_v1;
          }
        }
        if ((param_3 & 8) != 0) {
          temp_v1 = FUN_00245cc0(0x19);
          temp_v3 = FUN_002939f4();
          FUN_00282924(temp_v3,param_1);
          if (temp_v3 != 0) {
            *(unsigned short *)(temp_v3 + 0xa4) = temp_v1;
          }
        }
        if (((param_3 & 2) != 0) && ((*puVar4 & 2) != 0)) {
          *puVar4 = *puVar4 | 1;
          temp_v3 = FUN_002939f4();
          temp_v3 = *(int *)(temp_v3 + 0x1e98) + param_1 * 0x114;
          *(unsigned int *)(temp_v3 + 0x50) = *(unsigned int *)(temp_v3 + 0x50) | 0x81;
          FUN_0033b1ac(puVar3,(int)*(short *)(temp_v3 + 0x62));
          *(short *)(puVar3 + 0x7f1) = (short)puVar3[0x7f1] + 1;
          return;
        }
      }
    }
  }
  else if ((-1 < param_1 - 0x6d) && (temp_v3 = FUN_002a8740(), temp_v3 != 0)) {
    if (param_2 == 0) {
      param_3 = *(unsigned short *)(temp_v3 + 0x44) & ~param_3;
    }
    else {
      if (((((param_3 & 2) != 0 || (param_3 & 0x20) != 0) ||
           ((param_3 & 0x40) != 0 || (param_3 & 0x80) != 0)) ||
          ((param_3 & 0x100) != 0 || (param_3 & 0x200) != 0)) ||
         (((param_3 & 0x400) != 0 || (param_3 & 4) != 0) || (param_3 & 8) != 0)) {
        *(unsigned short *)(temp_v3 + 0x44) = *(unsigned short *)(temp_v3 + 0x44) & 0xffef;
      }
      param_3 = *(unsigned short *)(temp_v3 + 0x44) | param_3;
    }
    *(unsigned short *)(temp_v3 + 0x44) = param_3;
  }
  return;
}

} /* extern "C" */
