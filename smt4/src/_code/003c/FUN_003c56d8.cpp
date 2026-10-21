#include "romwright_types.h"

extern "C" {

extern unsigned int listBoxItemHasOwner(unsigned int);
extern unsigned int *asdListBoxGetItemValuePtr(unsigned int, unsigned int);
extern unsigned int asdListBoxGetSelectedItemId(unsigned int);


void FUN_003c56d8(int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = asdListBoxGetSelectedItemId(*(unsigned int *)(param_1 + 0x10));
  switch(temp_v0) {
  case 0:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22a8) = temp_v0;
    return;
  case 1:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22ac) = temp_v0;
    return;
  case 2:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22b0) = temp_v0;
    return;
  case 3:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22b4) = *puVar2;
    return;
  case 4:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22b8) = *puVar2;
    return;
  case 5:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22bc) = temp_v0;
    return;
  case 6:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22c0) = temp_v0;
    return;
  case 7:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22c4) = temp_v0;
    return;
  case 8:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22c8) = temp_v0;
    return;
  case 9:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22cc) = *puVar2;
    return;
  case 10:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22d0) = *puVar2;
    return;
  case 0xb:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22d4) = *puVar2;
    return;
  case 0xc:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22d8) = *puVar2;
    return;
  case 0xd:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22dc) = *puVar2;
    return;
  case 0xe:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22e0) = temp_v0;
    return;
  case 0xf:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22e4) = *puVar2;
    return;
  case 0x10:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22e8) = *puVar2;
    return;
  case 0x11:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22ec) = temp_v0;
    return;
  case 0x12:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22f0) = *puVar2;
    return;
  case 0x13:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x22f4) = *puVar2;
    return;
  case 0x14:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22f8) = temp_v0;
    return;
  case 0x15:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x22fc) = temp_v0;
    return;
  case 0x16:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x2300) = temp_v0;
    return;
  case 0x17:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x2304) = temp_v0;
    return;
  case 0x18:
    temp_v0 = listBoxItemHasOwner(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_2 + 0x2308) = temp_v0;
    return;
  case 0x19:
    puVar2 = (unsigned int *)asdListBoxGetItemValuePtr(*(unsigned int *)(param_1 + 0x10),temp_v0);
    *(unsigned int *)(param_2 + 0x230c) = *puVar2;
    return;
  default:
    return;
  }
}

} /* extern "C" */
