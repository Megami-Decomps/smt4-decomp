#include "common.h"
struct Model {u32 unk00;u32 flags;};
struct ModelHolder {u32 unk00;Model *model;};
struct ModelSlot {ModelHolder *holder;u8 unk04[36];};
struct ModelOwner {u8 unk000[400];ModelSlot slots[50];};
/* Activates every present model in the fifty slots. */
extern "C" void asdModelActivateOwnedSlots(ModelOwner *owner){for(int i=0;i<50;++i)if(owner->slots[i].holder!=NULL)owner->slots[i].holder->model->flags|=3;}
