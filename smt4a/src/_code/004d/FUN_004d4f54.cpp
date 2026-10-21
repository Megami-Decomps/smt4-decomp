/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d4f54` (_code @ 0x4d4f54, 0x2e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *asdListBoxGetIntValuePtr(unsigned int, unsigned int);
extern unsigned int listBoxItemHasOwner(unsigned int);
extern unsigned int asdListBoxGetSelectedItemId(unsigned int);


void FUN_004d4f54(int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = asdListBoxGetSelectedItemId(*(unsigned int *)(param_1 + 0x10));
  switch(temp_v0) {
  case 0:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23a4) = temp_v0;
    return;
  case 1:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23a8) = temp_v0;
    return;
  case 2:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23ac) = temp_v0;
    return;
  case 3:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23b0) = *puVar2;
    return;
  case 4:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23b4) = *puVar2;
    return;
  case 5:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23b8) = temp_v0;
    return;
  case 6:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23bc) = temp_v0;
    return;
  case 7:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23c0) = temp_v0;
    return;
  case 8:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23c4) = *puVar2;
    return;
  case 9:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23c8) = *puVar2;
    return;
  case 10:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23cc) = *puVar2;
    return;
  case 0xb:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23d0) = *puVar2;
    return;
  case 0xc:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23d4) = *puVar2;
    return;
  case 0xd:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23d8) = temp_v0;
    return;
  case 0xe:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23dc) = temp_v0;
    return;
  case 0xf:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23e0) = *puVar2;
    return;
  case 0x10:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23e4) = *puVar2;
    return;
  case 0x11:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23e8) = temp_v0;
    return;
  case 0x12:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23ec) = *puVar2;
    return;
  case 0x13:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x23f0) = *puVar2;
    return;
  case 0x14:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23f4) = temp_v0;
    return;
  case 0x15:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23f8) = temp_v0;
    return;
  case 0x16:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x23fc) = temp_v0;
    return;
  case 0x17:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    puVar2 = (unsigned int *)(param_2 + 0x2400);
    break;
  case 0x18:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    puVar2 = (unsigned int *)(param_2 + 0x2404);
    break;
  case 0x19:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    temp_v0 = *puVar2;
    puVar2 = (unsigned int *)(param_2 + 0x2408);
    break;
  case 0x1a:
    puVar2 = (unsigned int *)asdListBoxGetIntValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    temp_v0 = *puVar2;
    puVar2 = (unsigned int *)(param_2 + 0x240c);
    break;
  default:
    return;
  }
  *puVar2 = temp_v0;
  return;
}

} /* extern "C" */
