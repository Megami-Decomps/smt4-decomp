/* NON_MATCHING: retail uses r5/r6 and STM for request arguments; compiled code uses r4/r5 and STRD with different scheduling. */
#include "classes/Obj421aa4.h"

extern "C" {
Obj421aa4Manager* FUN_002baed8(void);
Obj421aa4Node* FUN_002b4f64(Obj421aa4Manager* manager, u32 words);
void listAppendNode(Obj421aa4Manager* manager, Obj421aa4Node* node);

// Enqueues a type-0x30 sound-manager request.
void FUN_00380894(u32 id, void* argument)
{
    Obj421aa4Manager* manager = FUN_002baed8();
    Obj421aa4Node* node = FUN_002b4f64(manager, 6);
    node->stamp = manager->unk184;
    node->type = 0x30;
    node->id = id;
    node->arg = argument;
    listAppendNode(manager, node);
}
}
