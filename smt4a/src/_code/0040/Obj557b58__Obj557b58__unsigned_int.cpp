#include "classes/Obj557b58.h"
extern "C" void FUN_00405dec(Obj557b58 *object, u32 resource);
/* Initializes the owned-item vector and the object's state from the model resource. */
Obj557b58::Obj557b58(u32 resource){items.begin=NULL;items.end=NULL;items.capacity=NULL;for(int i=0;i<12;++i)unk10[i]=0;FUN_00405dec(this,resource);}
