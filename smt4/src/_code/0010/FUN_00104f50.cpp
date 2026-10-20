/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104f50` (_code @ 0x104f50, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010f820(void);
int addressBlockAllocate(unsigned int *, int);
int FUN_0010f898(int);
int FUN_0010f97c(void);
int FUN_0010f9d0(int);
int FUN_0010fab0(int, unsigned int);
int FUN_0010fae4(void);
int FUN_002c38fc(...);
int FUN_002c3918(unsigned int *, unsigned int, unsigned int, int);
int FUN_002c3944(void);
int memClear(unsigned int *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_00420f30; /* 0x420f30 */
extern unsigned int *DAT_00465124; /* 0x465124 */
extern unsigned int *DAT_00465174; /* 0x465174 */
extern unsigned int DAT_004e3ff0; /* 0x4e3ff0 */
extern unsigned int DAT_004e3ff4; /* 0x4e3ff4 */
extern unsigned int DAT_004e3ff8; /* 0x4e3ff8 */
extern unsigned int DAT_004e3ffc; /* 0x4e3ffc */
extern unsigned char DAT_004e4000; /* 0x4e4000 */
extern unsigned char *DAT_004e400c; /* 0x4e400c */
extern unsigned int DAT_004e4010; /* 0x4e4010 */
extern unsigned int DAT_004e4014; /* 0x4e4014 */
extern unsigned int DAT_004e4018; /* 0x4e4018 */
extern unsigned int DAT_004e401c; /* 0x4e401c */
extern unsigned int DAT_004e4020; /* 0x4e4020 */
extern unsigned int DAT_004e4024; /* 0x4e4024 */
extern unsigned int DAT_004e4060; /* 0x4e4060 */
extern unsigned int DAT_004e4064; /* 0x4e4064 */
extern unsigned int DAT_004e4068; /* 0x4e4068 */
extern unsigned int DAT_004e406c; /* 0x4e406c */
extern unsigned char *DAT_004e4078; /* 0x4e4078 */
extern unsigned int DAT_004e407c; /* 0x4e407c */
extern unsigned int DAT_004e4080; /* 0x4e4080 */
extern unsigned int DAT_004e4084; /* 0x4e4084 */
extern unsigned int DAT_004e4088; /* 0x4e4088 */
extern unsigned int DAT_004e408c; /* 0x4e408c */
extern unsigned int DAT_004e4090; /* 0x4e4090 */
extern unsigned int DAT_004e40cc; /* 0x4e40cc */
extern unsigned int DAT_004e40d0; /* 0x4e40d0 */
extern unsigned int DAT_004e40d4; /* 0x4e40d4 */
extern unsigned int DAT_004e40d8; /* 0x4e40d8 */
extern unsigned int DAT_004e40f4; /* 0x4e40f4 */
extern unsigned int DAT_004e40f8; /* 0x4e40f8 */
extern unsigned int DAT_004e40fc; /* 0x4e40fc */

/* Supplied declaration required: FUN_0010f820. */
/* Supplied declaration required: addressBlockAllocate. */
/* Supplied declaration required: FUN_0010f898. */
extern int FUN_0010f96c(void);
/* Supplied declaration required: FUN_0010f97c. */
/* Supplied declaration required: FUN_0010f9d0. */
/* Supplied declaration required: FUN_0010fab0. */
/* Supplied declaration required: FUN_0010fae4. */
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: FUN_002c3918. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: memClear. */
extern void nn_init_InitializeAllocator(unsigned int);


void FUN_00104f50(void)

{
/* irregular: 11 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_0010f96c();
  temp_v2 = temp_v0;
  FUN_0010f97c();
  FUN_0010f898((temp_v0 - temp_v2) - 0x2f00000);
  FUN_0010f9d0(0x2f00000);
  temp_v1 = FUN_0010f820();
  FUN_0010fab0(0x8000000,temp_v1);
  FUN_0010fae4();
  nn_init_InitializeAllocator(0x100000);
  DAT_004e40f4 = 0;
  DAT_004e40f8 = 0;
  DAT_004e40fc = 0xffffffff;
  DAT_00465124 = &DAT_004e40f4;
  FUN_002c38fc();
  memClear(&DAT_004e3ff0,0x104);
  DAT_004e3ff0 = 0;
  DAT_004e3ff4 = 0;
  DAT_004e3ff8 = 0;
  DAT_004e3ffc = 0;
  DAT_004e4000 = 0;
  DAT_004e4010 = 0;
  DAT_004e4014 = 0;
  DAT_004e4018 = 0;
  DAT_004e401c = 0;
  DAT_004e4020 = 0;
  DAT_004e4024 = 0;
  DAT_004e4060 = 0;
  DAT_004e4064 = 0;
  DAT_004e4068 = 0;
  DAT_004e406c = 0xffffffff;
  DAT_004e400c = &DAT_00420f30;
  DAT_004e407c = 0;
  DAT_004e4080 = 0;
  DAT_004e4084 = 0;
  DAT_004e4088 = 0;
  DAT_004e408c = 0;
  DAT_004e4090 = 0;
  DAT_004e40cc = 0;
  DAT_004e40d0 = 0;
  DAT_004e40d4 = 0;
  DAT_004e40d8 = 0xffffffff;
  DAT_004e4078 = &DAT_00420f30;
  DAT_00465174 = &DAT_004e3ff0;
  temp_v2 = FUN_0010f820();
  addressBlockAllocate(DAT_00465174,temp_v2 - 0x200000);
  puVar1 = DAT_00465174;
  DAT_00465174[5] = DAT_00465174[2];
  puVar1[6] = puVar1[3];
  FUN_002c3944();
  puVar1 = DAT_00465174;
  FUN_002c3918(DAT_00465174 + 7,DAT_00465174[5],DAT_00465174[6],0x100);
  FUN_002c38fc(puVar1 + 0x1d);
  return;
}

} /* extern "C" */
