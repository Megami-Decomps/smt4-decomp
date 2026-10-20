/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001131d4` (_code @ 0x1131d4, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrCopy(int, unsigned int *);
int FUN_002ea3d0(int, unsigned int);
int FUN_002fdbec(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_00112a0d; /* 0x112a0d */
extern unsigned char LAB_00113268; /* 0x113268 */

/* Supplied declaration required: onlineSockAddrCopy. */
extern unsigned int FUN_002ea3c0(unsigned int **, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int wordRefsDiffer_002fd750(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_002fdbec. */


void FUN_001131d4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar5;
  unsigned int *temp_v4;
  unsigned int temp_v5 [4];
  
  FUN_002fdbec();
  temp_v4 = *(unsigned int **)(param_1 + 0x130);
  do {
    temp_v4 = (unsigned int *)*temp_v4;
    temp_v5[0] = *(unsigned int *)(param_1 + 0x130);
    temp_v2 = wordRefsDiffer_002fd750(&temp_v4,temp_v5);
    if (temp_v2 == 0) {
      puVar5 = &LAB_00112a0d;
      temp_v3 = FUN_002ea3c0(&temp_v4,puVar5,0,&LAB_00113268);
      FUN_002ea3d0(param_1,temp_v3);
      return;
    }
    temp_v0 = temp_v4[4];
    temp_v1 = *(unsigned int *)(param_1 + 0x2f8);
  } while ((((temp_v0 << 0x18) | (((temp_v0 >> 8) & 0xff) << 0x10) | (((temp_v0 >> 0x10) & 0xff) << 8) |
            (temp_v0 >> 0x18)) ==
            ((temp_v1 << 0x18) | (((temp_v1 >> 8) & 0xff) << 0x10) | (((temp_v1 >> 0x10) & 0xff) << 8) |
            (temp_v1 >> 0x18))) ||
          ((unsigned short)((*(unsigned short *)((int)temp_v4 + 0xe) << 8) |
                   (*(unsigned short *)((int)temp_v4 + 0xe) >> 8)) !=
           (unsigned short)((*(unsigned short *)(param_1 + 0x2f6) << 8) | (*(unsigned short *)(param_1 + 0x2f6) >> 8))));
  onlineSockAddrCopy(param_1 + 0x2f0,temp_v4 + 2);
  *(unsigned int *)(param_1 + 0x2d0) = 4;
  puVar5 = (unsigned char *)0x112dd1;
  temp_v3 = FUN_002ea3c0(&temp_v4,puVar5,0,&LAB_00113268);
  FUN_002ea3d0(param_1,temp_v3);
  return;
}

} /* extern "C" */
