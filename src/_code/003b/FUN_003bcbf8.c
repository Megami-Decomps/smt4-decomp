/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcbf8` (_code @ 0x3bcbf8, 0x230 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003bcbf8_arg0 fn_003bcbf8_arg0;
struct fn_003bcbf8_arg0 {
    undefined1 field_0x0; /* +0x0 */
    byte field_0x1; /* +0x1 */
    undefined1 field_0x2; /* +0x2 */
    undefined1 field_0x3; /* +0x3 */
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x10];
    void *field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    int field_0x20; /* +0x20 */
    byte field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    int field_0x28; /* +0x28 */
};

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_002637b4. */
extern int FUN_0026394c(void *);
extern void *FUN_00263e48(char *);
extern int FUN_00282d98(void);
/* Supplied declaration required: FUN_00298fec. */
/* Supplied declaration required: FUN_0029bdb4. */
/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_0029c56c. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a06dc. */
/* Supplied declaration required: FUN_002a0c54. */
/* Supplied declaration required: FUN_002a5058. */
/* Supplied declaration required: FUN_002a7604. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002a88dc. */
extern int FUN_002ae16c(void);
extern int FUN_002bffbc(unsigned int);
/* Supplied declaration required: FUN_002c1ffc. */
extern unsigned int FUN_002c5218(void);


void FUN_003bcbf8(fn_003bcbf8_arg0 *param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  void *pvVar2;
  unsigned int temp_v1;
  char *pcVar4;
  unsigned int *puVar5;
  float temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [4];
  
  if (param_1->field_0x20 != 0) {
    temp_v0 = param_1->field_0x20;
  }
  else {
    FUN_002a5058();
    FUN_002a0c54("title/title.bcenv",0);
    pvVar2 = (void *)FUN_00263e48("title/title_1.bccam");
    param_1->field_0x18 = pvVar2;
    FUN_002a06dc(pvVar2,0);
    temp_v1 = FUN_002c5218();
    FUN_002a88dc(*(unsigned int *)((int)param_1->field_0x18 + 8),&temp_v2,temp_v5,temp_v3,
                 temp_v4);
    temp_v2 = temp_v2 * 180.0f * 0.31830987f;
    FUN_002c1ffc(temp_v1,1);
    FUN_00298fec(temp_v1);
    pcVar4 = "title/title_1.bam";
    FUN_0029bddc("title/title_1.bam",0x38);
    param_1->field_0x4 = pcVar4;
    temp_v0 = FUN_002ae16c();
    if (temp_v0 != 0) {
      FUN_002a06c8(param_1->field_0x4,1);
      puVar5 = param_1->field_0x4;
      if ((*puVar5 & 4) != 0) {
        *puVar5 = *puVar5 & 0xfffffffb;
        *(unsigned int *)(puVar5[2] + 0x74) = 0x3f800000;
        FUN_0029bdb4();
      }
    }
    param_1->field_0x0 = 1;
    param_1->field_0x2 = 1;
    temp_v0 = param_1->field_0x20 + 1;
    param_1->field_0x20 = temp_v0;
  }
  if (temp_v0 != 1) {
    temp_v0 = FUN_002bffbc(0);
    if ((temp_v0 != 0) && (temp_v0 = FUN_00282d98(), temp_v0 == 0)) {
      param_1->field_0x24 = 1;
    }
    return;
  }
  temp_v0 = FUN_0026394c(param_1->field_0x18);
  if ((temp_v0 == 0) || (param_1->field_0x1 != 0)) {
    if (param_1->field_0x24 != 0) {
      if (param_1->field_0x1 == 0) {
        FUN_0029c660(0,10,0xff);
        FUN_0029c660(1,10,0xff);
      }
      param_1->field_0x1 = 1;
      param_1->field_0x24 = 0;
    }
  }
  else {
    FUN_0029c660(0,10,0xff);
    FUN_0029c660(1,10,0xff);
    param_1->field_0x1 = 1;
    param_1->field_0x24 = 0;
  }
  temp_v0 = FUN_00282d98();
  if (((temp_v0 == 0) && (param_1->field_0x1 != 0)) &&
     (temp_v0 = param_1->field_0x28 + 1, param_1->field_0x28 = temp_v0, temp_v0 >= 2)) {
    param_1->field_0x1 = 0;
    puVar5 = param_1->field_0x4;
    *puVar5 = *puVar5 | 2;
    *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
    FUN_00152af8(param_1->field_0x4);
    FUN_002a7aa0(param_1->field_0x4);
    param_1->field_0x4 = (void *)0x0;
    FUN_0029c56c(param_1->field_0x18,0);
    FUN_002637b4(param_1->field_0x18);
    param_1->field_0x18 = (void *)0x0;
    FUN_002a7604(0);
    param_1->field_0x3 = 1;
  }
  temp_v0 = FUN_002bffbc(0);
  if ((temp_v0 != 0) && (temp_v0 = FUN_00282d98(), temp_v0 == 0)) {
    param_1->field_0x24 = 1;
  }
  return;
}
