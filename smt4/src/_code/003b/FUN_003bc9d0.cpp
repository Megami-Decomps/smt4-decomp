/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc9d0` (_code @ 0x3bc9d0, 0x230 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(...);
int gfxObjectDestroy(...);
int FUN_00298d50(...);
int FUN_0029bb14(...);
int asdMdlManagerCreateLoaded(...);
int FUN_0029c2cc(...);
int FUN_0029c3c0(...);
int FUN_002a0428(...);
int FUN_002a043c(...);
int FUN_002a09b4(...);
int asdWorkAreaReset(...);
int asdModelSlotRelease(...);
int asdMdlManagerDestroy(...);
int FUN_002a8638(...);
int FUN_002c1e30(...);

typedef struct fn_003bc9d0_arg0 fn_003bc9d0_arg0;
struct fn_003bc9d0_arg0 {
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

/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: gfxObjectDestroy. */
extern int effTimelineIsDone(void *);
extern void *FUN_00263c1c(char *);
extern int FUN_00282b28(void);
/* Supplied declaration required: FUN_00298d50. */
/* Supplied declaration required: FUN_0029bb14. */
/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: FUN_0029c2cc. */
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002a043c. */
/* Supplied declaration required: FUN_002a09b4. */
/* Supplied declaration required: asdWorkAreaReset. */
/* Supplied declaration required: asdModelSlotRelease. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: FUN_002a8638. */
extern int FUN_002adee0(void);
extern int padIsButtonPressed(unsigned int);
/* Supplied declaration required: FUN_002c1e30. */
extern unsigned int FUN_002c501c(void);


void FUN_003bc9d0(fn_003bc9d0_arg0 *param_1)

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
    asdWorkAreaReset();
    FUN_002a09b4("title/title.bcenv",0);
    pvVar2 = (void *)FUN_00263c1c("title/title_1.bccam");
    param_1->field_0x18 = pvVar2;
    FUN_002a043c(pvVar2,0);
    temp_v1 = FUN_002c501c();
    FUN_002a8638(*(unsigned int *)((int)param_1->field_0x18 + 8),&temp_v2,temp_v5,temp_v3,
                 temp_v4);
    temp_v2 = temp_v2 * 180.0f * 0.31830987f;
    FUN_002c1e30(temp_v1,1);
    FUN_00298d50(temp_v1);
    pcVar4 = "title/title_1.bam";
    asdMdlManagerCreateLoaded("title/title_1.bam",0x38);
    param_1->field_0x4 = pcVar4;
    temp_v0 = FUN_002adee0();
    if (temp_v0 != 0) {
      FUN_002a0428(param_1->field_0x4,1);
      puVar5 = (unsigned int *)param_1->field_0x4;
      if ((*puVar5 & 4) != 0) {
        *puVar5 = *puVar5 & 0xfffffffb;
        *(unsigned int *)(puVar5[2] + 0x74) = 0x3f800000;
        FUN_0029bb14();
      }
    }
    param_1->field_0x0 = 1;
    param_1->field_0x2 = 1;
    temp_v0 = param_1->field_0x20 + 1;
    param_1->field_0x20 = temp_v0;
  }
  if (temp_v0 != 1) {
    temp_v0 = padIsButtonPressed(0);
    if ((temp_v0 != 0) && (temp_v0 = FUN_00282b28(), temp_v0 == 0)) {
      param_1->field_0x24 = 1;
    }
    return;
  }
  temp_v0 = effTimelineIsDone(param_1->field_0x18);
  if ((temp_v0 == 0) || (param_1->field_0x1 != 0)) {
    if (param_1->field_0x24 != 0) {
      if (param_1->field_0x1 == 0) {
        FUN_0029c3c0(0,10,0xff);
        FUN_0029c3c0(1,10,0xff);
      }
      param_1->field_0x1 = 1;
      param_1->field_0x24 = 0;
    }
  }
  else {
    FUN_0029c3c0(0,10,0xff);
    FUN_0029c3c0(1,10,0xff);
    param_1->field_0x1 = 1;
    param_1->field_0x24 = 0;
  }
  temp_v0 = FUN_00282b28();
  if (((temp_v0 == 0) && (param_1->field_0x1 != 0)) &&
     (temp_v0 = param_1->field_0x28 + 1, param_1->field_0x28 = temp_v0, temp_v0 >= 2)) {
    param_1->field_0x1 = 0;
    puVar5 = (unsigned int *)param_1->field_0x4;
    *puVar5 = *puVar5 | 2;
    *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
    asdMdlManagerMarkDestroy(param_1->field_0x4);
    asdMdlManagerDestroy(param_1->field_0x4);
    param_1->field_0x4 = (void *)0x0;
    FUN_0029c2cc(param_1->field_0x18,0);
    gfxObjectDestroy(param_1->field_0x18);
    param_1->field_0x18 = (void *)0x0;
    asdModelSlotRelease(0);
    param_1->field_0x3 = 1;
  }
  temp_v0 = padIsButtonPressed(0);
  if ((temp_v0 != 0) && (temp_v0 = FUN_00282b28(), temp_v0 == 0)) {
    param_1->field_0x24 = 1;
  }
  return;
}

} /* extern "C" */
