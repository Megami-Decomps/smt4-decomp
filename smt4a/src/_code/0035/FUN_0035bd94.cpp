/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035bd94` (_code @ 0x35bd94, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(...);
int SBORROW4(unsigned int, int);

/* stack frame of param_3: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_3_stack;

extern unsigned char LAB_001ab89c; /* 0x1ab89c */
extern int g_aocSystem; /* 0x570280 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);


void FUN_0035bd94(unsigned short param_1,unsigned short *param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned short *puVar8;
  unsigned short *puVar9;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned short temp_v10 [84];
  
  temp_v10[0] = param_1;
  if (*(int *)(g_aocSystem + 0x368) != 0) {
    puVar4 = temp_v10;
    libc_bsearch(puVar4,*(int *)(g_aocSystem + 0x368),*(unsigned int *)(g_aocSystem + 0x364),0xa8,
                 &LAB_001ab89c);
    temp_v7 = temp_v5;
    if (puVar4 != (unsigned short *)0x0) goto LAB_0035be18;
  }
  temp_v3 = dataTableGet(0,1);
  temp_v4 = dataTableGetEntries();
  temp_v3 = dataTableGetCount(temp_v3);
  puVar4 = temp_v10;
  libc_bsearch(puVar4,temp_v4,temp_v3,0xa8,&LAB_001ab89c);
  temp_v7 = temp_v6;
LAB_0035be18:
  if (puVar4 != (unsigned short *)0x0) {
    temp_v9 = param_3 == 8;
    if ((int)param_3 < 9) {
      temp_v7 = param_3 - 1;
      temp_v8 = param_3;
    }
    else {
      temp_v8 = 8;
    }
    temp_v2 = param_3 - 8;
    if (8 >= (int)param_3) {
      temp_v9 = temp_v7 == 0;
      temp_v2 = temp_v7;
    }
    if (!temp_v9 && temp_v2 < 0 == ((int)param_3 >= 9 && SBORROW4(param_3,8))) {
      puVar8 = puVar4 + 0x27;
      puVar9 = param_2 + -1;
      if ((temp_v8 & 1) == 0) {
        puVar8 = puVar4 + 0x28;
        *param_2 = *puVar8;
        puVar9 = param_2;
      }
      temp_v0 = puVar8[1];
      for (temp_v7 = (int)(temp_v8 - 1) >> 1; temp_v7 != 0; temp_v7 = temp_v7 - 1) {
        temp_v1 = puVar8[2];
        puVar9[1] = temp_v0;
        temp_v0 = puVar8[3];
        puVar9 = puVar9 + 2;
        *puVar9 = temp_v1;
        puVar8 = puVar8 + 2;
      }
    }
    if (-1 < (int)(temp_v8 - 1)) {
      param_2[temp_v8 - 1] = puVar4[temp_v8 + 0x27];
    }
  }
  return;
}

} /* extern "C" */
