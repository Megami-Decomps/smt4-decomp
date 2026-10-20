/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c39fc` (_code @ 0x3c39fc, 0x378 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdListBoxSetItemMode3(...);
int asdListBoxSetItemMode2(...);
int asdListBoxSetByteValue(unsigned int, int);
int asdListBoxAddItems(void);
int FUN_0025c58c(unsigned int, int, int);
int FUN_00262914(unsigned int, unsigned char *);

typedef struct fn_003c39fc_arg0 fn_003c39fc_arg0;
typedef struct fn_003c39fc_arg0_p5c fn_003c39fc_arg0_p5c;
struct fn_003c39fc_arg0 {
    void *field_0x0; /* +0x0 */
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0xb];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3f];
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    fn_003c39fc_arg0_p5c *field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x8];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0xc];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x184];
    undefined4 field_0x208; /* +0x208 */
    unsigned char pad_0x20c[0x4];
    undefined4 field_0x210; /* +0x210 */
    undefined4 field_0x214; /* +0x214 */
};
struct fn_003c39fc_arg0_p5c {
    unsigned char pad_0x0[0x10];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x4b];
    undefined4 field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x4448];
    undefined4 field_0x44a8; /* +0x44a8 */
    undefined4 field_0x44ac; /* +0x44ac */
};

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_003c3d78; /* 0x3c3d78 */
extern unsigned int DAT_00439ad4; /* 0x439ad4 */

/* Supplied declaration required: asdListBoxSetItemMode3. */
/* Supplied declaration required: asdListBoxSetItemMode2. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: FUN_0025c58c. */
/* Supplied declaration required: FUN_00262914. */
extern unsigned int *gameGetSlotTable(void);


void FUN_003c39fc(fn_003c39fc_arg0 *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x5c);
  FUN_0025c58c(temp_v0,0x73,0);
  *(unsigned int *)&param_1->field_0x10 = temp_v0;
  asdListBoxAddItems();
  asdListBoxSetByteValue(*(unsigned int *)&param_1->field_0x10,1);
  FUN_00262914(*(unsigned int *)&param_1->field_0x10,&LAB_003c3d78);
  puVar3 = (unsigned int *)(param_2 + 0x44a8);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0,(*puVar3 & 4) >> 2);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,1,(*puVar3 & 8) >> 3);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,2,(*puVar3 & 0x10) >> 4);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,3,(*puVar3 & 0x20) >> 5);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,5,(*puVar3 & 0x40) >> 6);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,6,(*puVar3 & 0x80) >> 7);
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,4,*(unsigned int *)(param_2 + 0x4a50),0,99999,0);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,7,(*puVar3 & 0x100) >> 8);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,8,(*puVar3 & 0x200) >> 9);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,9,(*puVar3 & 0x400) >> 10);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,10,(*puVar3 & 0x800) >> 0xb);
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,0xb,*(unsigned int *)(param_2 + 0x49c8),0,400,0);
  puVar2 = (unsigned int *)gameGetSlotTable();
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,0xc,*puVar2,0,999999999,0);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0xd,(*puVar3 & 0x20000) >> 0x11);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0xe,(*puVar3 & 0x400000) >> 0x16);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0xf,(*puVar3 & 0x800000) >> 0x17);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0x10,(*puVar3 & 0x1000000) >> 0x18);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0x11,(*puVar3 & 0x2000000) >> 0x19);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0x12,(*puVar3 & 0x4000000) >> 0x1a);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0x13,(*puVar3 & 0x8000000) >> 0x1b);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0x14,(*puVar3 & 0x10000000) >> 0x1c);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0x15,(*puVar3 & 0x20000000) >> 0x1d);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0x16);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0x17);
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,0x18,*(unsigned int *)(param_2 + 0x2f2c),0xffffffff
               ,999,0);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0x19);
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,0x1a,*(unsigned int *)(param_2 + 0x2f34),0,4,0);
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,0x1b,DAT_00439ad4,0xffffffff,999,0);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0x1c);
  return;
}

} /* extern "C" */
