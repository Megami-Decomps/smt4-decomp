/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b9178` (_code @ 0x2b9178, 0x220 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMSprDecompress(int, unsigned int, int);
int libc_strcat(...);
int asdTextureCreate(void);
int libc_strcpy(unsigned char [64], int);
int asdMemFree(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_002b9398; /* 0x2b9398 */
extern unsigned char LAB_002b93a0; /* 0x2b93a0 */
extern unsigned char LAB_002b93a8; /* 0x2b93a8 */

/* Supplied declaration required: asdTMSprDecompress. */
/* Supplied declaration required: libc_strcat. */
/* Supplied declaration required: asdTextureCreate. */
/* Supplied declaration required: libc_strcpy. */
extern int rt_memcmp(int, unsigned char *, unsigned int);
extern int libc_strlen(unsigned int);
/* Supplied declaration required: asdMemFree. */
extern int asdLoadFileSync(unsigned char *, int *, unsigned int, unsigned int);


unsigned int FUN_002b9178(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [64];
  int temp_v5;
  
  temp_v2 = param_1[1];
  libc_strcpy(temp_v4,*param_1 + 0xc);
  pcVar2 = *(char **)(temp_v2 + 8);
  if (*pcVar2 != '-') {
    libc_strcat(temp_v4);
  }
  else {
    libc_strcat(temp_v4,*(unsigned int *)(param_1[pcVar2[1] * -8 + 0x181] + 8));
  }
  if (*(char *)(param_1[1] + 0xd) != '\0') {
    libc_strcat(temp_v4,&LAB_002b9398);
  }
  else {
    libc_strcat(temp_v4,&LAB_002b93a0);
  }
  temp_v2 = libc_strlen(*(unsigned int *)(temp_v2 + 8));
  if (temp_v2 == 0) {
    param_1[2] = 0;
  }
  else if ((param_1[4] & 0xfffeffffU) == 0) {
    temp_v3 = 1;
    if ((param_1[4] & 0x10000U) != 0) {
      temp_v3 = 3;
    }
    temp_v1 = temp_v3;
    if (*(char *)(param_1[1] + 0xd) != '\0') {
      if ((temp_v3 & 2) != 0) {
        temp_v1 = temp_v3 & 0xfffffffd;
      }
      else {
        temp_v1 = temp_v3 | 2;
      }
    }
    temp_v2 = asdLoadFileSync(temp_v4,&temp_v5,temp_v1,0x80);
    if (temp_v2 != 0) {
      if (*(char *)(param_1[1] + 0xd) != '\0') {
        asdTMSprDecompress(temp_v2,temp_v3,0x80);
      }
      temp_v0 = rt_memcmp(temp_v2,&LAB_002b93a8,4);
      if (temp_v0 == 0) {
        if (*(int *)(temp_v2 + 0x24) != 0) {
          param_1[2] = 0;
        }
        else {
          temp_v3 = (unsigned int)((param_1[4] & 0x10000U) != 0);
          asdTextureCreate();
          param_1[2] = temp_v3;
          *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v2 + 8);
          *(unsigned int *)(param_1[2] + 0x14) = *(unsigned int *)(temp_v2 + 0xc);
          *(unsigned int *)(param_1[2] + 0x18) = *(unsigned int *)(temp_v2 + 0x10);
          *(unsigned int *)(param_1[2] + 0x1c) = *(unsigned int *)(temp_v2 + 0x18);
          *(unsigned int *)(param_1[2] + 0x20) = *(unsigned int *)(temp_v2 + 0x14);
          *(int *)(param_1[2] + 0x28) = temp_v5 - *(int *)(temp_v2 + 0x20);
          *(unsigned int *)(param_1[2] + 0x2c) = *(unsigned int *)(param_1[2] + 0x2c) | 0x10;
          if (*(int *)(temp_v2 + 4) == 1) {
            *(unsigned int *)(param_1[2] + 0x3c) = 1;
            *(unsigned int *)(param_1[2] + 0x40) = 1;
          }
          *(int *)(param_1[2] + 0x24) = *(int *)(temp_v2 + 0x20) + temp_v2;
        }
        param_1[3] = temp_v2;
        param_1[4] = param_1[4] | 2;
        return 1;
      }
      asdMemFree(temp_v2);
    }
  }
  return 0;
}

} /* extern "C" */
