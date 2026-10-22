/* NON_MATCHING: recovered map cleanup and implicit embedded-member teardown use different register allocation. */
#include "classes/Obj558c28.h"
extern "C" {
void asdOperatorDeleteArray(void *memory);
void FUN_002eb624(void *object);
void FUN_00117828(void *object);
PooledNodeList *nodeListReleaseStorage(PooledNodeList *list);
Obj558c28Child **arrayElementAddress_002f32d4(Obj558c28Children *array, s32 index);
void FUN_0012d86c(Obj558c28MapNode **result, Obj558c28MapList *list, Obj558c28MapNode **begin, Obj558c28MapNode **end);
void FUN_002f3474(Obj558c28MapList *list, Obj558c28MapNode *replacement, u32 invoke);
}

inline Obj558c28Resource30::~Obj558c28Resource30() { FUN_002eb624(this); }
inline Obj558c28Resource70::~Obj558c28Resource70() { FUN_002eb624(this); }
inline Obj558c28Resource20::~Obj558c28Resource20() { FUN_00117828(this); }
inline Obj558c28Pool::~Obj558c28Pool() { nodeListReleaseStorage(this); }
inline Obj558c28Children::~Obj558c28Children() { asdOperatorDeleteArray(begin); }

Obj558c28::~Obj558c28()
{
    for (s32 i = 0; i < 4; ++i) {
        Obj558c28Child **entry = arrayElementAddress_002f32d4(&children, i);
        if (*entry != NULL) {
            delete *entry;
        }
    }
    if (map != NULL) {
        Obj558c28MapList *list = &map->list;
        Obj558c28MapNode *end = list->end;
        if (end != NULL) {
            Obj558c28MapNode *begin = (Obj558c28MapNode *)end->payload;
            Obj558c28MapNode *result;
            FUN_0012d86c(&result, list, &begin, &end);
            FUN_002f3474(list, map->list.end, 0);
            while (list->head != NULL) {
                Obj558c28MapNode *node = list->head;
                list->head = node->next;
                asdOperatorDeleteArray(node->payload);
                asdOperatorDeleteArray(node);
            }
        }
        asdOperatorDeleteArray(map);
    }
}
