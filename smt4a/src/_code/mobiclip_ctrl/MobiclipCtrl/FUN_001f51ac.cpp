/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f51ac` (_code @ 0x1f51ac, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int);
int FUN_00422ef8(void);
int FUN_00426140(void);
int FUN_00512e38(void);
int FUN_00513210(void);
int FUN_00513620(void);
int FUN_00513718(void);
int FUN_00513a30(void);
int FUN_00513f6c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_00617c48; /* 0x617c48 */
extern unsigned int DAT_00617c78; /* 0x617c78 */
extern unsigned int DAT_00617ca0; /* 0x617ca0 */
extern unsigned int DAT_00617cd0; /* 0x617cd0 */
extern unsigned int DAT_00617cf8; /* 0x617cf8 */
extern unsigned int DAT_00617d28; /* 0x617d28 */
extern unsigned int DAT_00617d50; /* 0x617d50 */
extern unsigned int DAT_00617d80; /* 0x617d80 */
extern unsigned int DAT_00617da8; /* 0x617da8 */
extern unsigned int DAT_00617dd8; /* 0x617dd8 */
extern unsigned int DAT_00617e00; /* 0x617e00 */
extern unsigned int DAT_00617e30; /* 0x617e30 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00422ef8. */
/* Supplied declaration required: FUN_00426140. */
/* Supplied declaration required: FUN_00512e38. */
/* Supplied declaration required: FUN_00513210. */
/* Supplied declaration required: FUN_00513620. */
/* Supplied declaration required: FUN_00513718. */
/* Supplied declaration required: FUN_00513a30. */
/* Supplied declaration required: FUN_00513f6c. */
extern void nn_fnd_ExpHeapBase_Finalize(unsigned int);


void FUN_001f51ac(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_00422ef8();
  FUN_00426140();
  FUN_00513f6c();
  FUN_00513210();
  FUN_00512e38();
  FUN_00513718();
  FUN_00513a30();
  FUN_00513620();
  temp_v0 = DAT_00617c78;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_00617c48);
  FUN_0019a5a0(temp_v0);
  temp_v0 = DAT_00617cd0;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_00617ca0);
  FUN_0019a5a0(temp_v0);
  temp_v0 = DAT_00617d28;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_00617cf8);
  FUN_0019a5a0(temp_v0);
  temp_v0 = DAT_00617d80;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_00617d50);
  FUN_0019a5a0(temp_v0);
  temp_v0 = DAT_00617dd8;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_00617da8);
  FUN_0019a5a0(temp_v0);
  temp_v0 = DAT_00617e30;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_00617e00);
  FUN_0019a5a0(temp_v0);
  return;
}

} /* extern "C" */
