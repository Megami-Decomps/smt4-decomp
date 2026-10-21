/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c597c` (_code @ 0x3c597c, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00243c24(void);
int FUN_002b30e4(void);
int effPartSetData(unsigned int, unsigned int, unsigned int, int);
int libc_strcpy(unsigned int *, unsigned int);
int rt_memcpy_w144(unsigned int *, int);
int effectEditorApplyHandlerState(void);
int nodeListFindByKey(unsigned int, unsigned int);
int objectRegistryInsert(int, int);
int FUN_003c2df0(unsigned int, unsigned int *);
int rt_memcpy(unsigned int, unsigned int, unsigned int);
int rt_memcpy_w(unsigned char *, unsigned int *, int);

extern int DAT_0059dbec; /* 0x59dbec */
extern unsigned int DAT_0059dbf4; /* 0x59dbf4 */
extern unsigned int DAT_0059dbf8; /* 0x59dbf8 */
extern unsigned int DAT_0059dbfc; /* 0x59dbfc */
extern int DAT_0059dc00; /* 0x59dc00 */
extern unsigned int *DAT_0059dc04; /* 0x59dc04 */
extern unsigned int DAT_0059dc18; /* 0x59dc18 */
extern unsigned int DAT_0059dc2c; /* 0x59dc2c */
extern unsigned int DAT_0059dc30; /* 0x59dc30 */
extern unsigned int DAT_0059dc34; /* 0x59dc34 */
extern unsigned int DAT_0059dc38; /* 0x59dc38 */
extern unsigned int DAT_0059dc40; /* 0x59dc40 */
extern unsigned int DAT_0059dc44; /* 0x59dc44 */
extern unsigned int DAT_0059dc48; /* 0x59dc48 */
extern unsigned char DAT_0059e9a8; /* 0x59e9a8 */
extern int DAT_0059e9b4; /* 0x59e9b4 */
extern unsigned char DAT_00634bc0; /* 0x634bc0 */
extern unsigned char DAT_00634d20; /* 0x634d20 */

/* Supplied declaration required: FUN_00243c24. */
/* Supplied declaration required: FUN_002b30e4. */
extern unsigned int resourceResolveHeaderPointer(unsigned int);
/* Supplied declaration required: effPartSetData. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: rt_memcpy_w144. */
extern int linkedFindItemByIndex(unsigned int, int);
extern unsigned int nodeChainCount(unsigned int);
/* Supplied declaration required: effectEditorApplyHandlerState. */
/* Supplied declaration required: nodeListFindByKey. */
extern unsigned int *FUN_00376628(unsigned int, unsigned int);
/* Supplied declaration required: objectRegistryInsert. */
/* Supplied declaration required: FUN_003c2df0. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_003c597c(void)

{
/* irregular: 1 goto(s); irregular input(s): in_r12; 11 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int in_r12;
  unsigned char temp_v3;
  
  temp_v0 = linkedFindItemByIndex(DAT_0059dbf4,DAT_0059dbec + DAT_0059e9b4);
  puVar2 = (unsigned int *)FUN_00376628(DAT_0059dbf4,*(unsigned int *)(temp_v0 + 0x90));
  DAT_0059dc04 = puVar2;
  rt_memcpy_w144(puVar2,temp_v0);
  if ((*(unsigned int *)(temp_v0 + 0x98) & 2) != 0) {
    nodeListFindByKey(DAT_0059dbf4,*(unsigned int *)(temp_v0 + 0x94));
  }
  FUN_003c2df0(DAT_0059dbf4,puVar2);
  rt_memcpy_w(&DAT_00634bc0,puVar2,0x90);
  rt_memcpy_w(&DAT_00634d20,puVar2,0x80);
  DAT_0059dbfc = puVar2[0x24];
  puVar3 = puVar2;
  FUN_002b30e4();
  libc_strcpy(puVar2 + 0x27,*puVar3);
  if (*(short *)(puVar3 + 1) != 0x1b) {
    temp_v1 = resourceResolveHeaderPointer(DAT_0059dbfc);
    rt_memcpy(puVar3[3],temp_v1,puVar3[4]);
  }
  if (puVar3[3] != 0) {
    effPartSetData(DAT_0059dbfc,puVar3[3],puVar3[4],*(unsigned short *)(puVar3 + 2));
  }
  temp_v1 = DAT_0059dbfc;
  FUN_00243c24();
  effectEditorApplyHandlerState();
  temp_v2 = 0;
  do {
    puVar5 = *(unsigned int **)(temp_v2 * 4 + 0x59e624);
    if (puVar5 != (unsigned int *)0x0) {
      in_r12 = *puVar5;
    }
    if (puVar5 != (unsigned int *)0x0 && in_r12 != 0) {
      do {
        temp_v3 = *(short *)(in_r12 + 4) == *(short *)(puVar2[0x24] + 4);
        if (temp_v3) {
          in_r12 = (unsigned int)*(unsigned short *)(in_r12 + 8);
        }
        if (temp_v3 && in_r12 == *(unsigned short *)(puVar2[0x24] + 0xc)) {
          DAT_0059dc18 = puVar5[1];
          goto LAB_003c5af0;
        }
        puVar5 = puVar5 + 7;
        in_r12 = *puVar5;
      } while (in_r12 != 0);
    }
    temp_v2 = (temp_v2 + 1) & 0xffff;
    if (temp_v2 >= 0xd) {
      DAT_0059dc18 = 0;
LAB_003c5af0:
      DAT_0059dbf8 = temp_v1;
      *(unsigned char **)(DAT_0059dc18 + 0x34) = &DAT_0059e9a8;
      temp_v2 = nodeChainCount(DAT_0059dbf4);
      if (temp_v2 >= 0x16) {
        DAT_0059dbec = temp_v2 - 0x15;
        DAT_0059e9b4 = 0x14;
      }
      else {
        DAT_0059e9b4 = temp_v2 - 1;
        DAT_0059dbec = 0;
      }
      DAT_0059dc2c = 0;
      DAT_0059dc30 = 0;
      DAT_0059dc34 = 1;
      DAT_0059dc38 = 0;
      DAT_0059dc40 = 0;
      DAT_0059dc44 = 0;
      DAT_0059dc48 = 0;
      if (DAT_0059dc00 != 0) {
        objectRegistryInsert(DAT_0059dc00,3);
        DAT_0059dc00 = 0;
      }
      return 0x800000;
    }
  } while( 1 );
}

} /* extern "C" */
