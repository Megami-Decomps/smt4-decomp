/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Material_Create` (_code @ 0x373c04, 0x164 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00235df8(unsigned int *, int);
int FUN_00373d68(unsigned int *, int *, unsigned int, unsigned int, unsigned int);
int nw_gfx_Material_CreateBuffers(void);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00235df8. */
/* Supplied declaration required: FUN_00373d68. */
/* Supplied declaration required: nw_gfx_Material_CreateBuffers. */


unsigned int *
nw_gfx_Material_Create(unsigned int param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = (unsigned int *)
           (**(romwright_code **)(*param_4 + 8))(param_4,0x58,4,*(romwright_code **)(*param_4 + 8),param_4);
  if (puVar1 != (unsigned int *)0x0) {
    FUN_00373d68(puVar1,param_4,param_1,param_2,param_3);
    puVar2 = puVar1;
    nw_gfx_Material_CreateBuffers();
    if (((unsigned int)puVar2 & 0x80000000) != 0) {
      if (puVar1 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar1)(puVar1);
        (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
      }
      return (unsigned int *)0x0;
    }
    puVar2 = puVar1;
    FUN_00235df8(puVar1,1);
    puVar1[10] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,2);
    puVar1[0xb] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,4);
    puVar1[0xc] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,8);
    puVar1[0xd] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,0x10);
    puVar1[0xe] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,0x20);
    puVar1[0xf] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,0x80);
    puVar1[0x10] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,0x100);
    puVar1[0x11] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,0x200);
    puVar1[0x12] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,0x400);
    puVar1[0x13] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,0x800);
    puVar1[0x14] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00235df8(puVar1,0x1000);
    puVar1[0x15] = (unsigned int)puVar2;
  }
  return puVar1;
}

} /* extern "C" */
