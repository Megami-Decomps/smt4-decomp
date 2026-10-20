/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029127c` (_code @ 0x29127c, 0x238 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001642e4(unsigned int *, unsigned char [4], int, int);
int FUN_00167ab4(int, int, int, int, int, int);
int FUN_0019a5a0(unsigned int *);
int FUN_001b4ddc(...);
int FUN_00290edc(void);
int FUN_002e342c(int, int);
int FUN_002e6354(...);
int FUN_003007a0(void);
int FUN_003c2df0(unsigned int *, int, int);
int rt_memcpy_w(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_001642e4. */
/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001b4ddc. */
/* Supplied declaration required: FUN_00290edc. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003007a0. */
/* Supplied declaration required: FUN_003c2df0. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int * FUN_0029127c(unsigned int *param_1)

{
/* irregular: 2 goto(s); 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9 [4];
  
  FUN_001642e4(param_1,temp_v9,1,0x80);
  puVar2 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x90,0x10,1);
  FUN_002e6354();
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  FUN_001b4ddc(puVar2);
  temp_v2 = param_1[1];
  temp_v3 = param_1[2];
  temp_v4 = param_1[3];
  temp_v6 = 0;
  *puVar2 = *param_1;
  puVar2[1] = temp_v2;
  puVar2[2] = temp_v3;
  puVar2[3] = temp_v4;
  temp_v2 = param_1[1];
  temp_v3 = param_1[2];
  temp_v4 = param_1[3];
  puVar2[4] = *param_1;
  puVar2[5] = temp_v2;
  puVar2[6] = temp_v3;
  puVar2[7] = temp_v4;
  puVar2[0x1d] = param_1[0x1d];
  puVar2[0x1a] = param_1[0x1a];
  temp_v5 = param_1[0x22] + (int)param_1;
  if (param_1[0x20] != 0) {
    do {
      temp_v0 = *(int *)(temp_v5 + 0x90);
      if ((*(unsigned int *)(temp_v5 + 0x98) & 1) != 0) {
        for (temp_v7 = puVar2[0x23]; temp_v7 != 0; temp_v7 = *(int *)(temp_v7 + 0xac)) {
          temp_v8 = temp_v0 == 0;
          temp_v0 = temp_v0 - 1;
          if (temp_v8) goto LAB_00291358;
        }
        temp_v7 = 0;
LAB_00291358:
        FUN_003007a0();
        rt_memcpy_w();
        FUN_002e6354(temp_v0,0x90);
        *(unsigned int *)(temp_v0 + 0x84) = 1;
        *(unsigned char *)(temp_v0 + 0x88) = 8;
        *(unsigned char *)(temp_v0 + 0x89) = 0;
        *(unsigned char *)(temp_v0 + 0x8a) = 0;
        FUN_001b4ddc(temp_v0);
        *(unsigned int *)(temp_v0 + 0x98) = *(unsigned int *)(temp_v0 + 0x98) | 1;
        *(unsigned int *)(temp_v0 + 0x90) = *(unsigned int *)(temp_v7 + 0x90);
        if (*(int *)(temp_v7 + 0xac) != 0) {
          *(int *)(*(int *)(temp_v7 + 0xac) + 0xb0) = temp_v0;
          *(unsigned int *)(temp_v0 + 0xac) = *(unsigned int *)(temp_v7 + 0xac);
        }
        else {
          *(unsigned int *)(temp_v0 + 0xac) = 0;
          puVar2[0x22] = temp_v0;
        }
        *(int *)(temp_v7 + 0xac) = temp_v0;
        *(int *)(temp_v0 + 0xb0) = temp_v7;
        puVar2[0x20] = puVar2[0x20] + 1;
      }
      else {
        temp_v7 = temp_v0 + (int)param_1;
        FUN_00290edc();
        temp_v0 = temp_v7;
        FUN_003007a0();
        *(int *)(temp_v0 + 0x90) = temp_v7;
        *(unsigned int *)(temp_v0 + 0xac) = 0;
        if (puVar2[0x22] != 0) {
          *(int *)(puVar2[0x22] + 0xac) = temp_v0;
          *(unsigned int *)(temp_v0 + 0xb0) = puVar2[0x22];
        }
        else {
          puVar2[0x23] = temp_v0;
          *(unsigned int *)(temp_v0 + 0xb0) = 0;
        }
        puVar2[0x22] = temp_v0;
        puVar2[0x20] = puVar2[0x20] + 1;
      }
      if ((*(unsigned int *)(temp_v5 + 0x98) & 2) != 0) {
        temp_v1 = *(int *)(temp_v5 + 0x94);
        for (temp_v7 = puVar2[0x23]; temp_v7 != 0; temp_v7 = *(int *)(temp_v7 + 0xac)) {
          temp_v8 = temp_v1 == 0;
          temp_v1 = temp_v1 - 1;
          if (temp_v8) goto LAB_0029145c;
        }
        temp_v7 = 0;
LAB_0029145c:
        FUN_003c2df0(puVar2,temp_v0,temp_v7);
      }
      rt_memcpy_w(temp_v0,temp_v5);
      FUN_002e342c(temp_v0 + 0x9c,temp_v5 + 0x9c);
      puVar1 = (unsigned int *)(temp_v5 + 0x98);
      temp_v6 = temp_v6 + 1;
      temp_v5 = temp_v5 + 0xc0;
      *(unsigned int *)(temp_v0 + 0x98) = *puVar1;
    } while (temp_v6 < (unsigned int)param_1[0x20]);
  }
  FUN_0019a5a0(param_1);
  return puVar2;
}

} /* extern "C" */
