/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285f88` (_code @ 0x285f88, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c3944(unsigned short *, int);
int FUN_002c5300(int, int, int, int, int);

/* stack frame of param_9: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_9_stack;

extern unsigned int DAT_004c5830; /* 0x4c5830 */
extern unsigned int DAT_004c5834; /* 0x4c5834 */
extern unsigned int DAT_004c5838; /* 0x4c5838 */

/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_002c5300. */


void FUN_00285f88(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,int param_6,int param_7,unsigned short param_8,int param_9)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  int temp_v1;
  unsigned int *puVar5;
  unsigned short *puVar6;
  
  puVar5 = &DAT_004c5830 + param_7 * 4;
  puVar2 = (unsigned short *)0x100;
  FUN_002c5300(0x100,0x100,0,param_6 + 0x34,1);
  if (puVar2 != (unsigned short *)0x0) {
    *(char *)((int)puVar2 + 3) = (char)param_7;
    *puVar2 = param_8;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(unsigned char *)(puVar2 + 1) = 0;
    *(unsigned int *)(puVar2 + 4) = param_1;
    *(unsigned int *)(puVar2 + 6) = param_2;
    *(unsigned int *)(puVar2 + 8) = param_3;
    *(unsigned int *)(puVar2 + 10) = param_4;
    *(unsigned int *)(puVar2 + 0xc) = param_5;
    puVar3 = (unsigned short *)(&DAT_004c5834)[param_7 * 4];
    puVar6 = (unsigned short *)*puVar5;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    if ((&DAT_004c5838)[param_7 * 4] == 0) {
      *puVar5 = (unsigned int)puVar2;
      (&DAT_004c5834)[param_7 * 4] = (unsigned int)puVar2;
    }
    else {
      temp_v0 = *puVar2;
      if (temp_v0 < *puVar6) {
        temp_v1 = *(int *)(puVar6 + 0xe);
        *(int *)(puVar2 + 0xe) = temp_v1;
        *(unsigned short **)(puVar2 + 0x10) = puVar6;
        if (temp_v1 != 0) {
          *(unsigned short **)(temp_v1 + 0x20) = puVar2;
        }
        if (*(int *)(puVar2 + 0x10) != 0) {
          *(unsigned short **)(*(int *)(puVar2 + 0x10) + 0x1c) = puVar2;
        }
        *puVar5 = (unsigned int)puVar2;
      }
      else if ((puVar3 != (unsigned short *)0x0) && (temp_v0 >= *puVar3)) {
        *(unsigned short **)(puVar2 + 0xe) = puVar3;
        *(unsigned int *)(puVar2 + 0x10) = *(unsigned int *)(puVar3 + 0x10);
        *(unsigned short **)(*(int *)(puVar2 + 0xe) + 0x20) = puVar2;
        if (*(int *)(puVar2 + 0x10) != 0) {
          *(unsigned short **)(*(int *)(puVar2 + 0x10) + 0x1c) = puVar2;
        }
        (&DAT_004c5834)[param_7 * 4] = (unsigned int)puVar2;
      }
      else {
        for (puVar3 = (unsigned short *)*puVar5; puVar3 != (unsigned short *)0x0;
            puVar3 = *(unsigned short **)(puVar3 + 0x10)) {
          if (temp_v0 < *puVar3) {
            temp_v1 = *(int *)(puVar3 + 0xe);
            *(int *)(puVar2 + 0xe) = temp_v1;
            *(unsigned short **)(puVar2 + 0x10) = puVar3;
            if (temp_v1 != 0) {
              *(unsigned short **)(temp_v1 + 0x20) = puVar2;
            }
            if (*(int *)(puVar2 + 0x10) != 0) {
              *(unsigned short **)(*(int *)(puVar2 + 0x10) + 0x1c) = puVar2;
            }
            break;
          }
        }
      }
    }
    (&DAT_004c5838)[param_7 * 4] = (&DAT_004c5838)[param_7 * 4] + 1;
    if (param_9 != 0) {
      FUN_002c3944(puVar2 + 0x1a,param_6);
    }
  }
  return;
}

} /* extern "C" */
