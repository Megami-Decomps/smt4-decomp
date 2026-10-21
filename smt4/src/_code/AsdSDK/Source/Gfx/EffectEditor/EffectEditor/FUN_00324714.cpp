/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324714` (_code @ 0x324714, 0x1e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00246854(void);
int effPartsSetData(unsigned int, unsigned int, unsigned int, int);
int effBlockCreateFromBlock(void);
int effectEditorApplyHandlerState(void);
int FUN_0025c650(unsigned int, unsigned int *);
int FUN_002629a8(int, int);
int rt_memcpy_w144(unsigned int *, int);
int libc_strcpy(unsigned int *, unsigned int);
int nodeListFindByKey(unsigned int, unsigned int);
int rt_memcpy(unsigned int, unsigned int, unsigned int);
int rt_memcpy_w(unsigned char *, unsigned int *, int);

extern int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned int DAT_0044ea94; /* 0x44ea94 */
extern unsigned int DAT_0044ea98; /* 0x44ea98 */
extern unsigned int DAT_0044ea9c; /* 0x44ea9c */
extern int DAT_0044eaa0; /* 0x44eaa0 */
extern unsigned int *DAT_0044eaa4; /* 0x44eaa4 */
extern unsigned int DAT_0044eab8; /* 0x44eab8 */
extern unsigned int DAT_0044eacc; /* 0x44eacc */
extern unsigned int DAT_0044ead0; /* 0x44ead0 */
extern unsigned int DAT_0044ead4; /* 0x44ead4 */
extern unsigned int DAT_0044ead8; /* 0x44ead8 */
extern unsigned int DAT_0044eae0; /* 0x44eae0 */
extern unsigned int DAT_0044eae4; /* 0x44eae4 */
extern unsigned int DAT_0044eae8; /* 0x44eae8 */
extern unsigned char DAT_0044f858; /* 0x44f858 */
extern int DAT_0044f864; /* 0x44f864 */
extern unsigned char DAT_004d8b40; /* 0x4d8b40 */
extern unsigned char DAT_004d8ca0; /* 0x4d8ca0 */

/* Supplied declaration required: FUN_00246854. */
extern int linkedFindItemByIndex(unsigned int, int);
extern unsigned int effEditorNodeListCount(unsigned int);
/* Supplied declaration required: effPartsSetData. */
extern unsigned int resourceResolveHeaderPointer(unsigned int);
/* Supplied declaration required: effBlockCreateFromBlock. */
/* Supplied declaration required: effectEditorApplyHandlerState. */
/* Supplied declaration required: FUN_0025c650. */
/* Supplied declaration required: FUN_002629a8. */
/* Supplied declaration required: rt_memcpy_w144. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: nodeListFindByKey. */
extern unsigned int *FUN_002f3208(unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_00324714(void)

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
  
  temp_v0 = linkedFindItemByIndex(DAT_0044ea94,DAT_0044ea8c + DAT_0044f864);
  puVar2 = (unsigned int *)FUN_002f3208(DAT_0044ea94,*(unsigned int *)(temp_v0 + 0x90));
  DAT_0044eaa4 = puVar2;
  rt_memcpy_w144(puVar2,temp_v0);
  if ((*(unsigned int *)(temp_v0 + 0x98) & 2) != 0) {
    nodeListFindByKey(DAT_0044ea94,*(unsigned int *)(temp_v0 + 0x94));
  }
  FUN_0025c650(DAT_0044ea94,puVar2);
  rt_memcpy_w(&DAT_004d8b40,puVar2,0x90);
  rt_memcpy_w(&DAT_004d8ca0,puVar2,0x80);
  DAT_0044ea9c = puVar2[0x24];
  puVar3 = puVar2;
  FUN_00246854();
  libc_strcpy(puVar2 + 0x27,*puVar3);
  if (*(short *)(puVar3 + 1) != 0x1b) {
    temp_v1 = resourceResolveHeaderPointer(DAT_0044ea9c);
    rt_memcpy(puVar3[3],temp_v1,puVar3[4]);
  }
  if (puVar3[3] != 0) {
    effPartsSetData(DAT_0044ea9c,puVar3[3],puVar3[4],*(unsigned short *)(puVar3 + 2));
  }
  temp_v1 = DAT_0044ea9c;
  effBlockCreateFromBlock();
  effectEditorApplyHandlerState();
  temp_v2 = 0;
  do {
    puVar5 = *(unsigned int **)(temp_v2 * 4 + 0x44f4d4);
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
          DAT_0044eab8 = puVar5[1];
          goto LAB_00324888;
        }
        puVar5 = puVar5 + 7;
        in_r12 = *puVar5;
      } while (in_r12 != 0);
    }
    temp_v2 = (temp_v2 + 1) & 0xffff;
    if (temp_v2 >= 0xd) {
      DAT_0044eab8 = 0;
LAB_00324888:
      DAT_0044ea98 = temp_v1;
      *(unsigned char **)(DAT_0044eab8 + 0x34) = &DAT_0044f858;
      temp_v2 = effEditorNodeListCount(DAT_0044ea94);
      if (temp_v2 >= 0x16) {
        DAT_0044ea8c = temp_v2 - 0x15;
        DAT_0044f864 = 0x14;
      }
      else {
        DAT_0044f864 = temp_v2 - 1;
        DAT_0044ea8c = 0;
      }
      DAT_0044eacc = 0;
      DAT_0044ead0 = 0;
      DAT_0044ead4 = 1;
      DAT_0044ead8 = 0;
      DAT_0044eae0 = 0;
      DAT_0044eae4 = 0;
      DAT_0044eae8 = 0;
      if (DAT_0044eaa0 != 0) {
        FUN_002629a8(DAT_0044eaa0,3);
        DAT_0044eaa0 = 0;
      }
      return 0x800000;
    }
  } while( 1 );
}

} /* extern "C" */
