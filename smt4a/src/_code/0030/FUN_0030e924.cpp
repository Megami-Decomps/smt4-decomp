/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e924` (_code @ 0x30e924, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNewC(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0055780c; /* 0x55780c */
extern unsigned char DAT_0055cba4; /* 0x55cba4 */

/* Supplied declaration required: asdOperatorNewC. */
extern int FUN_0030e914(unsigned int *, unsigned int, unsigned int);


unsigned int * FUN_0030e924(unsigned int *param_1,int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: 4 goto(s); 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  param_1[1] = 0x20;
  param_1[3] = param_4;
  param_1[2] = 0;
  *param_1 = (unsigned int)&DAT_0055cba4;
  param_1[5] = param_2;
  *(unsigned char *)(param_1 + 6) = param_3;
  if (param_2 == 0) {
    param_1[5] = (unsigned int)&DAT_0055780c;
    *(unsigned char *)(param_1 + 6) = 0;
  }
  temp_v2 = 0;
  temp_v3 = 0xff;
  do {
    temp_v1 = FUN_0030e914(param_1,0x10,temp_v2 & 0xff);
    if (temp_v1 != 0) goto LAB_0030e96c;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0xff);
LAB_0030e978:
  param_1[8] = temp_v3;
  puVar3 = (unsigned char *)((temp_v3 - temp_v2) + 1);
  param_1[7] = temp_v2;
  asdOperatorNewC();
  param_1[0xb] = (unsigned int)puVar3;
  for (; temp_v2 <= temp_v3; temp_v2 = temp_v2 + 1) {
    if ((temp_v2 - 0x61 < 0x1a) && (temp_v1 = FUN_0030e914(param_1,0x10,temp_v2 & 0xff), temp_v1 != 0)) {
      temp_v1 = FUN_0030e914(param_1,8,(temp_v2 - 0x20) & 0xff);
      if (temp_v1 != 0) {
        temp_v0 = (unsigned char)(temp_v2 - 0x20);
      }
      else {
        temp_v0 = (unsigned char)temp_v2;
      }
    }
    else {
      temp_v0 = (unsigned char)temp_v2;
    }
    *puVar3 = temp_v0;
    puVar3 = puVar3 + 1;
  }
  temp_v2 = 0;
  temp_v3 = 0xff;
  do {
    temp_v1 = FUN_0030e914(param_1,8,temp_v2 & 0xff);
    if (temp_v1 != 0) goto LAB_0030e9f0;
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0xff);
LAB_0030e9fc:
  param_1[10] = temp_v3;
  puVar3 = (unsigned char *)((temp_v3 - temp_v2) + 1);
  param_1[9] = temp_v2;
  asdOperatorNewC();
  param_1[0xc] = (unsigned int)puVar3;
  do {
    if (temp_v3 < temp_v2) {
      return param_1;
    }
    if ((temp_v2 - 0x41 < 0x1a) && (temp_v1 = FUN_0030e914(param_1,8,temp_v2 & 0xff), temp_v1 != 0)) {
      temp_v1 = FUN_0030e914(param_1,0x10,(temp_v2 + 0x20) & 0xff);
      if (temp_v1 == 0) {
        temp_v0 = (unsigned char)temp_v2;
        *puVar3 = temp_v0;
        puVar3 = puVar3 + 1;
        temp_v2 = temp_v2 + 1;
        continue;
      }
      temp_v0 = (unsigned char)(temp_v2 + 0x20);
    }
    else {
      temp_v0 = (unsigned char)temp_v2;
    }
    *puVar3 = temp_v0;
    puVar3 = puVar3 + 1;
    temp_v2 = temp_v2 + 1;
  } while( 1 );
LAB_0030e96c:
  while ((temp_v2 < temp_v3 && (temp_v1 = FUN_0030e914(param_1,0x10,temp_v3 & 0xff), temp_v1 == 0))) {
    temp_v3 = temp_v3 - 1;
  }
  goto LAB_0030e978;
LAB_0030e9f0:
  while ((temp_v2 < temp_v3 && (temp_v1 = FUN_0030e914(param_1,8,temp_v3 & 0xff), temp_v1 == 0))) {
    temp_v3 = temp_v3 - 1;
  }
  goto LAB_0030e9fc;
}

} /* extern "C" */
