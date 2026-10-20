/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00169310` (_code @ 0x169310, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcat(...);
int FUN_001642e4(unsigned char [64], int *, unsigned int, int);
int asdMemFree(unsigned char *);
int asdTextureCreate(void);
int asdTMSprDecompress(unsigned char *, unsigned int, int);
int libc_strcpy(unsigned char [64], int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_00169530; /* 0x169530 */
extern unsigned char LAB_00169538; /* 0x169538 */
extern unsigned char LAB_00169540; /* 0x169540 */

/* Supplied declaration required: libc_strcat. */
/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTextureCreate. */
/* Supplied declaration required: asdTMSprDecompress. */
extern int wstrlen(unsigned int);
/* Supplied declaration required: libc_strcpy. */
extern int rt_memcmp(unsigned char *, unsigned char *, unsigned int);


unsigned int FUN_00169310(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char *puVar1;
  char *pcVar2;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [64];
  int temp_v4;
  
  puVar1 = temp_v3;
  temp_v1 = param_1[1];
  libc_strcpy(temp_v3,*param_1 + 0xc);
  pcVar2 = *(char **)(temp_v1 + 8);
  if (*pcVar2 != '-') {
    libc_strcat(temp_v3);
  }
  else {
    libc_strcat(temp_v3,*(unsigned int *)(param_1[pcVar2[1] * -8 + 0x181] + 8));
  }
  if (*(char *)(param_1[1] + 0xd) != '\0') {
    libc_strcat(temp_v3,&LAB_00169530);
  }
  else {
    libc_strcat(temp_v3,&LAB_00169538);
  }
  temp_v1 = wstrlen(*(unsigned int *)(temp_v1 + 8));
  if (temp_v1 == 0) {
    param_1[2] = 0;
  }
  else if ((param_1[4] & 0xfffeffffU) == 0) {
    temp_v2 = 1;
    if ((param_1[4] & 0x10000U) != 0) {
      temp_v2 = 3;
    }
    temp_v0 = temp_v2;
    if (*(char *)(param_1[1] + 0xd) != '\0') {
      if ((temp_v2 & 2) != 0) {
        temp_v0 = temp_v2 & 0xfffffffd;
      }
      else {
        temp_v0 = temp_v2 | 2;
      }
    }
    FUN_001642e4(temp_v3,&temp_v4,temp_v0,0x80);
    if (puVar1 != (unsigned char *)0x0) {
      if (*(char *)(param_1[1] + 0xd) != '\0') {
        asdTMSprDecompress(puVar1,temp_v2,0x80);
      }
      temp_v1 = rt_memcmp(puVar1,&LAB_00169540,4);
      if (temp_v1 == 0) {
        if (*(int *)(puVar1 + 0x24) != 0) {
          param_1[2] = 0;
        }
        else {
          temp_v2 = (unsigned int)((param_1[4] & 0x10000U) != 0);
          asdTextureCreate();
          param_1[2] = temp_v2;
          *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(puVar1 + 8);
          *(unsigned int *)(param_1[2] + 0x14) = *(unsigned int *)(puVar1 + 0xc);
          *(unsigned int *)(param_1[2] + 0x18) = *(unsigned int *)(puVar1 + 0x10);
          *(unsigned int *)(param_1[2] + 0x1c) = *(unsigned int *)(puVar1 + 0x18);
          *(unsigned int *)(param_1[2] + 0x20) = *(unsigned int *)(puVar1 + 0x14);
          *(int *)(param_1[2] + 0x28) = temp_v4 - *(int *)(puVar1 + 0x20);
          *(unsigned int *)(param_1[2] + 0x2c) = *(unsigned int *)(param_1[2] + 0x2c) | 0x10;
          if (*(int *)(puVar1 + 4) == 1) {
            *(unsigned int *)(param_1[2] + 0x3c) = 1;
            *(unsigned int *)(param_1[2] + 0x40) = 1;
          }
          *(unsigned char **)(param_1[2] + 0x24) = puVar1 + *(int *)(puVar1 + 0x20);
        }
        param_1[3] = (int)puVar1;
        param_1[4] = param_1[4] | 2;
        return 1;
      }
      asdMemFree(puVar1);
    }
  }
  return 0;
}

} /* extern "C" */
