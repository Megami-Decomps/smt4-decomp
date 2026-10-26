#ifndef CLASSES_OBJ421AA4REQUESTS_H
#define CLASSES_OBJ421AA4REQUESTS_H

#include "classes/Obj421aa4.h"

/* The sound manager's request queue: a request is a node of `words` words taken from the manager,
 * stamped, filled in and appended to its pending list. */
extern "C" {
Obj421aa4Manager *FUN_002baed8(void);
Obj421aa4Manager *FUN_002bae7c(void);
/* Flushes the manager's pending requests; returns a token FUN_002b4b94 waits on. */
s32 FUN_002bad74(Obj421aa4Manager *manager, s32 value);
Obj421aa4Node *FUN_002b4f64(Obj421aa4Manager *manager, int words);
void listAppendNode(Obj421aa4Manager *manager, Obj421aa4Node *node);
}

/* Allocates a request node of `words` words, stamped with the manager's current stamp. */
static __inline Obj421aa4Node *soundRequestBegin(Obj421aa4Manager *manager, int words)
{
    Obj421aa4Node *node = FUN_002b4f64(manager, words);
    node->stamp = manager->unk184;
    return node;
}

#endif
